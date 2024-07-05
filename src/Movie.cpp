#include "Movie.hpp"         // Inclusão do arquivo de cabeçalho Movie.hpp para utilizar a classe Movie
#include <iostream>          // Inclusão da biblioteca iostream para entrada e saída padrão

Movie::Movie(int id, const std::string &name, const std::string &genre, int year, const std::string &director, float rating, bool watched)
    : id(id), name(name), genre(genre), year(year), director(director), rating(rating), watched(watched), averageRating(0.0f) {}

void Movie::display() const {
    // Mostra os detalhes do filme na saída padrão
    std::cout << "ID: " << id << "\n Nome: " << name << "\nGênero: " << genre << "\nAno: " << year
              << "\nDiretor: " << director << "\nNota: " << rating << "\nAssistido: " << (watched ? "Sim" : "Não")
              << "\nMédia das Avaliações: " << averageRating << std::endl;
}

void Movie::addRating(float newRating) {
    // Adiciona uma nova avaliação e atualiza a média das avaliações
    int totalRatings = 1; // Inclui a avaliação atual
    if (averageRating > 0) {
        averageRating = (averageRating + newRating) / 2.0f; // Calcula a nova média
    } else {
        averageRating = newRating; // Define a primeira avaliação como média inicial
    }
}
