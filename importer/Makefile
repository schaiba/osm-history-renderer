#------------------------------------------------------------------------------
#
#  osm history importer makefile
#
#------------------------------------------------------------------------------

CXX = g++

CXXFLAGS = -g -O3 -Wall -Wextra -pedantic
CXXFLAGS += -D_LARGEFILE_SOURCE -D_FILE_OFFSET_BITS=64
#CXXFLAGS += -Wredundant-decls -Wdisabled-optimization
#CXXFLAGS += -Wpadded -Winline

# path to osmium
CXXFLAGS += -I../../osmium/include

# compile & link against expat to have xml reading support
LDFLAGS += -lexpat

# compile & link against postgres to have database access
LDFLAGS += -lpq

# compile & link against proj4 for converting wgs84 to sperical mercator
LDFLAGS += -lproj

# compile &  link against libs needed for protobuf reading and writing
LDFLAGS += -lz -lprotobuf-lite -losmpbf -lpthread

# compile &  link against geos for multipolygon extracts
CXXFLAGS += -DOSMIUM_WITH_GEOS
LDFLAGS += -lgeos

.PHONY: all clean install

all: osm-history-importer

osm-history-importer: importer.cpp handler.hpp sorting_checker.hpp
	$(CXX) $(CXXFLAGS) -o $@ $< $(LDFLAGS)

install:
	install -m 755 -g root -o root -d $(DESTDIR)/usr/bin
	install -m 755 -g root -o root osm-history-importer $(DESTDIR)/usr/bin/osm-history-importer

clean:
	rm -f *.o core osm-history-importer
