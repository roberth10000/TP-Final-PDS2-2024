#ifndef USER_HPP
#define USER_HPP

#include <string>              // Inclusão da biblioteca string para usar std::string
#include <vector>              // Inclusão da biblioteca vector para usar std::vector
#include "MoviePlaylist.hpp"   // Inclusão do arquivo de cabeçalho MoviePlaylist.hpp para usar a classe MoviePlaylist
#include "Movie.hpp"           // Inclusão do arquivo de cabeçalho Movie.hpp para usar a classe Movie

class User {
public:
    int id;                            // Identificação única do usuário
    std::string name;                  // Nome do usuário
    std::string email;                 // Endereço de e-mail do usuário
    std::string password;              // Senha do usuário
    bool isAdmin;                      // Definição se o usuário é admin ou não
    std::vector<MoviePlaylist> playlists;  // Listagem de playlists do usuário
    std::vector<Movie> watchedMovies;    // Definição dos filmes assistidos

    // Construtor que inicializa um usuário com dados fornecidos
    User(int id, const std::string &name, const std::string &email, const std::string &password, bool isAdmin = false);

    // Método para adicionar uma playlist à lista de playlists do usuário
    void addPlaylist(const MoviePlaylist &playlist);

    // Métodos para editar o perfil do usuário
    void editUsername(const std::string &newName);
    void editPassword(const std::string &newPassword);

    // Método para adicionar filmes
    void addMovie(const Movie &movie);

    // Método para mostrar os filmes adicionados pelo usuário
    void displayAddedMovies() const;

    // Métodos para aditar e remover filmes
    void editAddedMovie(int movieId, const std::string &newName, const std::string &newGenre, int newYear, const std::string &newDirector, float newRating);
    void deleteAddedMovie(int movieId);

    // Método para marcar um filme como assistido
    void watchMovie(int movieId);

    // Método para adicionar um filme à lista de filmes assistidos
    void updateWatchedStatus(const std::vector<Movie> &watchedMovies);

};

#endif // USER_HPP
