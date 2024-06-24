#include "Roulette.hpp"
#include <stdexcept>

std::vector<Movie> Roulette::getUnwatchedMovies(const User &user) {
    std::vector<Movie> unwatchedMovies;
    for (const auto &playlist : user.playlists) {
        for (const auto &movie : playlist.movies) {
            if (!movie.watched) {
                unwatchedMovies.push_back(movie);
            }
        }
    }
    return unwatchedMovies;
}

Movie Roulette::getRandomUnwatchedMovie(const User &user) {
    std::vector<Movie> unwatchedMovies = getUnwatchedMovies(user);
    if (unwatchedMovies.empty()) {
        throw std::runtime_error("Todos os filmes registrados foram assistidos");
    }
    srand(static_cast<unsigned int>(time(nullptr)));
    int randomIndex = rand() % unwatchedMovies.size();
    return unwatchedMovies[randomIndex];
}
