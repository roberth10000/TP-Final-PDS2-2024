#ifndef MOVIEPLAYLIST_HPP
#define MOVIEPLAYLIST_HPP

#include <vector>
#include <string>
#include "Movie.hpp"

class MoviePlaylist {
public:
    int id;
    std::string name;
    std::vector<Movie> movies;

    MoviePlaylist(int id, const std::string &name);
    void addMovie(const Movie &movie);
    void display() const;
};

#endif // MOVIEPLAYLIST_HPP
