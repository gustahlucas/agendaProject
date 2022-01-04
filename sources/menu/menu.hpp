//
// Created by gusta on 04/01/2022.
//

#ifndef AGENDAPROJECT_MENU_HPP
#define AGENDAPROJECT_MENU_HPP

#include <string>
#include <iomanip>
#include <iostream>
#include <agenda/agenda.h>


using namespace std;

enum OPERACOES {
    INSERIR_COMPROMISSO, EXIBIR_COMPROMISSO, VER_COMPROMISSO_DO_DIA, SAIR
};
OPERACOES screenMenu();
bool menuPrincipal();
bool menuSegundario();

#endif //AGENDAPROJECT_MENU_HPP
