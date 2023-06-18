#pragma once

#include <QDialog>
#include "ui_AddEditAdresses.h"
#include "QMessageBox"
#include "qsqlquery.h"
#include "qsqlerror.h"
class AddEditAdresses : public QDialog
{
	Q_OBJECT

public:
	AddEditAdresses(QWidget *parent = nullptr);
	~AddEditAdresses();
	void setParent(int id) { ParentId = id; }
	void Load(int id);
private:
	Ui::AddEditAdressesClass ui;
	int AdressId, ParentId;
private slots:
	void on_pushButton_clicked();
};
