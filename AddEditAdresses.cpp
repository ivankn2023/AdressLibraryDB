#include "AddEditAdresses.h"

AddEditAdresses::AddEditAdresses(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
}

AddEditAdresses::~AddEditAdresses()
{}

void AddEditAdresses::Load(int id)
{
	AdressId = id;
	if (id > 0) {
		setWindowTitle("Edit data");
		ui.pushButton_save->setText("Save");
	}
	else {
		setWindowTitle("Add data");
		ui.pushButton_save->setText("add");
	}
}

void AddEditAdresses::on_pushButton_clicked() {
	if (AdressId > 0) {

	}
	else {

	}
}