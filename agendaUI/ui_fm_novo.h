/********************************************************************************
** Form generated from reading UI file 'fm_novo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_NOVO_H
#define UI_FM_NOVO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fm_novo
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *txt_nome;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QDateEdit *date_compromisso;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *txt_descricao;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *btn_gravar;
    QPushButton *btn_cancelar;

    void setupUi(QDialog *fm_novo)
    {
        if (fm_novo->objectName().isEmpty())
            fm_novo->setObjectName(QStringLiteral("fm_novo"));
        fm_novo->resize(400, 144);
        layoutWidget = new QWidget(fm_novo);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 381, 129));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        txt_nome = new QLineEdit(layoutWidget);
        txt_nome->setObjectName(QStringLiteral("txt_nome"));

        horizontalLayout->addWidget(txt_nome);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        date_compromisso = new QDateEdit(layoutWidget);
        date_compromisso->setObjectName(QStringLiteral("date_compromisso"));

        horizontalLayout_2->addWidget(date_compromisso);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        txt_descricao = new QLineEdit(layoutWidget);
        txt_descricao->setObjectName(QStringLiteral("txt_descricao"));

        horizontalLayout_3->addWidget(txt_descricao);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        btn_gravar = new QPushButton(layoutWidget);
        btn_gravar->setObjectName(QStringLiteral("btn_gravar"));

        horizontalLayout_4->addWidget(btn_gravar);

        btn_cancelar = new QPushButton(layoutWidget);
        btn_cancelar->setObjectName(QStringLiteral("btn_cancelar"));

        horizontalLayout_4->addWidget(btn_cancelar);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(fm_novo);

        QMetaObject::connectSlotsByName(fm_novo);
    } // setupUi

    void retranslateUi(QDialog *fm_novo)
    {
        fm_novo->setWindowTitle(QApplication::translate("fm_novo", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("fm_novo", "Nome", Q_NULLPTR));
        label_2->setText(QApplication::translate("fm_novo", "Data", Q_NULLPTR));
        label_3->setText(QApplication::translate("fm_novo", "Descricao", Q_NULLPTR));
        btn_gravar->setText(QApplication::translate("fm_novo", "Salvar", Q_NULLPTR));
        btn_cancelar->setText(QApplication::translate("fm_novo", "Cancelar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class fm_novo: public Ui_fm_novo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_NOVO_H
