# ==============================
# Java-M3G compile config file.
# ==============================

# ==============================
# java-m3g sources
# ==============================
file (GLOB JAVA_M3G_SRCS *.cpp)

# ==============================
# java-m3g headers
# ==============================
# no need.

# ==============================
# java-m3g target
# ==============================
add_library (java-m3g SHARED ${JAVA_M3G_SRCS})

# ==============================
# installer
# ==============================
install (TARGETS java-m3g LIBRARY DESTINATION lib)

# ==============================
# compile flags
# ==============================
set (CMAKE_INCLUDE_CURRENT_DIR ON)

# ==============================
# dependent libraries
# ==============================
include_directories   (${JAVA_M3G_REQUIRED_INCLUDE_DIR})
target_link_libraries (java-m3g ${JAVA_M3G_REQUIRED_LIBRARIES})


# ==============================
# precompiled include dirs
# ==============================
set (JAVA_M3G_PRECOMPILED_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/external/include)
include_directories (${JAVA_M3G_PRECOMPILED_INCLUDE_DIR})
message (STATUS "JAVA_M3G_PRECOMPILED_INCLUDE_DIR = ${JAVA_M3G_PRECOMPILED_INCLUDE_DIR}")

# ==============================
# precompiled libraries
# ==============================
set (M3G_LIBRARY   ${CMAKE_CURRENT_SOURCE_DIR}/external/lib/libm3g.so)
set (JAVA_M3G_PRECOMPILED_LIBRARIES  ${M3G_LIBRARY})


target_link_libraries (java-m3g ${JAVA_M3G_PRECOMPILED_LIBRARIES})
message (STATUS "JAVA_M3G_PRECOMPILED_LIBRARIES = ${JAVA_M3G_PRECOMPILED_LIBRARIES}")


