cmake_minimum_required(VERSION 3.30)

project(NPCScript)

# Ruta a tu FindANTLR.cmake local
set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmakemodules")

# ANTLR: usa el archivo jar solo si vas a generar .cpp manualmente
set(ANTLR_TAG "4.13.2")
set(ANTLR_EXECUTABLE "${CMAKE_CURRENT_SOURCE_DIR}/antlr-4.13.2-complete.jar")
if(NOT EXISTS "${ANTLR_EXECUTABLE}")
  message(FATAL_ERROR "Couldn't find: ${ANTLR_EXECUTABLE}")
endif()

# Buscar ANTLR usando el módulo local
find_package(ANTLR REQUIRED)
message(STATUS "Found ANTLR: ${ANTLR_VERSION}")
message(STATUS "ANTLR generated files dir: ${ANTLR_${PROJECT_NAME}_OUTPUT_DIR}")

# Buscar LLVM
find_package(LLVM REQUIRED CONFIG)
message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")
message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")

# Archivos fuente y gramática
file(GLOB SOURCES "src/*.cpp")
file(GLOB GFOURS "*.g4")

# Generar lexer, parser y visitor
antlr_target(${PROJECT_NAME} ${GFOURS} LEXER PARSER LISTENER VISITOR)

# Componentes de LLVM necesarios
llvm_map_components_to_libnames(
  llvm_libs
    core
    executionengine
    object
    orcjit
    support
    targetparser
    native
)

# Ejecutable final
add_executable(${PROJECT_NAME} ${SOURCES} ${ANTLR_${PROJECT_NAME}_CXX_OUTPUTS})

# Incluir headers y vincular librerías
target_include_directories(
  ${PROJECT_NAME} PRIVATE
  ${ANTLR_${PROJECT_NAME}_OUTPUT_DIR}
  ${LLVM_INCLUDE_DIRS}
  /usr/include/antlr4-runtime          # ✅ Header de ANTLR global
)
target_link_libraries(${PROJECT_NAME} PRIVATE antlr4-runtime ${llvm_libs})
add_definitions(${LLVM_DEFINITIONS})
target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_20)

# Para herramientas de análisis estático
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
message(STATUS "ANTLR output dir: ${ANTLR_NPCScript_OUTPUT_DIR}")
