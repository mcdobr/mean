# Mean

## Pull dependencies:
```
conan install . --build=missing
```

## How to build:
```
cmake --preset conan-release
cd build/Release
make
./mean
```

## Objectives
- Pull some useful libraries with Conan into project and statically link them
- Include CUnit and try out unit testing in C
- Create a CI job
- Enforce modern C standard on build process: C17 or C23
- Try out asprintf
- Try to cross-compile to Windows (probably need MinGW)
- Try to display Unicode text
- Move to dynamic linking
- Look into https://github.com/oz123/awesome-c?tab=readme-ov-file and find other cool things to do

