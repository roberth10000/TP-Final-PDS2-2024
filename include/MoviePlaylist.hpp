#ifndef MOVIEPLAYLIST_HPP
#define MOVIEPLAYLIST_HPP

#include <vector>       // Inclusão da biblioteca vector para usar o tipo std::vector
#include <string>       // Inclusão da biblioteca string para usar o tipo std::string
#include "Movie.hpp"    // Inclusão do arquivo de cabeçalho Movie.hpp para utilizar a classe Movie

class MoviePlaylist {
public:
    int id;                     // Identificador único da playlist
    std::string name;           // Nome da playlist
    std::vector<Movie> movies;  // Vetor que armazena os filmes da playlist

    // Construtor da classe MoviePlaylist
    MoviePlaylist(int id, const std::string &name);

    // Método para adicionar um filme à playlist
    void addMovie(const Movie &movie);

    // Método para exibir informações da playlist
    void display() const;

    // Método para classificar os filmes por avaliação
    void rankMoviesByRating();
};

#endif // MOVIEPLAYLIST_HPP
