#include "registeruser.h"
#include "ui_registeruser.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
registeruser::registeruser(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::registeruser)
{
    ui->setupUi(this);
    connect(ui->btn_add, &QPushButton::clicked, this, &registeruser::addUser);
}

registeruser::~registeruser()
{
    delete ui;
}
void registeruser::addUser()
{
    QString username = ui->txt_user->text();
    QString password = ui->txt_psw->text();
    QString confirmPassword = ui->txt_confirmarpsw->text();

    if (username.isEmpty() || password.isEmpty() || confirmPassword.isEmpty()) {
        QMessageBox::warning(this, "Registro de Usuario", "Todos los campos son obligatorios.");
        return;
    }

    if (password != confirmPassword) {
        QMessageBox::warning(this, "Registro de Usuario", "Las contraseñas no coinciden.");
        return;
    }

    saveUserToFile(username, password);
}

void registeruser::saveUserToFile(const QString &username, const QString &password)
{
    QFile file("C://ejerciciosFS//users.txt");
    if (!file.open(QIODevice::Append | QIODevice::Text)) {
        QMessageBox::critical(this, "Registro de Usuario", "No se pudo abrir el archivo para escribir.");
        return;
    }

    QTextStream out(&file);
    out <<"\n"<< username << ";" << password <<"\n";
    file.close();

    QMessageBox::information(this, "Registro de Usuario", "Usuario registrado exitosamente.");
    ui->txt_user->clear();
    ui->txt_psw->clear();
    ui->txt_confirmarpsw->clear();
}
