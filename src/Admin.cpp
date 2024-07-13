#include "Admin.hpp"
#include <algorithm>
#include <stdexcept>

Admin::Admin(int id, const std::string &name, const std::string &email, const std::string &password)
    : User(id, name, email, password, true) {}

void Admin::addUser(std::vector<User> &users, const User &user) {
    users.push_back(user);
}

void Admin::editUser(std::vector<User> &users, int userId, const std::string &newName, const std::string &newEmail, const std::string &newPassword) {
    for (auto &user : users) {
        if (user.id == userId) {
            user.name = newName;
            user.email = newEmail;
            user.password = newPassword;
            return;
        }
    }
    throw std::runtime_error("Usuário não encontrado");
}

void Admin::deleteUser(std::vector<User> &users, int userId) {
    auto it = std::remove_if(users.begin(), users.end(), [userId](const User &user) { return user.id == userId; });
    if (it == users.end()) {
        throw std::runtime_error("Usuário não encontrado");
    }
    users.erase(it, users.end());
}

void Admin::addMovie(std::vector<Movie> &movies, const Movie &movie) {
    movies.push_back(movie);
}

void Admin::editMovie(std::vector<Movie> &movies, int movieId, const std::string &newName, const std::string &newGenre, int newYear, const std::string &newDirector, float newRating) {
    for (auto &movie : movies) {
        if (movie.id == movieId) {
            movie.name = newName;
            movie.genre = newGenre;
            movie.year = newYear;
            movie.director = newDirector;
            movie.rating = newRating;
            movie.watched = false;
            return;
        }
    }
    throw std::runtime_error("Filme não encontrado");
}

void Admin::deleteMovie(std::vector<Movie> &movies, int movieId) {
    auto it = std::remove_if(movies.begin(), movies.end(), [movieId](const Movie &movie) { return movie.id == movieId; });
    if (it == movies.end()) {
        throw std::runtime_error("Filme não encontrado");
    }
    movies.erase(it, movies.end());
}

void Admin::addMovie(std::vector<Movie> &movies, const Movie &movie) {
    movies.push_back(movie);
}

void editMovie(std::vector<Movie> &movies, int movieId, const std::string &newName, const std::string &newGenre, int newYear, const std::string &newDirector, float newRating){
    for (auto &movie : movies) {
        if (movie.id == movieId) {
            movie.name = newName;
            movie.genre = newGenre;
            movie.year = newYear;
            movie.director = newDirector;
            movie.rating = newRating;
            movie.watched = false;
            return;
        }
    }
}

void Admin::deleteMovie(std::vector<Movie> &movies, int movieId) {
    auto it = std::remove_if(movies.begin(), movies.end(), [movieId](const Movie &movie) { return movie.id == movieId; });
    if (it != movies.end()) {
        movies.erase(it, movies.end());
    }
}
