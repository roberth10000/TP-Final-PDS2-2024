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
    Movie movie4(4, "The Dark Knight", "Action", 2008, "Christopher Nolan", 9.0, true);
    Movie movie5(5, "Pulp Fiction", "Crime", 1994, "Quentin Tarantino", 8.9, false);
    Movie movie6(6, "Forrest Gump", "Drama", 1994, "Robert Zemeckis", 8.8, true);
    Movie movie7(7, "The Shawshank Redemption", "Drama", 1994, "Frank Darabont", 9.3, true);

    // Adicionar avaliações aos filmes
    movie1.addRating(8.0); // Simula uma avaliação
    movie2.addRating(8.5); // Simula uma avaliação
    movie3.addRating(9.0); // Simula uma avaliação
    movie4.addRating(9.2); // Simula uma avaliação
    movie5.addRating(8.8); // Simula uma avaliação
    movie6.addRating(9.1); // Simula uma avaliação
    movie7.addRating(9.5); // Simula uma avaliação

    // Criar playlists
    MoviePlaylist playlist1(1, "Clássicos de Sci-Fi");
    playlist1.addMovie(movie1);
    playlist1.addMovie(movie2);
    playlist1.addMovie(movie3);

    MoviePlaylist playlist2(2, "Favoritos de Drama");
    playlist2.addMovie(movie6);
    playlist2.addMovie(movie7);

    // Criar usuários
    User user1(1, "Joao", "joao@exemplo.com", "senha123");
    user1.addPlaylist(playlist1);

    User user2(2, "Maria", "maria@exemplo.com", "senha456");
    user2.addPlaylist(playlist2);

    User user3(3, "Pedro", "pedro@exemplo.com", "senha789");
    user3.addPlaylist(playlist1);
    user3.addPlaylist(playlist2);

    // Mostrar os filmes de cada usuário
    std::cout << "Filmes de " << user1.name << ":\n";
    user1.displayMovies();

    std::cout << "\nFilmes de " << user2.name << ":\n";
    user2.displayMovies();

    std::cout << "\nFilmes de " << user3.name << ":\n";
    user3.displayMovies();

    // Ranquear os filmes por média de avaliações
    playlist1.rankMoviesByRating();
    playlist2.rankMoviesByRating();

    // Mostrar os filmes ranqueados
    std::cout << "\nFilmes Ranqueados por Média de Avaliações na Playlist 'Clássicos de Sci-Fi':\n";
    playlist1.display();

    std::cout << "\nFilmes Ranqueados por Média de Avaliações na Playlist 'Favoritos de Drama':\n";
    playlist2.display();

    // Gerar um filme aleatório não assistido para cada usuário
    try {
        Movie randomMovie1 = Roulette::getRandomUnwatchedMovie(user1);
        std::cout << "\nFilme Aleatório Não Assistido para " << user1.name << ":\n";
        randomMovie1.display();
    } catch (const std::runtime_error &e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        Movie randomMovie2 = Roulette::getRandomUnwatchedMovie(user2);
        std::cout << "\nFilme Aleatório Não Assistido para " << user2.name << ":\n";
        randomMovie2.display();
    } catch (const std::runtime_error &e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        Movie randomMovie3 = Roulette::getRandomUnwatchedMovie(user3);
        std::cout << "\nFilme Aleatório Não Assistido para " << user3.name << ":\n";
        randomMovie3.display();
    } catch (const std::runtime_error &e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}

