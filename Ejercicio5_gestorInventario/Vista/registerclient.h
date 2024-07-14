#ifndef REGISTERCLIENT_H
#define REGISTERCLIENT_H
#include "Headers/logic_client.h"
#include <QWidget>
#include <vector>
#include <string>

namespace Ui {
class registerclient;
}

class registerclient : public QWidget
{
    Q_OBJECT

public:
    explicit registerclient(QWidget *parent = nullptr);
    ~registerclient();

private:
    Ui::registerclient *ui;
    Logic_client lc;
    Logic_client *ptrLc;
    void clearFields();

private slots:
    void saveClient();
    void newClient();
};

#endif // REGISTERCLIENT_H
