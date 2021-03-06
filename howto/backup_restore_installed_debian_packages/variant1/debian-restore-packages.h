#!/bin/bash

# Restore packages
sudo apt-key add ~/Repo.keys
sudo cp ~/sources.list /etc/apt/sources.list 
sudo apt-get update
sudo apt-get install dselect
sudo dpkg --set-selections < ~/Package.list
sudo apt-get dselect-upgrade -y