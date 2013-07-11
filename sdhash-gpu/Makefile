
SOURCES=matrixCompare.cu matrixCompare.cpp
INCLUDES=-I../sdbf -I../external/
LDFLAGS1=-L../ -L../external/stage/lib
LDFLAGS2=-lsdbf -lboost_regex -lboost_system -lboost_filesystem -lboost_program_options -lc -lm -lcrypto -lboost_thread -lpthread

CC=nvcc

all:
	$(CC) $(INCLUDES) $(LDFLAGS1) -o sdhash-gpu $(SOURCES) $(LDFLAGS2)


#nvcc I/home/cequates/zaphod/trunk/sdbf -L/home/cequates/zaphod/trunk -L/home/cequates/zaphod/trunk/external/stage/lib -o matrixCompare matrixCompare.cu matrixCompare.cpp 
