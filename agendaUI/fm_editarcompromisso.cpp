#include "fm_editar.h"
#include "ui_fm_editar.h"
#include <QtSql>
#include <QMessageBox>

static int id;

fm_editar::fm_editar(QWidget *parent, int id_compromisso) : QDialog(parent),
                                                                      ui(new Ui::fm_editar)
{
    ui->setupUi(this);
    id = id_compromisso;
    QSqlQuery query;
    query.prepare("select * from tb_compromisso where id_compromisso=" + QString::number(id_compromisso));
    if (query.exec())
    {
        query.first();
        QString telefone = ui->date_compromisso->text();
        ui->txt_nome->setText(query.value(1).toString());
        query.value(2).toString();
        ui->txt_descricao->setText(query.value(3).toString());
    }
    else
    {
        QMessageBox::warning(this, "ERRO", "Erro ao selecionar compromisso");
    }
}

fm_editar::~fm_editar()
{
    delete ui;
}

void fm_editar::on_btn_gravar_clicked()
{
    QString nome = ui->txt_nome->text();
    QString date = ui->date_compromisso->text();
    QString descricao = ui->txt_descricao->text();

    QSqlQuery query;
    query.prepare("update tb_compromisso set nome_compromisso='" + nome + "', data_compromisso='" + date + "', descricao_compromisso='" + descricao + "' where id_compromisso=" + QString::number(id));
    if (query.exec())
    {
        this->close();
    }
    else
    {
        QMessageBox::warning(this, "ERRO", "Erro ao atualizar compromisso");
    }
}
