#include "fm_novocontato.h"
#include "ui_fm_novocontato.h"
#include <QMessageBox>

fm_novocontato::fm_novocontato(QWidget *parent) : QDialog(parent),
                                                  ui(new Ui::fm_novocontato)
{
    ui->setupUi(this);
}

fm_novocontato::~fm_novocontato()
{
    delete ui;
}

void fm_novocontato::on_btn_gravar_clicked()
{
    QString nome = ui->txt_nome->text();
    QString telefone = ui->txt_telefone->text();
    QString email = ui->txt_email->text();

    QSqlQuery query;
    query.prepare("insert into tb_contatos (nome_contato,telefone_contato,email_contato) values"
                  "('" +
                  nome + "','" + telefone + "','" + email + "')");
    if (query.exec())
    {
        QMessageBox::information(this, "", "Registro gravado com sucesso");
        ui->txt_nome->clear();
        ui->txt_telefone->clear();
        ui->txt_email->clear();
        ui->txt_nome->setFocus();
    }
    else
    {
        qDebug() << "Erro ao inserir registro";
    }
}
