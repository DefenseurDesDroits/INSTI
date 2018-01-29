#!/bin/bash

# drush --yes ensures all command are non interactive
# @sites ensures commands are run on all sites
# Begin maintenance mode
#drush --yes @sites vset --exact maintenance_mode 1
# Clear all caches
drush --yes @sites cc all
# Database updates
#drush --yes @sites updb
# Revert all features
#drush --yes @sites fra
# Clear all caches
#drush --yes @sites cc all
# Exit maintenance mode
#drush --yes @sites vset --exact maintenance_mode 0
