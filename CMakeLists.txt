cmake_minimum_required (VERSION 3.5)

project(hello)
add_subdirectory(src)

SET(_potFile po/${PROJECT_NAME}.pot)
SET(_src_list src/hello.cc src/voice.cc src/main.cc)
ADD_CUSTOM_COMMAND(OUTPUT ${_potFile}
    COMMAND xgettext --keyword=_ --language=C++ --add-comments --sort-output -o ${_potFile} ${_src_list}
    DEPENDS ${_src_list}
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
    COMMENT "Extract translatable messages to ${_potFile}"
)

ADD_CUSTOM_TARGET(pot_file
DEPENDS ${_potFile}
)
