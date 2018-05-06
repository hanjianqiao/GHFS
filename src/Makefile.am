bin_PROGRAMS = hello

hello_SOURCES = main.cc hello.cc hello.h voice.cc voice.hpp

hello_LDADD = -lSDL2 -lpthread

if OSX
    hello_LDADD += -lintl        
endif
