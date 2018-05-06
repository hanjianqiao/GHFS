AC_PREREQ(2.68)

AC_INIT([hello], [0.1.0])
AC_CONFIG_SRCDIR([src/main.cc])
AM_INIT_AUTOMAKE

AC_CHECK_FUNCS([setlocale])
AC_CHECK_HEADERS([libintl.h, locale.h])

SDL2_REQUIRED_VERSION=2.0.8
PKG_CHECK_MODULES([SDL2], [sdl2 > $SDL2_REQUIRED_VERSION])
AC_SUBST([INTI_CFLAGS])
AC_SUBST([INTI_LIBS])

LDFLAGS="$LDFLAGS"

AC_PROG_CXX
AC_PROG_CC

AC_DEFINE([LOCALEDIR], ["/Users/hanjianqiao/git/hello/po"], [Directory stores i18n files])
AC_DEFINE([LOCALPKG], ["hello"], [i18n package domain name])

AC_OUTPUT(Makefile src/Makefile)
