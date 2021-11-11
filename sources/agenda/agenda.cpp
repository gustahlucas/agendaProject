//
// Created by gustavo on 06/10/2021.
//

#include "agenda.h"
#include <iostream>

using namespace std;

// Estrutura necessaria para recuperar o tempo atual da maquina
struct tm* recuperarData(){
    time_t tt;
    time(&tt);
    return localtime(&tt);
}

OPERACOES screenMenu(){
    cout << "Escolha o que deseja realizar: " << endl;
    cout << INSERIR_COMPROMISSO << " - Inserir um compromisso " << endl;
    cout << EXIBIR_COMPROMISSO << " - Exibir todos os compromissos " << endl;
    cout << VER_COMPROMISSO_DO_DIA << " - Exibir compromissos " << endl;
    cout << SAIR << " - Sair do programa " << endl;

    int escolha = 0;
    cin >> escolha;

    return (OPERACOES) escolha;
}

void Agenda::addItemAgenda (std::queue<Agenda> &lista){
    int dia, mes, ano; string descricao;
    cout << "Informe o dia: " << endl;
    cin >> dia;

    cout << "Informe o mes: " << endl;
    cin >> mes;

    cout << "Informe o ano: " << endl;
    cin >> ano;

    cin.ignore();
    cout << "Descreva o compromisso: " << endl;
    getline(cin, descricao);
    Agenda newItem(dia, mes, ano, descricao);
    lista.push(newItem);
}
void Agenda::exibeItensAgenda(std::queue<Agenda> &lista){
    if (!lista.empty()) {
        cout << "Compromisso: " << endl;
        int cont = 1;
        Agenda compromisso;
        cout <<"Result: " << lista.empty() << endl;
//        while (!lista.empty()) {
            compromisso = lista.front();
            cout << cont << endl;
            cout << " " << compromisso.getDia() << " - " << compromisso.getMes()
                 << " - " << compromisso.getAno() << " - " << compromisso.getDescricao() << endl;
            cont++;
//        }
    }else {
        cout << "Nenhum compromisso encontrado ou cadastrado " << endl;
    }
}

std::queue < Agenda> Agenda::recuperarCompromissos(std::queue< Agenda> &lista) {
    auto data = recuperarData();
    std::queue<Agenda> resultado;

    while(!lista.empty()){
        Agenda compromisso = lista.front();
        if (data->tm_year + 1900 != compromisso.getAno()) continue;
        if (data->tm_mon + 1 != compromisso.getMes()) continue;
        if (data->tm_mday != compromisso.getDia()) continue;

        resultado.push(compromisso);
    }
    return resultado;
}

int Agenda::getDia() const {
    return dia;
}

void Agenda::setDia(int dia) {
    Agenda::dia = dia;
}

int Agenda::getMes() const {
    return mes;
}

void Agenda::setMes(int mes) {
    Agenda::mes = mes;
}

int Agenda::getAno() const {
    return ano;
}

void Agenda::setAno(int ano) {
    Agenda::ano = ano;
}

const string &Agenda::getDescricao() const {
    return descricao;
}

void Agenda::setDescricao(const string &descricao) {
    Agenda::descricao = descricao;
}

Agenda::Agenda() {}

Agenda::Agenda(int dia, int mes, int ano, const string &descricao) : dia(dia), mes(mes), ano(ano),
                                                                     descricao(descricao) {}
