/********************************************************************************
** Form generated from reading UI file 'fm_principal.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_PRINCIPAL_H
#define UI_FM_PRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_fm_principal
{
public:
    QPushButton *btn_novocontato;
    QPushButton *btn_pesquisarcontato;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *fm_principal)
    {
        if (fm_principal->objectName().isEmpty())
            fm_principal->setObjectName(QStringLiteral("fm_principal"));
        fm_principal->resize(555, 332);
        btn_novocontato = new QPushButton(fm_principal);
        btn_novocontato->setObjectName(QStringLiteral("btn_novocontato"));
        btn_novocontato->setGeometry(QRect(80, 140, 181, 31));
        btn_pesquisarcontato = new QPushButton(fm_principal);
        btn_pesquisarcontato->setObjectName(QStringLiteral("btn_pesquisarcontato"));
        btn_pesquisarcontato->setGeometry(QRect(270, 140, 191, 31));
        textBrowser = new QTextBrowser(fm_principal);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(160, 20, 256, 71));

        retranslateUi(fm_principal);

        QMetaObject::connectSlotsByName(fm_principal);
    } // setupUi

    void retranslateUi(QDialog *fm_principal)
    {
        fm_principal->setWindowTitle(QApplication::translate("fm_principal", "Dialog", Q_NULLPTR));
        btn_novocontato->setText(QApplication::translate("fm_principal", "Adicionar Compromisso", Q_NULLPTR));
        btn_pesquisarcontato->setText(QApplication::translate("fm_principal", "Pesquisar Compromisso", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("fm_principal", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:16pt; font-weight:696;\">Agenda de Compromissos </span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class fm_principal: public Ui_fm_principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_PRINCIPAL_H
