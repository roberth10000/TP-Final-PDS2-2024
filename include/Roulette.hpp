#ifndef ROULETTE_HPP
#define ROULETTE_HPP

#include "User.hpp"
#include <cstdlib>
#include <ctime>

class Roulette {
public:
    static Movie getRandomUnwatchedMovie(const User &user);

private:
    static std::vector<Movie> getUnwatchedMovies(const User &user);
};

#endif // ROULETTE_HPP
