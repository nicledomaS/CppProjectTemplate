[![License][license-image]][license-url]

# CppProjectTemplate
C++ project template

## Build project
`cmake -B build -DFIND_MODULES=ON -DFIND_CONAN=ON -DFIND_TESTS=ON -DENABLE_TIDY=ON`

`cmake --build build/ -j4`

## Run tests
`cd build`

`ctest`

## Related project
[Cmake scripts for build c++ projects](https://github.com/nicledomaS/cmake/blob/master/README.md)

[license-image]: https://img.shields.io/badge/License-Apache%202.0-blue.svg
[license-url]: LICENSE
