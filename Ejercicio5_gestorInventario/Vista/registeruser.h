#ifndef REGISTERUSER_H
#define REGISTERUSER_H

#include <QWidget>

namespace Ui {
class registeruser;
}

class registeruser : public QWidget
{
    Q_OBJECT

public:
    explicit registeruser(QWidget *parent = nullptr);
    ~registeruser();
private slots:
    void addUser();
private:
    Ui::registeruser *ui;
    void saveUserToFile(const QString &username, const QString &password);
};

#endif // REGISTERUSER_H
