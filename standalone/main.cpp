#include <agenda/agenda.h>

Agenda createAgenda() {
    Agenda* agenda = new Agenda("Gustavo", "gustavo.lucas@hashasb", 12, 12,2021, "Encontro com deus", 30, 13, 30);
    agenda->setName("Agenda Profissional");
    agenda->setDescricao("Agenda com os compromissos da carreira profissional");
    agenda->addItemAgenda(12, 12, 2021, "Ola mundo", 25, 13,15);
    agenda->exibeItensAgenda(*agenda);
    agenda->concorrents(agenda->getCompromissos());
    return *agenda;
}

int main() {
    Agenda agenda = createAgenda();
    return 0;

}
