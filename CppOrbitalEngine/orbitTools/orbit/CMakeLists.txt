add_library (orbit
     cNoradBase.cpp
     cNoradSDP4.cpp 
     cNoradSGP4.cpp
     cOrbit.cpp
     cSatellite.cpp
     stdafx.cpp
    



)

target_include_directories(orbit PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(orbit PUBLIC core)

