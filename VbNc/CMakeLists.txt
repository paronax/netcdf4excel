cmake_minimum_required(VERSION 3.23)
project(vbnc CXX)

# External dependencies - install them or compile them 
# see : https://github.com/HDFGroup/hdf5
# see : https://github.com/Unidata/netcdf-c
find_package(NetCDF REQUIRED)
find_package(HDF5 REQUIRED COMPONENTS C HL)

# Usefull for 32 bit Excel 
if(NOT "${CMAKE_GENERATOR}" MATCHES "(Win64|IA64)")
	add_definitions(-DWIN32 -D_WINDOWS -D_USRDLL -D_WIN32_WINNT=0x0501 -DAPIENTRY=__stdcall)
endif()

# Artefact definitions
set(SOURCES
        "src/vbnc.h"
		"src/vbnc.cpp"
)
add_library(vbnc SHARED ${SOURCES})
target_link_libraries(vbnc netCDF::netcdf hdf5::hdf5_hl hdf5::hdf5)
set_target_properties(vbnc PROPERTIES
    LINK_FLAGS "/DEF:${CMAKE_SOURCE_DIR}/vbnc.def"
)

# Installation
install(TARGETS vbnc)