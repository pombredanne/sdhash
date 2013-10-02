AM_CXXFLAGS = @CL_CFLAGS@ @SIMD_FLAGS@ @OPENMP_CXXFLAGS@
lib_LTLIBRARIES = libsdbf.la
libsdbf_la_SOURCES = sdbf/sdbf_class.cc sdbf/sdbf_core.cc sdbf/map_file.cc sdbf/entr64.cc sdbf/base64.cc sdbf/bf_utils.cc sdbf/error.cc sdbf/sdbf_conf.cc sdbf/sdbf_set.cc base64/modp_b64.cc sdbf/bloom_filter.cc lz4/lz4.cc
bin_PROGRAMS = sdhash
sdhash_SOURCES = sdhash-src/sdhash.cc sdhash-src/sdhash_threads.cc
sdhash_LDADD= libsdbf.la
