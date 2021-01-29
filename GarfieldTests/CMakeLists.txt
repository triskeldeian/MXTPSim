find_package(Garfield 0.3 REQUIRED)

add_executable(GenerateGarfieldGasFile GenerateGarfieldGasFile.cpp)
target_link_libraries(GenerateGarfieldGasFile PRIVATE Garfield::Garfield)