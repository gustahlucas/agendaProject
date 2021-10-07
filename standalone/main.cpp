#include <iostream>
#include <agenda/agenda.h>

std::vector<struct itemAgenda> listaItensAgenda;

int main() {

    std::vector<itemAgenda> compromissoHoje;

    while(true){
        OPERACOES escolha = screenMenu();
        switch (escolha) {
            case INSERIR_COMPROMISSO:
                addItemAgenda(listaItensAgenda);
                break;
            case EXIBIR_COMPROMISSO:
                exibeItensAgenda(listaItensAgenda);
                break;
            case VER_COMPROMISSO_DO_DIA:
                compromissoHoje = recuperarCompromissos(listaItensAgenda);
                exibeItensAgenda(compromissoHoje);
                break;
            case SAIR:
                //Retorna ao sistema operacional e encerra o programa
                return 0;
                break;
            default:
                std::cout << "Opção invalida" << std::endl;
                break;
        }
    }
    return 0;
}
