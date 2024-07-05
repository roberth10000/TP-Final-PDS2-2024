#ifndef MOVIE_HPP  // Diretiva de pré-processamento para evitar inclusões múltiplas
#define MOVIE_HPP

#include <string>  // Inclusão da biblioteca string para usar o tipo std::string

class Movie {
public:
    int id;                 // Identificador único do filme
    std::string name;       // Nome do filme
    std::string genre;      // Gênero do filme
    int year;               // Ano de lançamento do filme
    std::string director;   // Diretor do filme
    float rating;           // Avaliação do filme
    bool watched;           // Indica se o filme foi assistido pelo usuário
    float averageRating;    // Média das avaliações dos usuários

    // Construtor da classe Movie
    Movie(int id, const std::string &name, const std::string &genre, int year, const std::string &director, float rating, bool watched);

    // Método para exibir informações do filme
    void display() const;

    // Método para adicionar uma nova avaliação ao filme
    void addRating(float newRating);
};

#endif // MOVIE_HPP  // Fim da diretiva de pré-processamento