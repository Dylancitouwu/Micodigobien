#ifndef HOME_H
#define HOME_H
#include"Vista/registeruser.h"
#include "Vista/registerproduct.h"
#include "Vista/viewproducts.h"
#include "Vista/registerclient.h"
#include "ui_registerproduct.h"
#include <QWidget>

namespace Ui {
class Home;
}

class Home : public QWidget
{
    Q_OBJECT

public:
    explicit Home(QWidget *parent = nullptr);
    ~Home();

private:
    Ui::Home *ui;
    registerProduct *uiRp;
    registeruser *uiRu;
    registerclient *uiRc;
    viewproducts *uiVp;

private slots:
    void callRegisterProduct();
    void callRegisterClient();
    void callRegisterUser();
    void viewProducts();
};

#endif // HOME_H
