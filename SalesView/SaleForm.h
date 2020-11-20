#pragma once
#include "ProductSearchForm.h"
#include "ComboBoxItem.h"

namespace SalesView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SalesModel;
	using namespace SalesController;



	/// <summary>
	/// Resumen de SaleForm
	/// </summary>
	public ref class SaleForm : public System::Windows::Forms::Form
	{
	public:
		SaleForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~SaleForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ cmbCustomers;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DateTimePicker^ dtpSaleDate;

	private: System::Windows::Forms::Button^ btnAddProduct;
	private: System::Windows::Forms::DataGridView^ dgvDetails;
	private: System::Windows::Forms::TextBox^ txtTotal;
	private: System::Windows::Forms::Label^ Total;
	private: System::Windows::Forms::ImageList^ iconsList;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ productId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ productName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ unitPrice;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ quantity;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ subTotal;
	private: System::Windows::Forms::Button^ btnDeleteProduct;

	private: System::Windows::Forms::RadioButton^ rbtnPerson;
	private: System::Windows::Forms::RadioButton^ rbtnCompany;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::GroupBox^ radioGroup;
	private: System::Windows::Forms::Button^ btnRegisterSale;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ cmbStore;
	private: System::ComponentModel::IContainer^ components;






	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SaleForm::typeid));
			this->cmbCustomers = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dtpSaleDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->btnAddProduct = (gcnew System::Windows::Forms::Button());
			this->iconsList = (gcnew System::Windows::Forms::ImageList(this->components));
			this->dgvDetails = (gcnew System::Windows::Forms::DataGridView());
			this->productId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->productName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->unitPrice = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->quantity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->subTotal = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->txtTotal = (gcnew System::Windows::Forms::TextBox());
			this->Total = (gcnew System::Windows::Forms::Label());
			this->btnDeleteProduct = (gcnew System::Windows::Forms::Button());
			this->rbtnPerson = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnCompany = (gcnew System::Windows::Forms::RadioButton());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->radioGroup = (gcnew System::Windows::Forms::GroupBox());
			this->btnRegisterSale = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->cmbStore = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvDetails))->BeginInit();
			this->radioGroup->SuspendLayout();
			this->SuspendLayout();
			// 
			// cmbCustomers
			// 
			this->cmbCustomers->FormattingEnabled = true;
			this->cmbCustomers->Location = System::Drawing::Point(187, 58);
			this->cmbCustomers->Name = L"cmbCustomers";
			this->cmbCustomers->Size = System::Drawing::Size(211, 21);
			this->cmbCustomers->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(75, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(84, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Tipo de Cliente :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(78, 130);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Fecha :";
			// 
			// dtpSaleDate
			// 
			this->dtpSaleDate->Location = System::Drawing::Point(187, 130);
			this->dtpSaleDate->Name = L"dtpSaleDate";
			this->dtpSaleDate->Size = System::Drawing::Size(211, 20);
			this->dtpSaleDate->TabIndex = 4;
			// 
			// btnAddProduct
			// 
			this->btnAddProduct->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnAddProduct->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnAddProduct->ImageIndex = 0;
			this->btnAddProduct->ImageList = this->iconsList;
			this->btnAddProduct->Location = System::Drawing::Point(78, 156);
			this->btnAddProduct->Name = L"btnAddProduct";
			this->btnAddProduct->Size = System::Drawing::Size(139, 23);
			this->btnAddProduct->TabIndex = 5;
			this->btnAddProduct->Text = L"Agregar producto";
			this->btnAddProduct->UseVisualStyleBackColor = true;
			this->btnAddProduct->Click += gcnew System::EventHandler(this, &SaleForm::btnAddProduct_Click);
			// 
			// iconsList
			// 
			this->iconsList->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"iconsList.ImageStream")));
			this->iconsList->TransparentColor = System::Drawing::Color::Transparent;
			this->iconsList->Images->SetKeyName(0, L"shapes-and-symbols.png");
			this->iconsList->Images->SetKeyName(1, L"close.png");
			this->iconsList->Images->SetKeyName(2, L"archive.png");
			this->iconsList->Images->SetKeyName(3, L"product_icon.png");
			this->iconsList->Images->SetKeyName(4, L"store.png");
			this->iconsList->Images->SetKeyName(5, L"salesman.jpg");
			// 
			// dgvDetails
			// 
			this->dgvDetails->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvDetails->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->productId,
					this->productName, this->unitPrice, this->quantity, this->subTotal
			});
			this->dgvDetails->Location = System::Drawing::Point(23, 185);
			this->dgvDetails->Name = L"dgvDetails";
			this->dgvDetails->Size = System::Drawing::Size(443, 146);
			this->dgvDetails->TabIndex = 7;
			this->dgvDetails->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &SaleForm::dgvDetails_CellValueChanged);
			// 
			// productId
			// 
			this->productId->HeaderText = L"Id";
			this->productId->Name = L"productId";
			this->productId->ReadOnly = true;
			this->productId->Width = 40;
			// 
			// productName
			// 
			this->productName->HeaderText = L"Nombre";
			this->productName->Name = L"productName";
			this->productName->ReadOnly = true;
			this->productName->Width = 180;
			// 
			// unitPrice
			// 
			this->unitPrice->HeaderText = L"P.U. (S/.)";
			this->unitPrice->Name = L"unitPrice";
			this->unitPrice->ReadOnly = true;
			this->unitPrice->Width = 50;
			// 
			// quantity
			// 
			this->quantity->HeaderText = L"Cantidad";
			this->quantity->Name = L"quantity";
			this->quantity->Width = 50;
			// 
			// subTotal
			// 
			this->subTotal->HeaderText = L"Subtotal (S/.)";
			this->subTotal->Name = L"subTotal";
			this->subTotal->ReadOnly = true;
			this->subTotal->Width = 80;
			// 
			// txtTotal
			// 
			this->txtTotal->Location = System::Drawing::Point(386, 337);
			this->txtTotal->Name = L"txtTotal";
			this->txtTotal->ReadOnly = true;
			this->txtTotal->Size = System::Drawing::Size(74, 20);
			this->txtTotal->TabIndex = 6;
			this->txtTotal->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// Total
			// 
			this->Total->AutoSize = true;
			this->Total->Location = System::Drawing::Point(330, 340);
			this->Total->Name = L"Total";
			this->Total->Size = System::Drawing::Size(52, 13);
			this->Total->TabIndex = 7;
			this->Total->Text = L"Total: S/.";
			// 
			// btnDeleteProduct
			// 
			this->btnDeleteProduct->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnDeleteProduct->ImageIndex = 1;
			this->btnDeleteProduct->ImageList = this->iconsList;
			this->btnDeleteProduct->Location = System::Drawing::Point(259, 156);
			this->btnDeleteProduct->Name = L"btnDeleteProduct";
			this->btnDeleteProduct->Size = System::Drawing::Size(141, 23);
			this->btnDeleteProduct->TabIndex = 6;
			this->btnDeleteProduct->Text = L"Eliminar producto";
			this->btnDeleteProduct->UseVisualStyleBackColor = true;
			this->btnDeleteProduct->Click += gcnew System::EventHandler(this, &SaleForm::btnDeleteProduct_Click);
			// 
			// rbtnPerson
			// 
			this->rbtnPerson->AutoSize = true;
			this->rbtnPerson->Checked = true;
			this->rbtnPerson->Location = System::Drawing::Point(4, 16);
			this->rbtnPerson->Name = L"rbtnPerson";
			this->rbtnPerson->Size = System::Drawing::Size(64, 17);
			this->rbtnPerson->TabIndex = 1;
			this->rbtnPerson->TabStop = true;
			this->rbtnPerson->Text = L"Persona";
			this->rbtnPerson->UseVisualStyleBackColor = true;
			this->rbtnPerson->CheckedChanged += gcnew System::EventHandler(this, &SaleForm::rbtnPerson_CheckedChanged);
			// 
			// rbtnCompany
			// 
			this->rbtnCompany->AutoSize = true;
			this->rbtnCompany->Location = System::Drawing::Point(95, 16);
			this->rbtnCompany->Name = L"rbtnCompany";
			this->rbtnCompany->Size = System::Drawing::Size(66, 17);
			this->rbtnCompany->TabIndex = 2;
			this->rbtnCompany->Text = L"Empresa";
			this->rbtnCompany->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(78, 61);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(45, 13);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Cliente :";
			// 
			// radioGroup
			// 
			this->radioGroup->Controls->Add(this->rbtnCompany);
			this->radioGroup->Controls->Add(this->rbtnPerson);
			this->radioGroup->Location = System::Drawing::Point(187, 8);
			this->radioGroup->Name = L"radioGroup";
			this->radioGroup->Size = System::Drawing::Size(211, 44);
			this->radioGroup->TabIndex = 13;
			this->radioGroup->TabStop = false;
			// 
			// btnRegisterSale
			// 
			this->btnRegisterSale->Location = System::Drawing::Point(35, 334);
			this->btnRegisterSale->Name = L"btnRegisterSale";
			this->btnRegisterSale->Size = System::Drawing::Size(161, 23);
			this->btnRegisterSale->TabIndex = 14;
			this->btnRegisterSale->Text = L"Registrar Venta";
			this->btnRegisterSale->UseVisualStyleBackColor = true;
			this->btnRegisterSale->Click += gcnew System::EventHandler(this, &SaleForm::btnRegisterSale_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(78, 96);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(46, 13);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Tienda :";
			// 
			// cmbStore
			// 
			this->cmbStore->FormattingEnabled = true;
			this->cmbStore->Location = System::Drawing::Point(191, 94);
			this->cmbStore->Name = L"cmbStore";
			this->cmbStore->Size = System::Drawing::Size(207, 21);
			this->cmbStore->TabIndex = 16;
			// 
			// SaleForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(478, 361);
			this->Controls->Add(this->cmbStore);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->btnRegisterSale);
			this->Controls->Add(this->radioGroup);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btnDeleteProduct);
			this->Controls->Add(this->Total);
			this->Controls->Add(this->txtTotal);
			this->Controls->Add(this->dgvDetails);
			this->Controls->Add(this->btnAddProduct);
			this->Controls->Add(this->dtpSaleDate);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->cmbCustomers);
			this->Name = L"SaleForm";
			this->Text = L"Realización de una Venta";
			this->Load += gcnew System::EventHandler(this, &SaleForm::SaleForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvDetails))->EndInit();
			this->radioGroup->ResumeLayout(false);
			this->radioGroup->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnAddProduct_Click(System::Object^ sender, System::EventArgs^ e) {
		ProductSearchForm^ psForm = gcnew ProductSearchForm(this);
		//ProductSearchForm^ psForm = gcnew ProductSearchForm();

		psForm->ShowDialog();
	}


	void AddCmbCustomers() {
		cmbCustomers->Items->Clear();
		if (rbtnPerson->Checked) {
			List <Person^>^ personList = SalesManager::QueryAllPersons();
			for (int i = 0; i < personList->Count; i++) {
				cmbCustomers->Items->Add(gcnew ComboBoxItem(personList[i]->FirstName + " " + personList[i]->LastName, personList[i]->Id));
			}
		}
		if (rbtnCompany->Checked) {
			List <Company^>^ companyList = SalesManager::QueryAllCompanies();
			for (int i = 0; i < companyList->Count; i++) {
				cmbCustomers->Items->Add(gcnew ComboBoxItem(companyList[i]->Name, companyList[i]->Id));
			}
		}
	}

	void AddCmbStores() {
		cmbStore->Items->Clear();
		List <Store^>^ storeList = SalesManager::QueryAllStores();
		for (int i = 0; i < storeList->Count; i++) {
			cmbStore->Items->Add(gcnew ComboBoxItem(storeList[i]->Name, storeList[i]->Id));
		}
	}

	private: System::Void SaleForm_Load(System::Object^ sender, System::EventArgs^ e) {
		AddCmbCustomers();
		AddCmbStores();
	}

	public: System::Void AddProductToDetails(Product^ p) {
		if (p != nullptr) {
			int storeId = ((ComboBoxItem^)cmbStore->SelectedItem)->Value;
			Store^ store = SalesManager::QueryStoreById(storeId);
			for (int i = 0; i < store->StoreProductList->Count; i++) {
				if (store->StoreProductList[i]->Product->Id == p->Id) {
					p->Price = p->Price * (1 - store->StoreProductList[i]->Discount/100);
				}
			}
			String^ desc;

			if (p->GetType() == Book::typeid) {
				desc = ((Book^)p)->Title;
			} else {
				desc = p->Name;
			}

			this->dgvDetails->Rows->Add(gcnew array<String^>{
				"" + p->Id,
					desc,
					"" + p->Price,
					"1",
					"" + p->Price
			});
			double total = 0;
			for (int i = 0; i < dgvDetails->RowCount - 1; i++)
				total += Double::Parse(dgvDetails->Rows[i]->Cells[4]->Value->ToString());
			txtTotal->Text = "" + total;
		}
	}


private: System::Void dgvDetails_CellValueChanged(System::Object^ sender, 
	System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (dgvDetails->Columns[e->ColumnIndex]->Name == "quantity") {
		if (dgvDetails->CurrentCell != nullptr &&
			dgvDetails->CurrentCell->Value != nullptr &&
			dgvDetails->CurrentCell->Value->ToString() != "") {
			dgvDetails->Rows[e->RowIndex]->Cells[4]->Value =
				Int32::Parse(dgvDetails->CurrentCell->Value->ToString())
				* Double::Parse(dgvDetails->Rows[e->RowIndex]->Cells[2]->Value->ToString());
			double total = 0;
			for (int i = 0; i < dgvDetails->RowCount - 1; i++)
				total += Double::Parse(dgvDetails->Rows[i]->Cells[4]->Value->ToString());
			txtTotal->Text = "" + total;
		}
	}
}

private: System::Void rbtnPerson_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	AddCmbCustomers();
}

	   int ValidarDatos();

private: System::Void btnRegisterSale_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void btnDeleteProduct_Click(System::Object^ sender, System::EventArgs^ e) {
	int selectedRows = dgvDetails->SelectedRows->Count;
	if (selectedRows == 1) {
		dgvDetails->Rows->RemoveAt(dgvDetails->SelectedRows[0]->Index);
	}
	else {
		MessageBox::Show("Para eliminar un producto debe seleccionar todo el registro");
	}
}
};


}
