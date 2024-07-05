#ifndef USER_HPP
#define USER_HPP

#include <string>              // Inclusão da biblioteca string para usar std::string
#include <vector>              // Inclusão da biblioteca vector para usar std::vector
#include "MoviePlaylist.hpp"   // Inclusão do arquivo de cabeçalho MoviePlaylist.hpp para usar a classe MoviePlaylist

class User {
public:
    int id;                            // Identificação única do usuário
    std::string name;                  // Nome do usuário
    std::string email;                 // Endereço de e-mail do usuário
    std::string password;              // Senha do usuário
    std::vector<MoviePlaylist> playlists;  // Listagem de playlists do usuário

    // Construtor que inicializa um usuário com dados fornecidos
    User(int id, const std::string &name, const std::string &email, const std::string &password);

    // Método para adicionar uma playlist à lista de playlists do usuário
    void addPlaylist(const MoviePlaylist &playlist);

    // Método para exibir todos os filmes nas playlists do usuário
    void displayMovies() const;
};

#endif // USER_HPP
