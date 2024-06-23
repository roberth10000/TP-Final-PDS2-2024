# TP-Final-PDS2-2024

Roleta de Filmes
Um programa estilo IMDb onde os usuários podem cadastrar filmes, criar playlists, ranquear filmes e fazer roletas de filmes não assistidos.

Sobre
O Roleta de Filmes é um projeto universitário para a matéria de PDS2 que permite aos usuários adicionar filmes com diversas características, criar playlists de filmes, ranquear os filmes e selecionar aleatoriamente um filme não assistido para assistir. A nota dos filmes é baseada na média das votações dos usuários, variando de 0 a 10.

Classes
Classe Filme
Atributos:
id (int): Identificador único do filme
nome (std::string): Nome do filme
genero (std::string): Gênero do filme
ano (int): Ano de lançamento
diretor (std::string): Diretor do filme
nota (float): Média das notas do filme
assistido (bool): Se o filme foi assistido ou não
Métodos:
void adicionarVotacao(float nota): Adiciona uma votação ao filme e recalcula a média
Classe Usuário
Atributos:
id (int): Identificador único do usuário
nome (std::string): Nome do usuário
playlist (Playlist): Playlist de filmes do usuário
email (std::string): Email do usuário
senha (std::string): Senha do usuário
Métodos:
void votarFilme(Filme &filme, float nota): Vota em um filme
Classe Administrador
Atributos:
id (int): Identificador único do administrador
nome (std::string): Nome do administrador
email (std::string): Email do administrador
senha (std::string): Senha do administrador
Classe Playlist
Atributos:
id (int): Identificador único da playlist
nome (std::string): Nome da playlist
filmes (std::vector<Filme>): Lista de filmes na playlist
Métodos:
void adicionarFilme(Filme &filme): Adiciona um filme à playlist
Classe Roleta
Atributos:
usuario (Usuario): Usuário que está usando a roleta
Métodos:
Filme selecionarFilme(): Seleciona um filme aleatório não assistido
