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
    QString data = ui->date_compromisso->text();
    QString descricao = ui->txt_descricao->text();

    QSqlQuery query;
    query.prepare("insert into tb_compromisso (nome_compromisso,data_compromisso,descricao_compromisso) values"
                  "('" +
                  nome + "','" + data + "','" + descricao + "')");
    if (query.exec())
    {
        QMessageBox::information(this, "", "Registro gravado com sucesso");
        ui->txt_nome->clear();
        ui->date_compromisso->clear();
        ui->txt_descricao->clear();
        ui->txt_nome->setFocus();
    }
    else
    {
        qDebug() << "Erro ao inserir registro";
    }
}
