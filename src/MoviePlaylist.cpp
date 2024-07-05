#include "MoviePlaylist.hpp" // Inclusão do arquivo de cabeçalho MoviePlaylist.hpp para utilizar a classe MoviePlaylist
#include <iostream>          // Inclusão da biblioteca iostream para entrada e saída padrão
#include <algorithm>         // Inclusão da biblioteca algorithm para utilizar a função sort

MoviePlaylist::MoviePlaylist(int id, const std::string &name) : id(id), name(name) {}

void MoviePlaylist::addMovie(const Movie &movie)
{
    movies.push_back(movie); // Adiciona um filme à lista de filmes da playlist
}

void MoviePlaylist::display() const
{
    // Mostra os detalhes da playlist e seus filmes na saída padrão
    std::cout << "ID da Playlist: " << id << "\nNome da Playlist: " << name << "\nFilmes:" << std::endl;
    for (const auto &movie : movies)
    {
        movie.display(); // Mostra os detalhes de cada filme na playlist
        std::cout << "----------" << std::endl; // Separação entre os filmes
    }
}

void MoviePlaylist::rankMoviesByRating()
{
    // Ordena os filmes pela média das avaliações (decrescente)
    std::sort(movies.begin(), movies.end(), [](const Movie &a, const Movie &b)
              { return a.averageRating > b.averageRating; });
}
