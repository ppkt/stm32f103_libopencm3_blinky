# How to build

In general, in order to compile something to ARM you have to have working cross-compiler ([ARM GCC](https://developer.arm.com/open-source/gnu-toolchain/gnu-rm) for example).

*CMake is also required. Because this project is prepared for stm32, [st-link](https://github.com/texane/stlink) is also necessary*

## Compiling from scratch
After cloning this repo, please create an empty directory for CMake and generate all required files (note: you may want to edit `CMakeLists.txt` / `arm-none-eabi.cmake` / `main.c` files to match your CPU):

```sh
$ git submodule update --init --recursive
$ mkdir build/
$ cd build/
$ cmake -DCMAKE_TOOLCHAIN_FILE=../arm-none-eabi.cmake ..
```

Then, you have to build libopencm3 library and compile project (last step, `make upload` will flash your uC):

```sh
$ make libopencm3
$ make 
$ make upload
```

Happy hacking.
