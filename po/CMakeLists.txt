foreach(locale ${LOCALES})
    ADD_CUSTOM_COMMAND(OUTPUT ${locale}/LC_MESSAGES/${PROJECT_NAME}.mo
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
        COMMAND mkdir -p ${locale}/LC_MESSAGES
        COMMAND msgfmt --output-file=${locale}/LC_MESSAGES/${PROJECT_NAME}.mo ${locale}/${PROJECT_NAME}.po
    )
    set(MO_DEP ${MO_DEP} ${locale}/LC_MESSAGES/${PROJECT_NAME}.mo)
endforeach()
ADD_CUSTOM_TARGET(mo_file
    DEPENDS ${MO_DEP}
)
