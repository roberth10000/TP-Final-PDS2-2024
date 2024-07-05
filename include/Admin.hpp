#ifndef ADMIN_HPP
#define ADMIN_HPP

#include "User.hpp"
#include <vector>

class Admin : public User{
public:
  Admin(int id, const std::string &name, const std::string &email, const std::string &password);

  // Método para adicionar um usuário
  void addUser(std::vector<User> &users, const User &user);

  // Método para editar um usuário
  void editUser(std::vector<User> &users, int userId, const std::string &newName, const std::string &newEmail, const std::string &newPassword);

  // Método para excluir um usuário
  void deleteUser(std::vector<User> &users, int userId);

  // Método para adicionar um filme
  void addMovie(std::vector<Movie> &movies, const Movie &movie);

  // Método para editar um filme
  void editMovie(std::vector<Movie> &movies, int movieId, const std::string &newName, const std::string &newGenre, int newYear, const std::string &newDirector, float newRating);

  // Método para excluir um filme
  void deleteMovie(std::vector<Movie> &movies, int movieId);
};

#endif // ADMIN_HPP
