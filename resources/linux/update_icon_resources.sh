#!/bin/bash
#
# make icons using Inkscape

# Icon mappings(Source Image|App Icon|Mime Icon )
ICONS="icon_bitmap2component|bitmap2component|
       icon_eeschema|eeschema|application-x-kicad-schematic
       icon_gerbview|gerbview|application-x-kicad-gerber
       icon_kicad|kicad|application-x-kicad-project
       icon_pcbcalculator|pcbcalculator|application-x-kicad-pcbcalculator
       icon_pagelayout_editor|pl_editor|
       icon_pcbnew|pcbnew|application-x-kicad-pcb

       icon_cvpcb||application-x-kicad-componets
       netlist||application-x-kicad-netlist
       pagelayout_load||application-x-kicad-pagelayout
       post_compo||application-x-kicad-position
       post_drill||application-x-kicad-drill"

# Static image sizes to generate
SIZES="16x16
     22x22
     24x24
     32x32
     48x48"

TOP_DIR="$(dirname ${0})/../.."
IMG_SRC_DIR="${TOP_DIR}/bitmaps_png/sources"
IMG_MIME_DIR="${TOP_DIR}/resources/linux/mime/icons/hicolor"

# create output directories
cd "${IMG_MIME_DIR}"
rm -r *
echo -e '\E[0;32m'"Copying scalable icons."
tput sgr0

# copy sources to the scalable dir
for ICON in ${ICONS}
do
    SRC="$(echo "${ICON}" | cut -d '|' -f 1)"
    DST="$(echo "${ICON}" | cut -d '|' -f 2)"
    MIME="$(echo "${ICON}" | cut -d '|' -f 3)"

    if [ -n "${SRC}" ]; then
        if [ -n "${DST}" ]; then
            mkdir -p "${IMG_MIME_DIR}/scalable/apps"
            cp "${IMG_SRC_DIR}/${SRC}.svg" "${IMG_MIME_DIR}/scalable/apps/${DST}.svg"
            mkdir -p "${IMG_MIME_DIR}/svg/apps"
            cp "${IMG_SRC_DIR}/${SRC}.svg" "${IMG_MIME_DIR}/svg/apps/${DST}.svg"

        fi

        if [ -n "${MIME}" ]; then
            mkdir -p "${IMG_MIME_DIR}/scalable/mimetypes"
            cp "${IMG_SRC_DIR}/${SRC}.svg" "${IMG_MIME_DIR}/scalable/mimetypes/${MIME}.svg"
            mkdir -p "${IMG_MIME_DIR}/svg/mimetypes"
            cp "${IMG_SRC_DIR}/${SRC}.svg" "${IMG_MIME_DIR}/svg/mimetypes/${MIME}.svg"

        fi
    fi
done

echo -e '\E[0;32m'"Scalable icons was copied."
tput sgr0

# convert .svg files into static .png files
for SIZE in ${SIZES}
do
    SZ=${SIZE%x*}

    echo -e '\E[0;32m'"Creating directory ${SIZE}."
    tput sgr0

    for ICON in ${ICONS}
    do
        SRC="$(echo "${ICON}" | cut -d '|' -f 1)"
        DST="$(echo "${ICON}" | cut -d '|' -f 2)"
        MIME="$(echo "${ICON}" | cut -d '|' -f 3)"

        if [ -n "${SRC}" ]; then
            if [ -n "${DST}" ]; then
                echo -e '\E[0;32m'"\nMaking the applications icon with size ${SIZE} for ${DST}."
                tput sgr0
                mkdir -p "${IMG_MIME_DIR}/${SIZE}/apps"
                inkscape -f "${IMG_SRC_DIR}/${SRC}.svg" \
                         -e "${IMG_MIME_DIR}/${SIZE}/apps/${DST}.png" \
                         -w ${SZ} -h ${SZ} --export-area-snap
             fi

             if [ -n "${MIME}" ]; then
                 echo -e '\E[0;32m'"\nMaking the mimetypes icon with size ${SIZE} for ${MIME}."
                 tput sgr0
                 mkdir -p "${IMG_MIME_DIR}/${SIZE}/mimetypes"
                 inkscape -f "${IMG_SRC_DIR}/${SRC}.svg" \
                          -e "${IMG_MIME_DIR}/${SIZE}/mimetypes/${MIME}.png" \
                          -w ${SZ} -h ${SZ} --export-area-snap
             fi
        fi
    done
    echo -e '\E[0;32m'"Directory ${SIZE} was created."
    tput sgr0
done

