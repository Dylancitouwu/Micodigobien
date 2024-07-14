#include "registerclient.h"
#include "ui_registerclient.h"
#include <QMessageBox>

registerclient::registerclient(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::registerclient)
{
    ui->setupUi(this);
    ptrLc = &lc;

    connect (ui->btn_addclient,SIGNAL(clicked()),this, SLOT(saveClient()));

}

registerclient::~registerclient()
{
    delete ui;
}

void registerclient::saveClient(){
    QString nameClient = ui->txt_nCliente->text();
    QString correo = ui->txt_correo->text();
    QString dir = ui->txt_direccion->text();
    long id = ui->txt_id->text().toLong();
    int tel = ui->txt_telefono->text().toInt();
    if(ptrLc->guardar(nameClient.toStdString(),correo.toStdString(),dir.toStdString(),id,tel)){
        QMessageBox::information(this,"Registro de Clientes","Registro exitoso");
        clearFields();
    }
}

void registerclient::clearFields(){
    ui->txt_nCliente->clear();
    ui->txt_correo->clear();
    ui->txt_direccion->clear();
    ui->txt_id->clear();
    ui->txt_telefono->clear();
}

void registerclient::newClient(){
    clearFields();
}
