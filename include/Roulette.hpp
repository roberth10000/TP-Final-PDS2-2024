#ifndef ROULETTE_HPP
#define ROULETTE_HPP

#include "User.hpp"       // Inclusão do arquivo de cabeçalho User.hpp para utilizar a classe User
#include <cstdlib>        // Inclusão da biblioteca cstdlib para usar std::rand e std::srand
#include <ctime>          // Inclusão da biblioteca ctime para usar std::time

class Roulette {
public:
    // Método estático que retorna um filme não assistido aleatório de um usuário
    static Movie getRandomUnwatchedMovie(const User &user);

private:
    // Método estático privado que retorna todos os filmes não assistidos de um usuário
    static std::vector<Movie> getUnwatchedMovies(const User &user);
};

#endif // ROULETTE_HPP
