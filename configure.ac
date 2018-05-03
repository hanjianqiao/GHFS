AC_INIT([hello], [0.1.0])
AC_CONFIG_SRCDIR([src/main.cc])
AM_INIT_AUTOMAKE

INTI_REQUIRED_VERSION=1.0.7
# PKG_CHECK_MODULES(INTI, inti-1.0 > $INTI_REQUIRED_VERSION)
AC_SUBST(INTI_CFLAGS)
AC_SUBST(INTI_LIBS)

LDFLAGS="$LDFLAGS -lintl"

AC_PROG_CXX

AC_DEFINE([LOCALEDIR], ["/Users/hanjianqiao/git/GHFS/po"], [Directory stores i18n files])
AC_DEFINE([LOCALPKG], ["hello"], [i18n package domain name])

AC_OUTPUT(Makefile src/Makefile)
