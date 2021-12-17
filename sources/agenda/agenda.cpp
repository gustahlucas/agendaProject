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

void Agenda::addItemAgenda ( int dia, int mes, int ano, const std::string &descricao, int duracao, int hora, int min){

    Compromisso compromisso;
    compromisso.setDia(dia);
    compromisso.setMes(mes);
    compromisso.setAno(ano);
    compromisso.setDescricao(descricao);
    compromisso.setDuracao(duracao);
    compromisso.setHora(hora);
    compromisso.setMin(min);
    addCompromisso(compromisso);
}
void Agenda::addCompromisso (Compromisso compromisso){
    compromissos.push_back(compromisso);
}

void Agenda::exibeItensAgenda(Agenda agenda){
    compromissos= agenda.getCompromissos();

    if (!compromissos.empty()) {
        cout << "--------------- COMPROMISSOS NA AGENDA --------------" << endl;
        cout << "Nome: " << agenda.getName() << " |  Descricao: " << agenda.getDescricao() << endl;
        cout << "Criada por: " << agenda.getUser().getName() << endl;
        cout << "=========================================================" << endl;

        for (const auto &item : compromissos ) {
            cout << "Descricao do compromisso: " << item.getDescricao() << endl;
            cout << "Data: " << item.getDia() << "/" << item.getMes() << "/" << item.getAno()  << " Hora: " << item.getHora() << ":" << item.getMin() << endl;
            cout << "Com duracao de: " << item.getDuracao() << " min" << endl;
            cout << "-------------------------------------------------------" << endl;
        }
    }else {
        cout << "Nenhum compromisso encontrado ou cadastrado " << endl;
    }
}
int Agenda::concorrents (vector<Compromisso> compromisso){
    if (!compromisso.empty()){
        if (compromisso.size() >= 2 ) {
            for ( int i = 0; i < compromisso.size(); i++ ) {
                if ( compromisso[ i ].getDia() == compromisso[ i+1 ].getDia()
                     && compromisso[i].getMes() == compromisso[i+1].getMes()
                     && compromisso[i].getAno() == compromisso[i+1].getAno()){
                    if (compromisso[i].getHora() == compromisso[i+1].getHora()){
                        if (compromisso[i].getMin() <= compromisso[i+1].getMin() || compromisso[i].getMin() >= compromisso[i+1].getMin())
                        if ( compromisso[i].getDuracao() > compromisso[i+1].getDuracao() ){
                            comecarContar(compromisso[i].getDuracao() - compromisso[i+1].getDuracao());
                            return 1;
                        }
                    }
                }else {
                    return 0;
                }
            }
        }
    }
}
void tempoRestanteTela( int duracao) {
    system("cls"); // system call to clear the screen
    std::cout << "Tempo restante: " << duracao << " segundos"<< std::endl;
}
void crono( int duracao) {
    while (duracao > 0 ) {
        tempoRestanteTela(duracao);
        sleep(1);
        if (duracao > 0) duracao--;
    }
}
void Agenda::comecarContar(int duracao ){
    int temp = duracao*60;
    std::thread t( crono, temp);
    t.join();
}


Agenda::Agenda() = default;

Agenda::Agenda(string name, string email, int dia, int mes, int ano, const std::string &descricao, int duracao, int hora, int min) {
    this->user = User(name, email);
    addItemAgenda(dia, mes, ano, descricao, duracao, hora, min);
}

const vector <Compromisso > &Agenda::getCompromissos()  {
    return compromissos;
}

void Agenda::setCompromissos( const vector <Compromisso > &compromissos ) {
    Agenda::compromissos = compromissos;
}

const User &Agenda::getUser() const {
    return user;
}

void Agenda::setUser( const User &user ) {
    Agenda::user = user;
}

const string &Agenda::getName() const {
    return name;
}

void Agenda::setName( const string &name ) {
    Agenda::name = name;
}

const string &Agenda::getDescricao() const {
    return descricao;
}

void Agenda::setDescricao( const string &descricao ) {
    Agenda::descricao = descricao;
}

Agenda::~Agenda() {


}
