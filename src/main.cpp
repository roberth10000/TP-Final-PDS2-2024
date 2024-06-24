#include <iostream>
#include "Movie.hpp"
#include "MoviePlaylist.hpp"
#include "User.hpp"
#include "Roulette.hpp"

int main() {
    // Criar filmes
    Movie movie1(1, "Inception", "Sci-Fi", 2010, "Christopher Nolan", 8.8, false);
    Movie movie2(2, "The Matrix", "Sci-Fi", 1999, "Lana Wachowski, Lilly Wachowski", 8.7, true);
    Movie movie3(3, "Interstellar", "Sci-Fi", 2014, "Christopher Nolan", 8.6, false);

    // Criar playlist
    MoviePlaylist playlist1(1, "Classicos de Sci-Fi");
    playlist1.addMovie(movie1);
    playlist1.addMovie(movie2);
    playlist1.addMovie(movie3);

    // Criar user
    User user1(1, "Joao", "joao@exemplo.com", "senha123");
    user1.addPlaylist(playlist1);

    // Mostrar os filmes do usuário
    user1.displayMovies();

    // Gerar um filme aleatório não assistido
    try {
        Movie randomMovie = Roulette::getRandomUnwatchedMovie(user1);
        std::cout << "\nO Filme Aleatório é\n";
        randomMovie.display();
    } catch (const std::runtime_error &e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
