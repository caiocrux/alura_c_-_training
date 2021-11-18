cmake_minimum_required(VERSION 3.2)

project(sampleCmake)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_BUILD_TYPE Debug)

include_directories(include)
include_directories(src)

set (Sample_VERSION_MAJOR 1)
set (Sample_VERSION_MINOR 1)
set (Sample_VERSION_PATCH 1)

configure_file(
  "${PROJECT_SOURCE_DIR}/SampleConfig.h.in"
  "${PROJECT_BINARY_DIR}/SampleConfig.h"
  )

include_directories("${PROJECT_BINARY_DIR}")

add_executable( alura_conta
                src/main.cpp
                src/conta.cpp
                src/caixa.cpp
                src/gerente.cpp
                src/conta_poupanca.cpp
                src/conta_corrente.cpp
                src/titular.cpp
                src/cpf.cpp
              # src/pessoa.cpp
                src/funcionario.cpp
                src/autenticavel.cpp

                include/conta.hpp
                include/autenticavel.hpp
                include/gerente.hpp
                include/caixa.hpp
                include/conta_poupanca.hpp
                include/conta_corrente.hpp
                include/titular.hpp
                include/cpf.hpp
                include/pessoa.hpp
                include/dias_da_semana.hpp
                include/funcionario.hpp )
