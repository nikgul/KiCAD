#! /usr/bin/bash

SRC_DIR="$(dirname ${0})"

# Copy Icons
cp -r ${SRC_DIR}/mime/icons/hicolor/* \
      /usr/share/icons/hicolor

# Copy Application entries
cp ${SRC_DIR}/mime/applications/* \
   /usr/share/applications/

# Copy MIME info
cp ${SRC_DIR}/mime/mime/packages/* \
   /usr/share/mime/packages/


# Update databases
gtk-update-icon-cache /usr/share/icons/hicolor
update-mime-database /usr/share/mime
update-desktop-database /usr/share/applications
