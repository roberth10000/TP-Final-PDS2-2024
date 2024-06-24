#include "User.hpp"
#include <iostream>

User::User(int id, const std::string &name, const std::string &email, const std::string &password)
    : id(id), name(name), email(email), password(password) {}

void User::addPlaylist(const MoviePlaylist &playlist) {
    playlists.push_back(playlist);
}

void User::displayMovies() const {
    std::cout << "User ID: " << id << "\nUser Name: " << name << "\nEmail: " << email << "\nMovies:" << std::endl;
    for (const auto &playlist : playlists) {
        playlist.display();
    }
}
