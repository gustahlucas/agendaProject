#include "fm_principal.h"
#include "fm_pesquisa.h"
#include "fm_novo.h"
#include "ui_fm_principal.h"

fm_principal::fm_principal(QWidget *parent) : QDialog(parent),
                                              ui(new Ui::fm_principal)
{
    ui->setupUi(this);
}

fm_principal::~fm_principal()
{
    delete ui;
}

void fm_principal::on_btn_novocontato_clicked()
{
    fm_novo f_novo;
    f_novo.setWindowTitle("Novo compromisso");
    f_novo.exec();
}

void fm_principal::on_btn_pesquisarcontato_clicked()
{
    fm_pesquisa f_pesquisa;
    f_pesquisa.setWindowTitle("Pesquisar Compromissos");
    f_pesquisa.exec();
}
