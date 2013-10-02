AC_INIT(sdhash-ses,3.3-ses,sesuncedu@gmail.com)
AC_CONFIG_MACRO_DIR([m4])
AC_CONFIG_AUX_DIR(config)
AC_CONFIG_HEADERS(config.h)
AM_INIT_AUTOMAKE([no-define foreign subdir-objects])
AC_CONFIG_FILES(Makefile )
: ${PROF="-g -O2"}
AC_SUBST(PROF)
: ${CFLAGS=${PROF}}
: ${CXXFLAGS=${PROF}}
AC_PROG_CXX([clang++ g++ c++ CC])
AC_PROG_CC([clang gcc cc])
AC_PROG_LIBTOOL
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
AX_BOOST_BASE
AX_BOOST_THREAD
AX_BOOST_FILESYSTEM
AX_BOOST_PROGRAM_OPTIONS
AX_BOOST_SYSTEM
AC_HAVE_LIBRARY([crypto])
AC_CHECK_HEADER([google/protobuf/stubs/common.h],[],
   [echo "google protobuf header does not seem to be available"
    exit 1])
AC_HAVE_LIBRARY([protobuf])
AC_LANG_POP([C++])
AC_OUTPUT
