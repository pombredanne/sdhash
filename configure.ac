AC_INIT(sdhash-ses,3.3-ses,sesuncedu@gmail.com)
AC_CONFIG_MACRO_DIR([m4])
AC_CONFIG_AUX_DIR(config)
AC_CONFIG_HEADERS(config.h)
AM_INIT_AUTOMAKE([no-define foreign])
AC_CONFIG_FILES(Makefile )
AC_PROG_LIBTOOL
AC_PROG_CXX
AX_CHECK_CL
if test "X$no_cl" = "Xyes"; then
    AC_MSG_FAILURE([You need OpenCL])
fi
AC_LANG_PUSH([C++])
AC_OPENMP
ax_save_CXXFLAGS=$CXXFLAGS
CXXFLAGS="$CXXFLAGS -msse4.2"
AC_COMPILE_IFELSE(
 [AC_LANG_SOURCE([#include <smmintrin.h>
])],[SIMDFLAGS="-msse4.2"],[CXXFLAGS=$ax_save_CXXFLAGS])
AC_SUBST(HAVE_SSE42)
AC_SUBST(SIMD_FLAGS)
AC_HAVE_LIBRARY([boost_system])
AC_HAVE_LIBRARY([boost_filesystem])
AC_HAVE_LIBRARY([boost_program_options])
AC_HAVE_LIBRARY([boost_thread-mt])
AC_HAVE_LIBRARY([crypto])

dnl AC_CHECK_LIB([boost],[main],[AC_SUBST(LIB_BOOST,["-lboost_system -lboost_filesystem -lboost_program_options -lboost_thread"])])
AC_LANG_POP([C++])
AC_OUTPUT
