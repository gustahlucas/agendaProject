#ifndef FM_EDITARCONTATO_H
#define FM_EDITARCONTATO_H

#include <QDialog>

namespace Ui
{
    class fm_editarcontato;
}

class fm_editarcontato : public QDialog
{
    Q_OBJECT

public:
    explicit fm_editarcontato(QWidget *parent = nullptr, int id_contato = 0);
    ~fm_editarcontato();

private slots:
    void on_btn_gravar_clicked();

private:
    Ui::fm_editarcontato *ui;
};

#endif // FM_EDITARCONTATO_H
