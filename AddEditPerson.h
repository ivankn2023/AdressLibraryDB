#pragma once

#include "Qsqlquery"
#include "qsqlerror.h"
#include "qmessagebox.h"

#include <QDialog>
#include "ui_AddEditPerson.h"

class AddEditPerson : public QDialog
{
	Q_OBJECT

public:
	AddEditPerson(QWidget* parent = nullptr);
	~AddEditPerson();
	void Load(int id = 0);
private:
	Ui::AddEditPersonClass ui;
	int PersonId;
private slots:
	void on_toolButton_adress_clicked();
	void on_pushButton_save_clicked();
};
