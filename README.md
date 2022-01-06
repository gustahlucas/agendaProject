# Agenda 📅

Projeto de trabalho para a disciplina de Algoritmos e Programação Avançada da UFOP

## Ideia

Desenvolvimento de uma simples agenda de compromissos desenvolvida em C++

## Tasks

Tasks performed:

-   [x] Initial project creation
-   [x] Project theme definition
-   [x] Creation of the container
-   [x] Create parallelism
-   [x] UI

## Interface

Tela login:

![Screenshot](agendaUI/imagens/tela%20login.png)

Tela principal:

![Screenshot](agendaUI/imagens/tela%20principal.png)

Tela pesquisa + edição + exclusão:

![Screenshot](agendaUI/imagens/tela%20pesquisa%20editao%20exclusao.png)

## Install and compile (Ubuntu)

-   Install Qt Creator

```
sudo apt install build-essential
```

```
sudo apt install qtcreator
```

```
sudo apt install qt5-default
```

```
sudo apt-get install qt5-doc qtbase5-examples qtbase5-doc-html
```

-   Create an executable file for the project

```
qmake agendaInterface.pro
```

```
make
```

-   Test the program

```
./agendaInterface
```

## License

[MIT](https://choosealicense.com/licenses/mit/)
