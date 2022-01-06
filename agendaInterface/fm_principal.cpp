#include "fm_principal.h"
#include "fm_pesquisacontatos.h"
#include "fm_novocontato.h"
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
    fm_novocontato f_novocontato;
    f_novocontato.exec();
}

void fm_principal::on_btn_pesquisarcontato_clicked()
{
    fm_pesquisacontatos f_pesquisacontatos;
    f_pesquisacontatos.exec();
}
