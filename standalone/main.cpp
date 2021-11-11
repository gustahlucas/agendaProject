#include <iostream>
#include <agenda/agenda.h>
#include <queue>



int main() {
    std::queue<Agenda> listaItensAgenda;
    std::queue<Agenda> compromissoHoje;
    Agenda agenda;

    while(true){
        OPERACOES escolha = screenMenu();
        switch (escolha) {
            case INSERIR_COMPROMISSO:
                agenda.addItemAgenda(listaItensAgenda);
                break;
            case EXIBIR_COMPROMISSO:
                agenda.exibeItensAgenda(listaItensAgenda);
                break;
            case VER_COMPROMISSO_DO_DIA:
                compromissoHoje = agenda.recuperarCompromissos(listaItensAgenda);
                agenda.exibeItensAgenda(compromissoHoje);
                break;
            case SAIR:

                std::cout << " Encerrando o programa" << std::endl;
                //Retorna ao sistema operacional e encerra o programa
                return 0;
                break;
            default:
                std::cout << "Opção invalida" << std::endl;
                break;
        }
    }
}
