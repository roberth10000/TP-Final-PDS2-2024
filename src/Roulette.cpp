#include "Roulette.hpp"   // Inclusão do arquivo de cabeçalho Roulette.hpp para utilizar a classe Roulette
#include <stdexcept>      // Inclusão da biblioteca stdexcept para exceções padrão
#include <cstdlib>        // Inclusão da biblioteca cstdlib para funções de manipulação de strings e conversões numéricas
#include <ctime>          // Inclusão da biblioteca ctime para manipulação de tempo

std::vector<Movie> Roulette::getUnwatchedMovies(const User &user) {
    std::vector<Movie> unwatchedMovies; // Cria um vetor de filmes não assistidos
    for (const auto &playlist : user.playlists) { // Para cada playlist do usuário
        for (const auto &movie : playlist.movies) { // Para cada filme na playlist
            if (!movie.watched) { // Se o filme não foi assistido
                unwatchedMovies.push_back(movie); // Adiciona o filme à lista de filmes não assistidos
            }
        }
    }
    return unwatchedMovies; // Retorna a lista de filmes não assistidos
}

Movie Roulette::getRandomUnwatchedMovie(const User &user) {
    std::vector<Movie> unwatchedMovies = getUnwatchedMovies(user); // Obtém a lista de filmes não assistidos do usuário
    if (unwatchedMovies.empty()) { // Se não houver filmes não assistidos
        throw std::runtime_error("Todos os filmes registrados foram assistidos"); // Lança uma exceção indicando que todos os filmes foram assistidos
    }
    srand(static_cast<unsigned int>(time(nullptr))); // Inicializa a semente para geração de números aleatórios com base no tempo atual
    int randomIndex = rand() % unwatchedMovies.size(); // Gera um índice aleatório dentro do intervalo de filmes não assistidos
    return unwatchedMovies[randomIndex]; // Retorna um filme aleatório não assistido
}
