set(CORE_NAME "M4EF" CACHE STRING "" FORCE)
set(MCU_NAME "STM32F303K8" CACHE STRING "" FORCE)
set(_MSDK_BOARD_NAME_ "GENERIC_BOARD" CACHE STRING "" FORCE)
set(_MSDK_DIP_SOCKET_TYPE_ "" CACHE STRING "" FORCE)
set(_MSDK_HAL_LOW_LEVEL_TARGET_ "mikroe" CACHE STRING "" FORCE)
set(_MSDK_PACKAGE_NAME_ "Tx" CACHE STRING "" FORCE)
set(TOOLCHAIN_ID "mikrocarm" CACHE STRING "" FORCE)
set(OSC "1" CACHE STRING "" FORCE)


set(COMPILER_FLAGS -C -SSA -MF -O11111114   "-DBG")
set(LINKER_FLAGS -C -SSA -MF -O11111114   "-DBG")

string(TOLOWER ${CMAKE_BUILD_TYPE} build_type)
if (build_type STREQUAL debug)
    list(APPEND COMPILER_FLAGS "-UICD")
    list(APPEND LINKER_FLAGS "-UICD")
endif()

file(TO_CMAKE_PATH "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/STM32F303K8.jcfg" JCFG_FILE_VAL)
set(JCFG_FILE  ${JCFG_FILE_VAL} CACHE STRING "" FORCE)

file(TO_CMAKE_PATH "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/lib/lib_core.a" CORE_LIB_VAL)
set(CORE_LIB ${CORE_LIB_VAL} CACHE STRING "" FORCE)

set(SEARCH_PATHS "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/build-NUCLEO-F303K8;D:/NECTOStudio/NECTOStudio/compilers/ARM/mikroC/core/def;C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller" CACHE STRING "" FORCE)

set(CMAKE_MikroC_COMPILER "D:/NECTOStudio/NECTOStudio/compilers/ARM/mikroC/mikroCARM.exe" CACHE INTERNAL "")
set(CMAKE_MikroC_COMPILER_ID "mikroC" CACHE INTERNAL "")

set(CMAKE_MikroC_OUTPUT_EXTENSION_REPLACE 1)
set(CMAKE_MikroC_OUTPUT_EXTENSION ".emcl")

# set CMAKE_SYSTEM_NAME to define build as CMAKE_CROSSCOMPILING
set(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_SYSTEM_VERSION 1)

SET(CMAKE_MikroC_COMPILER_WORKS TRUE CACHE INTERNAL "")
SET(CMAKE_MikroC_COMPILER_FORCED TRUE CACHE INTERNAL "")
SET(CMAKE_MikroC_COMPILER_ID_RUN TRUE CACHE INTERNAL "")

set(CMAKE_TRY_COMPILE_TARGET_TYPE STATIC_LIBRARY)

# add compiler option flags
add_compile_options(${COMPILER_FLAGS})
# add link option flags
add_link_options(${LINKER_FLAGS})

set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_PACKAGE ONLY)

file(TO_CMAKE_PATH "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/lib/cmake" MIKROSDK_PATH)
file(TO_CMAKE_PATH "C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/lib/cmake" MIKROC_CORE_PATH)


set(MIKROSDK_ROOT_PATH ${MIKROSDK_PATH})
set(MIKROC_CORE_ROOT_PATH ${MIKROC_CORE_PATH})
#append to cmake_prefix_path
list(APPEND CMAKE_PREFIX_PATH ${MIKROSDK_ROOT_PATH})
list(APPEND CMAKE_PREFIX_PATH ${MIKROC_CORE_ROOT_PATH})

list(APPEND CMAKE_MODULE_PATH "C:/Users/ric_e/AppData/Local/MIKROE/NECTOStudio2/cmake;C:/Users/ric_e/Documents/MCU_Workspace/Public_Projects/MCD_Controller/MCD_Controller/.meproject/setup/Debug/cmake")