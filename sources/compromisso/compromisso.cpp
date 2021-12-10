//
// Created by gusta on 09/12/2021.
//

#include "compromisso.hpp"

int Compromisso::getDia() const {
    return dia;
}

void Compromisso::setDia( int dia ) {
    Compromisso::dia = dia;
}

int Compromisso::getMes() const {
    return mes;
}

void Compromisso::setMes( int mes ) {
    Compromisso::mes = mes;
}

int Compromisso::getAno() const {
    return ano;
}

void Compromisso::setAno( int ano ) {
    Compromisso::ano = ano;
}

const std::string &Compromisso::getDescricao() const {
    return descricao;
}

void Compromisso::setDescricao( const std::string &descricao ) {
    Compromisso::descricao = descricao;
}

Compromisso::Compromisso( int dia, int mes, int ano, const std::string &descricao, int duracao) : dia( dia ), mes( mes ),
                                                                                      ano( ano ),
                                                                                      descricao( descricao ), duracao( duracao ) {}

Compromisso::Compromisso() {}

int Compromisso::getDuracao() const {
    return duracao;
}

void Compromisso::setDuracao( int duracao ) {
    Compromisso::duracao = duracao;
}

int Compromisso::getMin() const {
    return min;
}

void Compromisso::setMin( int min ) {
    Compromisso::min = min;
}

int Compromisso::getHora() const {
    return hora;
}

void Compromisso::setHora( int hora ) {
    Compromisso::hora = hora;
}

int Compromisso::getSegundos() const {
    return segundos;
}

void Compromisso::setSegundos( int segundos ) {
    Compromisso::segundos = segundos;
}


