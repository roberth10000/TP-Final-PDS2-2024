#include "User.hpp"       // Inclusão do arquivo de cabeçalho User.hpp para utilizar a classe User
#include <iostream>       // Inclusão da biblioteca iostream para entrada e saída padrão

User::User(int id, const std::string &name, const std::string &email, const std::string &password)
    : id(id), name(name), email(email), password(password) {} // Construtor da classe User que inicializa os atributos com os parâmetros fornecidos

void User::addPlaylist(const MoviePlaylist &playlist) {
    playlists.push_back(playlist); // Adiciona uma playlist à lista de playlists do usuário
}

void User::displayMovies() const {
    std::cout << "User ID: " << id << "\nUser Name: " << name << "\nEmail: " << email << "\nMovies:" << std::endl; // Mostra informações básicas do usuário
    for (const auto &playlist : playlists) { // Para cada playlist do usuário
        playlist.display(); // Mostra os filmes da playlist
    }
}
