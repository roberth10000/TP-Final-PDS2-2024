#include "Movie.hpp"
#include <iostream>

Movie::Movie(int id, const std::string &name, const std::string &genre, int year, const std::string &director, float rating, bool watched)
    : id(id), name(name), genre(genre), year(year), director(director), rating(rating), watched(watched) {}

void Movie::display() const {
    std::cout << "ID: " << id << "\n Nome: " << name << "\nGênero: " << genre << "\nAno: " << year
              << "\nDiretor: " << director << "\nNota: " << rating << "\nAssistido: " << (watched ? "Sim" : "Não") << std::endl;
}
