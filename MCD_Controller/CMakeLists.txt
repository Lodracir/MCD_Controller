cmake_minimum_required(VERSION 3.19)

if (${TOOLCHAIN_LANGUAGE} MATCHES "MikroC")
    project(MCD_Controller LANGUAGES MikroC)
else()
    project(MCD_Controller LANGUAGES C ASM)
endif()

add_executable(MCD_Controller main.c)

if (${MIKROSDK_TYPE} STREQUAL "mikrosdk")
find_package(MikroC.Core REQUIRED)
target_link_libraries(MCD_Controller
    PUBLIC
        MikroC.Core
)
else()
find_package(MikroC.System REQUIRED)
target_link_libraries(MCD_Controller
    PUBLIC
        MikroC.System
)
endif()
