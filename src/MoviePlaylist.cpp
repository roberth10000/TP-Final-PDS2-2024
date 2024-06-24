#include "MoviePlaylist.hpp"
#include <iostream>

MoviePlaylist::MoviePlaylist(int id, const std::string &name) : id(id), name(name) {}

void MoviePlaylist::addMovie(const Movie &movie) {
    movies.push_back(movie);
}

void MoviePlaylist::display() const {
    std::cout << "ID da Playlist: " << id << "\nNome da Playlist: " << name << "\nFilmes:" << std::endl;
    for (const auto &movie : movies) {
        movie.display();
        std::cout << "----------" << std::endl;
    }
}
