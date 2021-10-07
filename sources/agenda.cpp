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

void addItemAgenda (vector<struct itemAgenda> &lista){
    struct itemAgenda newItem;

    cout << "Informe o dia: " << endl;
    cin >> newItem.dia;

    cout << "Informe o mes: " << endl;
    cin >> newItem.mes;

    cout << "Informe o ano: " << endl;
    cin >> newItem.ano;

    cin.ignore();
    cout << "Descreva o compromisso: " << endl;
    getline(cin, newItem.descricao);

    lista.push_back(newItem);
}
void exibeItensAgenda(vector<struct itemAgenda> &lista){
    for (struct itemAgenda i: lista){
        cout << i.dia << " - " << i.mes << " - " << i.ano << " - " << i.descricao << endl;
    }
}

vector <struct itemAgenda> recuperarCompromissos (vector<struct itemAgenda> &lista){
    auto data = recuperarData();
    vector<struct itemAgenda> resultado;

    for(auto i : lista){
        if (data->tm_year + 1900 != i.ano) continue;
        if (data->tm_mon + 1 != i.mes) continue;
        if (data->tm_mday != i.dia) continue;

        resultado.push_back(i);
    }
    return resultado;
}