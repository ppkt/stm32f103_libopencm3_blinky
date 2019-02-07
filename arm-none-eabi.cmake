set(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_SYSTEM_PROCESSOR arm)
set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_PACKAGE ONLY)

set(OBJCOPY arm-none-eabi-objcopy)
set(CMAKE_C_COMPILER arm-none-eabi-gcc)

set(CMAKE_EXE_LINKER_FLAGS_INIT "--specs=rdimon.specs")