#ifndef FM_NOVO_H
#define FM_NOVO_H

#include <QDialog>
#include <QtSql>

namespace Ui
{
    class fm_novo;
}

class fm_novo : public QDialog
{
    Q_OBJECT

public:
    explicit fm_novo(QWidget *parent = nullptr);
    ~fm_novo();

private slots:
    void on_btn_gravar_clicked();

private:
    Ui::fm_novo *ui;
};

#endif // FM_NOVOCONTATO_H
