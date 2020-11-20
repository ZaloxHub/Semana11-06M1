#include "CustomerForm.h"

using namespace SalesView;

using namespace System::Collections::Generic;

Void SalesView::CustomerForm::RefreshPersonsDGV()
{
	List <Person^>^ personList = SalesManager::QueryAllPersons();
	dgvPersons->Rows->Clear();
	for (int i = 0; i < personList->Count; i++) {
		dgvPersons->Rows->Add(gcnew array<String^> {
			"" + personList[i]->Id,
				personList[i]->FirstName,
				personList[i]->LastName,
				personList[i]->Email,
				personList[i]->PhoneNumber
		});
	}
	return Void();
}

Void CustomerForm::RefreshCompaniesDGV() {
	List <Company^>^ companyList = SalesManager::QueryAllCompanies();
	dgvCompanies->Rows->Clear();
	for (int i = 0; i < companyList->Count; i++) {
		dgvCompanies->Rows->Add(gcnew array<String^> {
			"" + companyList[i]->Id,
				companyList[i]->Name,
				companyList[i]->Ruc,
				companyList[i]->PhoneNumber
		});
	}
	return Void();
}

Void CustomerForm::ClearControls() {
	txtPersonId->Text = "";
	txtFirstName->Text = "";
	txtDNI->Text = "";
	txtLastName->Text = "";
	txtAddress->Text = "";
	txtPhoneNumber->Text = "";
	txtEmail->Text = "";
	txtCompanyId->Text = "";
	txtRUC->Text = "";
	txtCompanyName->Text = "";
	txtCompanyAddress->Text = "";
	txtCompanyPhoneNumber->Text = "";
	txtLegalDepartment->Text = "";
	txtWebPage->Text = "";
}