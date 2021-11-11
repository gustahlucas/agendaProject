//
// Created by gustavo on 06/10/2021.
//

#ifndef AGENDAPROJECT_AGENDA_H
#define AGENDAPROJECT_AGENDA_H

#include <string>
#include <vector>
#include <queue>
#include <ctime>

enum OPERACOES {
    INSERIR_COMPROMISSO, EXIBIR_COMPROMISSO, VER_COMPROMISSO_DO_DIA, SAIR
};
template <class Type, class Container = std::vector <Type>>
class queue;

class Agenda {
private:
        int dia;
        int mes;
        int ano;
        std::string descricao;
public:
    //Constructor
    Agenda();
    Agenda(int dia, int mes, int ano, const std::string &descricao);

    // Getters e setters
    int getDia() const;
    void setDia(int dia);
    int getMes() const;
    void setMes(int mes);
    int getAno() const;
    void setAno(int ano);
    const std::string &getDescricao() const;
    void setDescricao(const std::string &descricao);

    // Functions
    void exibeItensAgenda(std::queue<class Agenda> &lista);
    void addItemAgenda(std::queue<class Agenda> &lista);
    std::queue<class Agenda> recuperarCompromissos(std::queue<class Agenda> &lista);

};
struct itemAgenda{
    int dia = 0;
    int mes = 0;
    int ano = 0;
    std::string descricao;
};

struct tm* recuperarData();

OPERACOES screenMenu();

#endif //AGENDAPROJECT_AGENDA_H
