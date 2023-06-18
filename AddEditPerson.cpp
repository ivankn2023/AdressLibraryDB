#include "AddEditPerson.h"

AddEditPerson::AddEditPerson(QWidget* parent)
	: QDialog(parent)
{
	ui.setupUi(this);
}

AddEditPerson::~AddEditPerson()
{}

void AddEditPerson::Load(int id /* =0 */)
{
	PersonId = id;
	if (id > 0) {
		setWindowTitle("Edit data");
		ui.pushButton_save->setText("Save");
	}
	else {
		setWindowTitle("Add data");
		ui.pushButton_save->setText("add");
	}
}

void AddEditPerson::on_toolButton_adress_clicked() {
}

void AddEditPerson::on_pushButton_save_clicked()
{
	if (PersonId > 0) {
		//edit data
	}
	else
	{
		//add data;
	}
	accept();
}
