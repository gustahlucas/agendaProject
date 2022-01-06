/********************************************************************************
** Form generated from reading UI file 'fm_editar.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_EDITAR_H
#define UI_FM_EDITAR_H

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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fm_editar
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *txt_id;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLineEdit *txt_nome;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QDateEdit *date_compromisso;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *txt_descricao;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *btn_gravar;
    QPushButton *btn_cancelar;

    void setupUi(QDialog *fm_editar)
    {
        if (fm_editar->objectName().isEmpty())
            fm_editar->setObjectName(QStringLiteral("fm_editar"));
        fm_editar->resize(400, 300);
        layoutWidget = new QWidget(fm_editar);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 361, 157));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        txt_id = new QLabel(layoutWidget);
        txt_id->setObjectName(QStringLiteral("txt_id"));

        horizontalLayout->addWidget(txt_id);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_2->addWidget(label_5);

        txt_nome = new QLineEdit(layoutWidget);
        txt_nome->setObjectName(QStringLiteral("txt_nome"));

        horizontalLayout_2->addWidget(txt_nome);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        date_compromisso = new QDateEdit(layoutWidget);
        date_compromisso->setObjectName(QStringLiteral("date_compromisso"));

        horizontalLayout_3->addWidget(date_compromisso);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        txt_descricao = new QLineEdit(layoutWidget);
        txt_descricao->setObjectName(QStringLiteral("txt_descricao"));

        horizontalLayout_4->addWidget(txt_descricao);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        btn_gravar = new QPushButton(layoutWidget);
        btn_gravar->setObjectName(QStringLiteral("btn_gravar"));

        horizontalLayout_5->addWidget(btn_gravar);

        btn_cancelar = new QPushButton(layoutWidget);
        btn_cancelar->setObjectName(QStringLiteral("btn_cancelar"));

        horizontalLayout_5->addWidget(btn_cancelar);


        verticalLayout->addLayout(horizontalLayout_5);


        retranslateUi(fm_editar);

        QMetaObject::connectSlotsByName(fm_editar);
    } // setupUi

    void retranslateUi(QDialog *fm_editar)
    {
        fm_editar->setWindowTitle(QApplication::translate("fm_editar", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("fm_editar", "ID", Q_NULLPTR));
        txt_id->setText(QApplication::translate("fm_editar", "TextLabel", Q_NULLPTR));
        label_5->setText(QApplication::translate("fm_editar", "Nome", Q_NULLPTR));
        label_3->setText(QApplication::translate("fm_editar", "Data", Q_NULLPTR));
        label_4->setText(QApplication::translate("fm_editar", "Descricao", Q_NULLPTR));
        btn_gravar->setText(QApplication::translate("fm_editar", "Salvar", Q_NULLPTR));
        btn_cancelar->setText(QApplication::translate("fm_editar", "Cancelar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class fm_editar: public Ui_fm_editar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_EDITAR_H
