#include "fm_editarcontato.h"
#include "ui_fm_editarcontato.h"
#include <QtSql>
#include <QMessageBox>

static int id;

fm_editarcontato::fm_editarcontato(QWidget *parent, int id_contato) : QDialog(parent),
                                                                      ui(new Ui::fm_editarcontato)
{
    ui->setupUi(this);
    id = id_contato;
    QSqlQuery query;
    query.prepare("select * from tb_contatos where id_contato=" + QString::number(id_contato));
    if (query.exec())
    {
        query.first();
//        QString telefone = ui->txt_telefone->text();
        ui->txt_nome->setText(query.value(1).toString());
        query.value(2).toString();
        ui->txt_email->setText(query.value(3).toString());
    }
    else
    {
        QMessageBox::warning(this, "ERRO", "Erro ao selecionar contato");
    }
}

fm_editarcontato::~fm_editarcontato()
{
    delete ui;
}

void fm_editarcontato::on_btn_gravar_clicked()
{
    QString nome = ui->txt_nome->text();
    QString telefone = ui->txt_telefone->text();
    QString email = ui->txt_email->text();

    QSqlQuery query;
    query.prepare("update tb_contatos set nome_contato='" + nome + "', telefone_contato='" + telefone + "', email_contato='" + email + "' where id_contato=" + QString::number(id));
    if (query.exec())
    {
        this->close();
    }
    else
    {
        QMessageBox::warning(this, "ERRO", "Erro ao atualizar contato");
    }
}
