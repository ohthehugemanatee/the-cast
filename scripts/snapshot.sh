#!/usr/bin/env bash

# Creates a platform.sh snapshot.

set -e

if [ "$PLATFORM_ENVIRONMENT" = "master-7rqtwti" ]
  then
    # trigger a snapshot.
    platform snapshot:create --yes --no-wait -p $PLATFORM_PROJECT -e master
fi