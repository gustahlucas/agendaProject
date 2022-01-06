/********************************************************************************
** Form generated from reading UI file 'fm_pesquisa.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_PESQUISA_H
#define UI_FM_PESQUISA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fm_pesquisa
{
public:
    QTableWidget *tw_compromisso;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *txt_pesquisanome;
    QPushButton *btn_pesquisar;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btn_excluir;
    QPushButton *btn_editar;

    void setupUi(QDialog *fm_pesquisa)
    {
        if (fm_pesquisa->objectName().isEmpty())
            fm_pesquisa->setObjectName(QStringLiteral("fm_pesquisa"));
        fm_pesquisa->resize(628, 304);
        tw_compromisso = new QTableWidget(fm_pesquisa);
        tw_compromisso->setObjectName(QStringLiteral("tw_compromisso"));
        tw_compromisso->setGeometry(QRect(10, 60, 561, 191));
        layoutWidget = new QWidget(fm_pesquisa);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 602, 27));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        txt_pesquisanome = new QLineEdit(layoutWidget);
        txt_pesquisanome->setObjectName(QStringLiteral("txt_pesquisanome"));
        txt_pesquisanome->setMinimumSize(QSize(400, 0));

        horizontalLayout->addWidget(txt_pesquisanome);

        btn_pesquisar = new QPushButton(layoutWidget);
        btn_pesquisar->setObjectName(QStringLiteral("btn_pesquisar"));

        horizontalLayout->addWidget(btn_pesquisar);

        layoutWidget1 = new QWidget(fm_pesquisa);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 260, 168, 27));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        btn_excluir = new QPushButton(layoutWidget1);
        btn_excluir->setObjectName(QStringLiteral("btn_excluir"));

        horizontalLayout_2->addWidget(btn_excluir);

        btn_editar = new QPushButton(layoutWidget1);
        btn_editar->setObjectName(QStringLiteral("btn_editar"));

        horizontalLayout_2->addWidget(btn_editar);


        retranslateUi(fm_pesquisa);

        QMetaObject::connectSlotsByName(fm_pesquisa);
    } // setupUi

    void retranslateUi(QDialog *fm_pesquisa)
    {
        fm_pesquisa->setWindowTitle(QApplication::translate("fm_pesquisa", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("fm_pesquisa", "Pesquisar nome", Q_NULLPTR));
        btn_pesquisar->setText(QApplication::translate("fm_pesquisa", "Pesquisar", Q_NULLPTR));
        btn_excluir->setText(QApplication::translate("fm_pesquisa", "Excluir", Q_NULLPTR));
        btn_editar->setText(QApplication::translate("fm_pesquisa", "Editar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class fm_pesquisa: public Ui_fm_pesquisa {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_PESQUISA_H
