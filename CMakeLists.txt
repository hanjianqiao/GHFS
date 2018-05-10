cmake_minimum_required (VERSION 3.5)

project(hello)
add_subdirectory(src)

SET(_potFile po/${PROJECT_NAME}.pot)
SET(_src_list src/hello.cc src/voice.cc src/main.cc)
ADD_CUSTOM_COMMAND(OUTPUT ${_potFile}
    COMMAND xgettext --keyword=_ --language=C++ --add-comments --sort-output -o ${_potFile} ${_src_list}
    DEPENDS ${_src_list}
    WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
    COMMENT "Extract translatable messages to ${_potFile}"
)
ADD_CUSTOM_TARGET(pot_file
    DEPENDS ${_potFile}
)

set(LOCALES fr zh_CN)
foreach(locale ${LOCALES})
    ADD_CUSTOM_COMMAND(OUTPUT ${locale}/${PROJECT_NAME}.po
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
        COMMAND msginit --input=po/${PROJECT_NAME}.pot --locale=${locale} --output=po/${locale}/${PROJECT_NAME}.po
    )
    set(PO_DEP ${PO_DEP} ${locale}/${PROJECT_NAME}.po)
endforeach()
ADD_CUSTOM_TARGET(po_create
    DEPENDS ${PO_DEP}
)

set(LOCALES fr zh_CN)
foreach(locale ${LOCALES})
    ADD_CUSTOM_COMMAND(OUTPUT update_${locale}.po
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
        COMMAND msgmerge --update po/${locale}/${PROJECT_NAME}.po po/${PROJECT_NAME}.pot 
    )
    set(PO_UP_DEP ${PO_UP_DEP} update_${locale}.po)
endforeach()
ADD_CUSTOM_TARGET(po_update
    DEPENDS ${PO_UP_DEP}
)

add_subdirectory(po)