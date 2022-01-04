//
// Created by gusta on 04/01/2022.
//

#include "menu.hpp"

OPERACOES screenMenu(){
    cout << "Escolha o que deseja realizar: " << std::endl;
    cout << INSERIR_COMPROMISSO << " - Inserir um compromisso " << std::endl;
    cout << EXIBIR_COMPROMISSO << " - Exibir todos os compromissos " << std::endl;
    cout << VER_COMPROMISSO_DO_DIA << " - Exibir compromissos " << std::endl;
    cout << SAIR << " - Sair do programa " << std::endl;

    int escolha = 0;
    cin >> escolha;

    return (OPERACOES) escolha;
}

bool menuPrincipal(){
    int dia, mes, ano, min,hora, duracao; string descricao;
    Agenda *agenda = new Agenda();

    while(true){
        OPERACOES escolha = screenMenu();
        switch (escolha) {
            case INSERIR_COMPROMISSO:
                cout << "Informe o dia: " << endl;
                cin >> dia;
                cout << "Informe o mes: " << endl;
                cin >> mes;
                cout << "Informe o ano: " << endl;
                cin >> ano;
                cout << "Informe a hora: " << endl;
                cin >> hora;
                cout << "Informe o minuto: " << endl;
                cin >> min;
                cout << "Informe a duracao: " << endl;
                cin >> duracao;
                cin.ignore();
                cout << "Descreva o compromisso: " << endl;
                getline(cin, descricao);
                agenda->addItemAgenda(dia, mes, ano, descricao, duracao, hora,min);
                break;
            case EXIBIR_COMPROMISSO:
                agenda->exibeItensAgenda(*agenda);
                break;
            case VER_COMPROMISSO_DO_DIA:
                agenda->recuperarCompromissos(*agenda);
                break;
            case SAIR:
                //Retorna ao sistema operacional e encerra o programa
                return true;
                break;
            default:
                std::cout << "Opção invalida" << std::endl;
                break;
        }
    }

    return false;
}
bool menuSegundario(){

}