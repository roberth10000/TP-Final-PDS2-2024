#ifndef MOVIE_HPP
#define MOVIE_HPP

#include <string>

class Movie {
public:
    int id;
    std::string name;
    std::string genre;
    int year;
    std::string director;
    float rating;
    bool watched;

    Movie(int id, const std::string &name, const std::string &genre, int year, const std::string &director, float rating, bool watched);
    void display() const;
};

#endif // MOVIE_HPP
