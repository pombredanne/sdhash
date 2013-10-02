AM_CXXFLAGS = @CL_CFLAGS@ @SIMD_FLAGS@ @OPENMP_CXXFLAGS@ @BOOST_CPPFLAGS@
BOOST_LIBS= @BOOST_LDFLAGS@ @BOOST_THREAD_LIB@ @BOOST_PROGRAM_OPTIONS_LIB@ @BOOST_FILESYSTEM_LIB@ @BOOST_SYSTEM_LIB@
nodist_include_HEADERS = sdhash-src/version.h
lib_LTLIBRARIES = libsdbf.la 
libsdbf_la_SOURCES = sdbf/sdbf_class.cc sdbf/sdbf_core.cc sdbf/map_file.cc sdbf/entr64.cc sdbf/base64.cc \
 sdbf/bf_utils.cc sdbf/error.cc sdbf/sdbf_conf.cc sdbf/sdbf_set.cc sdbf/blooms.pb.cc sdbf/bloom_vector.cc \
 base64/modp_b64.cc sdbf/bloom_filter.cc \
 lz4/lz4.cc
libsdbf_la_LIBADD = ${BOOST_LIBS}
bin_PROGRAMS = sdhash sdhash-sr
sdhash_SOURCES = sdhash-src/sdhash.cc sdhash-src/sdhash_threads.cc
sdhash_LDADD= libsdbf.la
sdhash_sr_SOURCES = sdhash-src/sdhash-mr.cc
sdhash_sr_LDADD= libsdbf.la

sdhash-src/version.h:
	echo "#define REVISION \"`svnversion`\"" > sdhash-src/version.h
