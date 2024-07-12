#include "User.hpp"       // Inclusão do arquivo de cabeçalho User.hpp para utilizar a classe User
#include <iostream>       // Inclusão da biblioteca iostream para entrada e saída padrão
#include <algorithm>      // Inclusão da biblioteca algorithm para entrada e saída padrão

User::User(int id, const std::string &name, const std::string &email, const std::string &password, bool isAdmin)
    : id(id), name(name), email(email), password(password), isAdmin(isAdmin){}
      // Construtor da classe User que inicializa os atributos com os parâmetros fornecidos

void User::addPlaylist(const MoviePlaylist &playlist) {
    playlists.push_back(playlist); // Adiciona uma playlist à lista de playlists do usuário
}

void User::displayAddedMovies() const {
    std::cout << "User ID: " << id << "\nUser Name: " << name << "\nEmail: " << email << "\nMovies:" << std::endl; // Mostra informações básicas do usuário
    for (const auto &playlist : playlists) { // Para cada playlist do usuário
        playlist.display(); // Mostra os filmes da playlist
    }
}

void User::editUsername(const std::string &newUsername) {
    name = newUsername; // Altera o nome de usuário
}

void User::editPassword(const std::string &newPassword) {
    password = newPassword; // Altera a senha
}

void User::addMovie(const Movie &movie){
    playlists[0].addMovie(movie); // Adiciona o filme à playlist
}

void User::displayAddedMovies() const{
    std::cout << "Movies added by User " << name << ":" << std::endl;
    playlists[0].display(); // Exibe filmes da playlist
}

// Edita os filmes adicionados
void User::editAddedMovie(int movieId, const std::string &name, const std::string &genre, int year, const std::string &director, float rating){
    for (auto &movie : playlists[0].movies) {
        if (movie.id == movieId) {
            movie.name = name;
            movie.genre = genre;
            movie.year = year;
            movie.director = director;
            movie.rating = rating;
            return;
        }
    }
}

// Encontra e remove o filme com o id especificado na playlist do usuário.
void User::deleteAddedMovie(int movieId){
    auto it = std::remove_if(playlists[0].movies.begin(), playlists[0].movies.end(),
                             [movieId](const Movie &movie) { return movie.id == movieId; });
    if (it != playlists[0].movies.end()) {
        playlists[0].movies.erase(it, playlists[0].movies.end());
    }
}

// Define os filmes da playlist como assistido
void User::watchMovie(int movieId){
    for (auto &playlist : playlists) {
        for (auto &movie : playlist.movies) {
            if (movie.id == movieId && !movie.watched) {
                movie.watched = true;
                watchedMovies.push_back(movie);
                return;
            }
        }
    }
}

// Define o status de assistido do filme
void User::updateWatchedStatus(const std::vector<Movie> &watchedMovies) {
    for (auto &movie : playlists[0].movies) {
        auto it = std::find_if(watchedMovies.begin(), watchedMovies.end(), [movie](const Movie &watched) {
            return watched.id == movie.id;
        });
        if (it != watchedMovies.end()) {
            playlists[0].movies.erase(std::remove(playlists[0].movies.begin(), playlists[0].movies.end(), movie), playlists[0].movies.end());
        }
    }
}
