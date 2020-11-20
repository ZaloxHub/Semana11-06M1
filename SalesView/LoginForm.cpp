#include "LoginForm.h"
#include "SalesMainForm.h"

System::Void SalesView::LoginForm::btnOK_Click(System::Object^ sender, System::EventArgs^ e)
{
	User^ user = SalesController::SalesManager::ValidateUser(txtUsername->Text, txtPassword->Text);
	if (user != nullptr) {
		MessageBox::Show("Bienvenido " + user->FirstName + " " + user->LastName);
		this->Hide();
		SalesMainForm::user = user;
	}
	else {
		MessageBox::Show("Usuario y contraseña incorrectos.");
	}
	return System::Void();
}
