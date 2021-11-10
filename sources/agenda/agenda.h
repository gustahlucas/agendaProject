//
// Created by gustavo on 06/10/2021.
//

#ifndef AGENDAPROJECT_AGENDA_H
#define AGENDAPROJECT_AGENDA_H

#include <string>
#include <vector>
#include <ctime>

enum OPERACOES {
    INSERIR_COMPROMISSO, EXIBIR_COMPROMISSO, VER_COMPROMISSO_DO_DIA, SAIR
};

template <typename T>
struct array {
    size_t x;
    T *ary;
};

struct itemAgenda{
    int dia = 0;
    int mes = 0;
    int ano = 0;
    std::string descricao;
};

struct tm* recuperarData();

OPERACOES screenMenu();
void exibeItensAgenda(std::vector<struct itemAgenda> &lista);
void addItemAgenda(std::vector<struct itemAgenda> &lista);
std::vector<struct itemAgenda> recuperarCompromissos(std::vector<struct itemAgenda> &lista);

#endif //AGENDAPROJECT_AGENDA_H
