# CMakeList.txt: projeto de CMake para Database_hello, incluir origem e definir
# lógica específica a um projeto aqui.
#
cmake_minimum_required (VERSION 3.8)
project (
	"RankIt"
	LANGUAGES CXX C
    VERSION 0.0.0.0)

#
set(CMAKE_CXX_STANDARD 17)

# Adicione a origem ao executável deste projeto.
add_library(RankIt "src/Card.hpp" "src/Deck.hpp" "src/Rank.hpp")
add_executable(Debug "src/Card.hpp" "src/Deck.hpp" "src/Rank.hpp" "src/debug.cpp")

#
set_target_properties(RankIt PROPERTIES LINKER_LANGUAGE CXX)

# TODO: Adicione testes e instale destinos, se necessário.
