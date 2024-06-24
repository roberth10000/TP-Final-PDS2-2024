# TP-Final-PDS2-2024

# Roleta de Filmes

Um programa estilo IMDb onde os usuários podem cadastrar filmes, criar playlists, ranquear filmes e fazer roletas de filmes não assistidos.

Sobre **O Roleta de Filmes** é um projeto universitário para a matéria de PDS2 que permite aos usuários adicionar filmes com diversas características, criar playlists de filmes, ranquear os filmes e selecionar aleatoriamente um filme não assistido para assistir. A nota dos filmes é baseada na média das votações dos usuários, variando de 0 a 10.

## **Classes:**

 ### **Classe Filme**
  
  Atributos:
* id (int): Identificador único do filme
* name (std::string): Nome do filme
* genre (std::string): Gênero do filme
* year (int): Ano de lançamento
* director (std::string): Diretor do filme
* rating (float): Média das notas do filme
* watched (bool): Se o filme foi assistido ou não

  Métodos:
* Movie(int id, const std::string &name, const std::string &genre, int year, const std::string &director, float rating, bool watched): Construtor da classe
* void display() const: Exibe as informações do filme

###  **Classe Usuário**
  
  Atributos:
* id (int): Identificador único do usuário
* name (std::string): Nome do usuário
* playlists (std::vector<MoviePlaylist>): Playlist de filmes do usuário
* email (std::string): Email do usuário
* password (std::string): Senha do usuário

Métodos:
* User(int id, const std::string &name, const std::string &email, const std::string &password): Construtor da classe
* void addPlaylist(const MoviePlaylist &playlist): Adiciona uma playlist ao usuário
* void displayMovies() const: Exibe os filmes das playlists do usuário
### **Classe Administrador**
Atributos:
* id (int): Identificador único do administrador
* name (std::string): Nome do administrador
* email (std::string): Email do administrador
* password (std::string): Senha do administrador

### **Classe Playlist**
Atributos:
* id (int): Identificador único da playlist
* nome (std::string): Nome da playlist
* filmes (std::vector<Movie>): Lista de filmes na playlist

Métodos:
* MoviePlaylist(int id, const std::string &name): Construtor da classe
* void addMovie(const Movie &movie): Adiciona um filme à playlist
* void display() const: Exibe as informações da playlist

### **Classe Roleta**

Métodos:

* static Movie getRandomUnwatchedMovie(const User &user): Seleciona um filme aleatório não assistido do usuário

## **Como Usar**

Aqui está como usar o **Roleta de Filmes**

### **Criando um usuário**

### **Adicionando um filme**

### **Criando uma playlist**

### **Mostrando os filmes do usuário**

### **Usando a roleta de filmes**
