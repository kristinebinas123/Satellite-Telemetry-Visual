add_library(core 
cEci.cpp
cJulian.cpp 
coord.cpp
cSite.cpp
cTLE.cpp
cVector.cpp
globals.cpp
stdafx.cpp
)

target_include_directories(core PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)



