cmake_minimum_required(VERSION 3.19)

if (${TOOLCHAIN_LANGUAGE} MATCHES "MikroC")
    project(MCD_Controller LANGUAGES MikroC)
else()
    project(MCD_Controller LANGUAGES C ASM)
endif()

add_executable(MCD_Controller
main.c
main.h
drv_app.h
drv_app.c
)

############################ MCD_Controller GENERATED CODE START ###########################
find_package(MikroSDK.Driver.UART REQUIRED)
target_link_libraries(MCD_Controller PUBLIC MikroSDK.Driver.UART)
find_package(MikroSDK.Driver.GPIO.Out REQUIRED)
target_link_libraries(MCD_Controller PUBLIC MikroSDK.Driver.GPIO.Out)
find_package(MikroSDK.Driver.GPIO.In REQUIRED)
target_link_libraries(MCD_Controller PUBLIC MikroSDK.Driver.GPIO.In)
find_package(MikroSDK.Driver.ADC REQUIRED)
target_link_libraries(MCD_Controller PUBLIC MikroSDK.Driver.ADC)
find_package(MikroSDK.Board REQUIRED)
target_link_libraries(MCD_Controller PUBLIC MikroSDK.Board)
find_package(MikroC.Core REQUIRED)
target_link_libraries(MCD_Controller PUBLIC MikroC.Core)
############################ MCD_Controller GENERATED CODE END ###########################
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
