#pragma once

#include "QMessageBox"
#include "QSqlDatabase"
#include <libpq-fe.h>
#include "qsqlquerymodel"

#include <QtWidgets/QMainWindow>
#include "ui_AdressLibrary.h"

#include "AddEditPerson.h"
#include "AddEditAdresses.h"
#include "AddEditAdressType.h"

class AdressLibrary : public QMainWindow
{
	Q_OBJECT

public:
	AdressLibrary(QWidget* parent = nullptr);
	~AdressLibrary();

private:
	void SQlConnect();
	void load();
	Ui::AdressLibraryClass ui;
private slots:
	//menu button
	void on_actionPeople_triggered();
	void on_actionAdresses_triggered();
	void on_actionAdress_type_triggered();

	//1-st page button
	void on_pushButton_addPerson_clicked();
	void on_pushButton_editPerson_clicked();
	void on_pushButton_deletePerson_clicked();

	//2-nd page button
	void on_pushButton_addAdresses_clicked();
	void on_pushButton_editAdresses_clicked();
	void on_pushButton_branch_Adresses_clicked();
	void on_pushButton_deleteAdress_clicked();

	//3-th page button
	void on_pushButton_addAdressType_clicked();
	void on_pushButton_editAdressType_clicked();
	void on_pushButton_deleteAdressType_clicked();
};
