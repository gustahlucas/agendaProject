//
// Created by gustavo on 06/10/2021.
//

#ifndef AGENDAPROJECT_AGENDA_H
#define AGENDAPROJECT_AGENDA_H

#include <string>
#include <vector>
#include <ctime>
#include <user/user.h>
#include <compromisso/compromisso.hpp>
#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <thread>

class Agenda {
private:
    std::vector <Compromisso> compromissos;
    User user;
    std::string name = "Pessoal";
    std::string descricao = "Agenda de compromissos";
public:
    //Constructor
    Agenda();
    Agenda(std::string , std::string , int , int , int , const std::string &, int , int , int );

    void exibeItensAgenda( Agenda  );
    void addItemAgenda ( int , int , int , const std::string &, int , int , int);
    void addCompromisso (Compromisso );
    int concorrents (std::vector<Compromisso> );
    void comecarContar(int);
    void recuperarCompromissos(Agenda);
    std::vector <Compromisso > &getCompromissos();
    void setCompromissos( const std::vector <Compromisso > & );
    const User &getUser() const;
    void setUser( const User & );
    const std::string &getName() const;
    void setName( const std::string & );
    const std::string &getDescricao() const;
    void setDescricao( const std::string & );

    virtual ~Agenda();
};




#endif //AGENDAPROJECT_AGENDA_H
