AC_PREREQ(2.68)

AC_INIT([hello], [0.1.0])
AC_CONFIG_SRCDIR([src/main.cc])
AM_INIT_AUTOMAKE

# AC_CANONICAL_HOST is needed to access the 'host_os' variable
AC_CANONICAL_HOST

build_linux=no
build_windows=no
build_mac=no

# Detect the target system
case "${host_os}" in
    linux*)
        build_linux=yes
        ;;
    cygwin*|mingw*)
        build_windows=yes
        ;;
    darwin*)
        build_mac=yes
        ;;
    *)
        AC_MSG_ERROR(["OS $host_os is not supported"])
        ;;
esac

# Pass the conditionals to automake
AM_CONDITIONAL([LINUX], [test "$build_linux" = "yes"])
AM_CONDITIONAL([WINDOWS], [test "$build_windows" = "yes"])
AM_CONDITIONAL([OSX], [test "$build_mac" = "yes"])

AC_MSG_NOTICE(["Platform: ${host_os}"])

AC_CHECK_FUNCS([setlocale])
AC_CHECK_HEADERS([libintl.h, locale.h])

SDL2_REQUIRED_VERSION=2.0.0
PKG_CHECK_MODULES([SDL2], [sdl2 > $SDL2_REQUIRED_VERSION])
AC_SUBST([SDL2_CFLAGS])
AC_SUBST([SDL2_LIBS])

if [[ $build_mac == "yes" ]]; then
        INTL_REQUIRED_VERSION=2.0.0
        PKG_CHECK_MODULES([INTL], [intl > $INTL_REQUIRED_VERSION])
        AC_SUBST([INTL_CFLAGS])
        AC_SUBST([INTL_LIBS])
fi

LDFLAGS="$LDFLAGS"

AC_PROG_CXX
AC_PROG_CC

AC_DEFINE([LOCALEDIR], ["/Users/hanjianqiao/git/hello/po"], [Directory stores i18n files])
AC_DEFINE([LOCALPKG], ["hello"], [i18n package domain name])


AC_OUTPUT(Makefile src/Makefile)
