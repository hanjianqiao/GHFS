cmake_minimum_required (VERSION 3.5)

set(LOCALES fr zh_CN)
foreach(locale ${LOCALES})
    ADD_CUSTOM_COMMAND(OUTPUT ${locale}/LC_MESSAGES/hello.mo
        COMMAND mkdir ${locale}/LC_MESSAGES
        COMMAND msgfmt --output-file=${locale}/LC_MESSAGES/hello.mo ${locale}/hello.po
    )
    set(MO_DEP ${MO_DEP} ${locale}/LC_MESSAGES/hello.mo)
endforeach()

ADD_CUSTOM_TARGET(mo_file
DEPENDS ${MO_DEP}
)