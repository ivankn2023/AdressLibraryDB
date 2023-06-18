#pragma once

#include <QDialog>
#include "ui_AddEditAdressType.h"

class AddEditAdressType : public QDialog
{
	Q_OBJECT

public:
	AddEditAdressType(QWidget *parent = nullptr);
	~AddEditAdressType();

private:
	Ui::AddEditAdressTypeClass ui;
};
