#ifndef USER_HPP
#define USER_HPP

#include <string>
#include <vector>
#include "MoviePlaylist.hpp"

class User {
public:
    int id;
    std::string name;
    std::string email;
    std::string password;
    std::vector<MoviePlaylist> playlists;

    User(int id, const std::string &name, const std::string &email, const std::string &password);
    void addPlaylist(const MoviePlaylist &playlist);
    void displayMovies() const;
};

#endif // USER_HPP
