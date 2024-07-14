#include "home.h"
#include "ui_home.h"

Home::Home(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Home)
    , uiRp(new registerProduct)
    , uiRu(new registeruser)
    , uiVp(new viewproducts)
    , uiRc(new registerclient)

{
    ui->setupUi(this);
    connect(ui->btn_registrar, SIGNAL(clicked()),this,SLOT(callRegisterProduct()));
    connect(ui->btn_usuarios,SIGNAL(clicked()),this,SLOT(callRegisterUser()));
    connect(ui->btn_consultar,SIGNAL(clicked()),this,SLOT(viewProducts()));
    connect(ui->btn_cliente,SIGNAL(clicked()),this,SLOT(callRegisterClient()));
}

Home::~Home()
{
    delete ui;
}
void Home::callRegisterProduct(){
    uiRp->show();
}
void Home::callRegisterUser(){
    uiRu->show();
}
void Home::viewProducts(){
    uiVp->show();
}
void Home::callRegisterClient(){
    uiRc->show();
}
