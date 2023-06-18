#include "AdressLibrary.h"

AdressLibrary::AdressLibrary(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    SQlConnect();
    ui.stackedWidget->setCurrentIndex(0);

}

AdressLibrary::~AdressLibrary()
{}

void AdressLibrary::SQlConnect() {
    QSqlDatabase SearchDB = QSqlDatabase::addDatabase("QPSQL");
    SearchDB.setDatabaseName("postgres");
    SearchDB.setUserName("postgres");
    SearchDB.setHostName("localhost");
    SearchDB.setPassword("1qaz");
    /*if (!SearchDB.open()) { QMessageBox::information(this, "win", "win"); }
    else { QMessageBox::warning(this, "fun", "fun"); }*/
}

void AdressLibrary::load()
{
}



//menu buttons
void AdressLibrary::on_actionPeople_triggered()
{
    ui.stackedWidget->setCurrentIndex(0);
}

void AdressLibrary::on_actionAdresses_triggered()
{
    ui.stackedWidget->setCurrentIndex(1);
}

void AdressLibrary::on_actionAdress_type_triggered()
{
    ui.stackedWidget->setCurrentIndex(2);
}


//1-st page buttons
void AdressLibrary::on_pushButton_addPerson_clicked()
{
    AddEditPerson* dlg = new AddEditPerson(this);

    dlg->Load();

    if (dlg->exec() == QDialog::Accepted) load();

    delete dlg;

}

void AdressLibrary::on_pushButton_editPerson_clicked()
{
    int id = 0;

    AddEditPerson* dlg = new AddEditPerson(this);

    dlg->Load(id);

    if (dlg->exec() == QDialog::Accepted) load();

    delete dlg;
}

void AdressLibrary::on_pushButton_deletePerson_clicked()
{
    if (true) {
        load();
    }
    else
        QMessageBox::critical(this, "error", "Failed to delete");
}


//2-nd page buttons
void AdressLibrary::on_pushButton_addAdresses_clicked()
{
}

void AdressLibrary::on_pushButton_editAdresses_clicked()
{
}

void AdressLibrary::on_pushButton_branch_Adresses_clicked()
{
}

void AdressLibrary::on_pushButton_deleteAdress_clicked()
{
}


//3-rd page button
void AdressLibrary::on_pushButton_addAdressType_clicked()
{

}

void AdressLibrary::on_pushButton_editAdressType_clicked()
{

}

void AdressLibrary::on_pushButton_deleteAdressType_clicked()
{
}
