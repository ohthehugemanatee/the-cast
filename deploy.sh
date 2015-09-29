#!/bin/bash
# Deployment steps for a Drupal site. Should be run on each deployment.
# Usage: ./deploy.sh <environment>
# environment is one of: local, dev, staging, live.
ENV=$1
REPO_ROOT=`/bin/pwd`
PARENT_DIR=`/usr/bin/dirname "$REPO_ROOT"`
NOW=`date`

echo "Beginning deployment on $NOW..." >> $PARENT_DIR/last_deploy.log
if [[ -f "$REPO_ROOT/public/htaccess.$ENV" ]]; then
  echo 'Copying .htaccess'  >> $PARENT_DIR/last_deploy.log
  cd "$REPO_ROOT"/public && cp htaccess.$ENV .htaccess >> $PARENT_DIR/last_deploy.log
fi

if [[ -f "$REPO_ROOT/public/robots.txt.$ENV" ]]; then
  echo 'Copying robots.txt' >> $PARENT_DIR/last_deploy.log
  cd $REPO_ROOT/public && cp robots.txt.$ENV robots.txt >> $PARENT_DIR/last_deploy.log
fi

if [[ -f "$REPO_ROOT/public/sites/default/$ENV.settings.php" ]]; then
  echo 'Copying settings.php' >> $PARENT_DIR/last_deploy.log
  cd $REPO_ROOT/public/sites/default && cp $ENV.settings.php settings.php >> $PARENT_DIR/last_deploy.log
fi

echo 'Creating and simlinking files directory'  >> $PARENT_DIR/last_deploy.log
if [[ ! -d $PARENT_DIR/common/public/sites/default/files ]]; then
  mkdir -p $PARENT_DIR/common/public/sites/default/files 
fi
cd $REPO_ROOT/public/sites/default && ln -fns $PARENT_DIR/common/public/sites/default/files

echo 'Creating and simlinking private files directory' >> $PARENT_DIR/last_deploy.log
if [[ ! -d $PARENT_DIR/common/private ]]; then
  mkdir -p $PARENT_DIR/common/private
fi
ln -fns $PARENT_DIR/common/private $PARENT_DIR/private


echo 'Simlinking public directory' >> $PARENT_DIR/last_deploy.log
ln -fns $REPO_ROOT/public $PARENT_DIR/public

DRUSH=`which drush`

echo 'Making DB backup' >> $PARENT_DIR/last_deploy.log
drush -r $REPO_ROOT/public -p -y sql-dump |gzip > $PARENT_DIR/last-deploy.sql.gz

echo 'Running DB updates' >> $PARENT_DIR/last_deploy.log
drush -r $REPO_ROOT/public -p -y updb >> $PARENT_DIR/last_deploy.log

echo 'Reverting Features' >> $PARENT_DIR/last_deploy.log
drush -r $REPO_ROOT/public -p -y fra >> $PARENT_DIR/last_deploy.log

if [[ $ENV == 'dev' ]]; then
  echo 'Resetting admin password' >> $PARENT_DIR/last_deploy.log
  drush -r $REPO_ROOT/public -p -y upwd "The Cast Admin" --password="admin" >> $PARENT_DIR/last_deploy.log
fi

echo "Deployment on $NOW finished!" >> $PARENT_DIR/last_deploy.log