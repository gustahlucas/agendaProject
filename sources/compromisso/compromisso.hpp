//
// Created by gusta on 09/12/2021.
//

#ifndef AGENDAPROJECT_COMPROMISSO_HPP
#define AGENDAPROJECT_COMPROMISSO_HPP
#include <string>

class Compromisso{
private:
    int dia;
    int mes;
    int ano;
    int duracao;
    int min = 0;
    int hora = 0;
    int segundos = 60;
    std::string descricao;

public:
    int getDia() const;

    void setDia( int dia );

    int getMes() const;

    void setMes( int mes );

    int getAno() const;

    void setAno( int ano );

    const std::string &getDescricao() const;

    void setDescricao( const std::string &descricao );

    Compromisso( int dia, int mes, int ano, const std::string &descricao, int duracao );

    Compromisso();

    int getDuracao() const;

    void setDuracao( int duracao );

    int getMin() const;

    void setMin( int min );

    int getHora() const;

    void setHora( int hora );

    int getSegundos() const;

    void setSegundos( int segundos );
};
#endif //AGENDAPROJECT_COMPROMISSO_HPP
