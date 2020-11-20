#pragma once

namespace SalesView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SalesModel;
	using namespace SalesController;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de StoreForm
	/// </summary>
	public ref class StoreForm : public System::Windows::Forms::Form
	{
	public:
		Store^ store;
		StoreForm(void)
		{
			
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			AgregarUnControlDinamico();
		}
		Void AgregarUnControlDinamico() {
			Button^ btnDynamic = gcnew Button();
			btnDynamic->Enabled = true;
			btnDynamic->Location = System::Drawing::Point(18, 190);
			btnDynamic->Name = L"btnDynamic";
			btnDynamic->Size = System::Drawing::Size(101, 23);
			btnDynamic->TabIndex = 10;
			btnDynamic->Text = L"Nuevo";
			btnDynamic->UseVisualStyleBackColor = true;
			//this->btnAdd->Click += gcnew System::EventHandler(this, &StoreForm::btnAdd_Click);
			this->Controls->Add(btnDynamic);
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~StoreForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ nuevoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtId;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::TextBox^ txtAddress;
	private: System::Windows::Forms::TextBox^ txtPostalCode;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::DataGridView^ dgvStores;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ StoreId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ StoreName;
	private: System::Windows::Forms::ToolStripMenuItem^ consultasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ consultasToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ editarToolStripMenuItem;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StoreForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nuevoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->consultasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->consultasToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->txtAddress = (gcnew System::Windows::Forms::TextBox());
			this->txtPostalCode = (gcnew System::Windows::Forms::TextBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->dgvStores = (gcnew System::Windows::Forms::DataGridView());
			this->StoreId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->StoreName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvStores))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->AllowMerge = false;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->archivoToolStripMenuItem,
					this->consultasToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(358, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->nuevoToolStripMenuItem,
					this->editarToolStripMenuItem, this->salirToolStripMenuItem
			});
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// nuevoToolStripMenuItem
			// 
			this->nuevoToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nuevoToolStripMenuItem.Image")));
			this->nuevoToolStripMenuItem->Name = L"nuevoToolStripMenuItem";
			this->nuevoToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->nuevoToolStripMenuItem->Text = L"Nuevo";
			this->nuevoToolStripMenuItem->Click += gcnew System::EventHandler(this, &StoreForm::nuevoToolStripMenuItem_Click);
			// 
			// editarToolStripMenuItem
			// 
			this->editarToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"editarToolStripMenuItem.Image")));
			this->editarToolStripMenuItem->Name = L"editarToolStripMenuItem";
			this->editarToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->editarToolStripMenuItem->Text = L"Editar";
			this->editarToolStripMenuItem->Click += gcnew System::EventHandler(this, &StoreForm::editarToolStripMenuItem_Click);
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"salirToolStripMenuItem.Image")));
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &StoreForm::salirToolStripMenuItem_Click);
			// 
			// consultasToolStripMenuItem
			// 
			this->consultasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->consultasToolStripMenuItem1 });
			this->consultasToolStripMenuItem->Name = L"consultasToolStripMenuItem";
			this->consultasToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->consultasToolStripMenuItem->Text = L"Reporte";
			// 
			// consultasToolStripMenuItem1
			// 
			this->consultasToolStripMenuItem1->Name = L"consultasToolStripMenuItem1";
			this->consultasToolStripMenuItem1->Size = System::Drawing::Size(180, 22);
			this->consultasToolStripMenuItem1->Text = L"Consultas";
			this->consultasToolStripMenuItem1->Click += gcnew System::EventHandler(this, &StoreForm::consultasToolStripMenuItem1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(20, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Id (*)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(17, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Nombre (*)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(17, 88);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(65, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Dirección (*)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(17, 141);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(85, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Código Postal (*)";
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(104, 31);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(57, 20);
			this->txtId->TabIndex = 5;
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(104, 57);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(235, 20);
			this->txtName->TabIndex = 6;
			// 
			// txtAddress
			// 
			this->txtAddress->Location = System::Drawing::Point(105, 85);
			this->txtAddress->Multiline = true;
			this->txtAddress->Name = L"txtAddress";
			this->txtAddress->Size = System::Drawing::Size(234, 50);
			this->txtAddress->TabIndex = 7;
			// 
			// txtPostalCode
			// 
			this->txtPostalCode->Location = System::Drawing::Point(105, 141);
			this->txtPostalCode->Name = L"txtPostalCode";
			this->txtPostalCode->Size = System::Drawing::Size(234, 20);
			this->txtPostalCode->TabIndex = 8;
			// 
			// btnAdd
			// 
			this->btnAdd->Enabled = true;
			this->btnAdd->Location = System::Drawing::Point(18, 168);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(101, 23);
			this->btnAdd->TabIndex = 9;
			this->btnAdd->Text = L"Agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &StoreForm::btnAdd_Click);

			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(128, 168);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(101, 23);
			this->btnUpdate->TabIndex = 10;
			this->btnUpdate->Text = L"Modificar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &StoreForm::btnUpdate_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(238, 168);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(101, 23);
			this->btnDelete->TabIndex = 11;
			this->btnDelete->Text = L"Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &StoreForm::btnDelete_Click);
			// 
			// dgvStores
			// 
			this->dgvStores->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvStores->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) { this->StoreId, this->StoreName });
			this->dgvStores->Location = System::Drawing::Point(18, 198);
			this->dgvStores->Name = L"dgvStores";
			this->dgvStores->Size = System::Drawing::Size(321, 150);
			this->dgvStores->TabIndex = 12;
			this->dgvStores->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &StoreForm::dgvStores_CellClick);
			// 
			// StoreId
			// 
			this->StoreId->HeaderText = L"Id";
			this->StoreId->Name = L"StoreId";
			this->StoreId->Width = 30;
			// 
			// StoreName
			// 
			this->StoreName->HeaderText = L"Nombre de la Tienda";
			this->StoreName->Name = L"StoreName";
			this->StoreName->Width = 250;
			// 
			// StoreForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(358, 366);
			this->Controls->Add(this->dgvStores);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->txtPostalCode);
			this->Controls->Add(this->txtAddress);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->txtId);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"StoreForm";
			this->Text = L"Tiendas";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvStores))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

			this->Load += gcnew System::EventHandler(this, &StoreForm::StoreForm_Load);
		}
#pragma endregion
	private: System::Void nuevoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		EnableControls();
		btnAdd->Enabled = true;
		btnUpdate->Enabled = false;
		btnDelete->Enabled = false;
	}
private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void consultasToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	//DisableControls();
}
	   Void EnableControls() {
		   txtId->ReadOnly = false;
		   txtName->ReadOnly = false;
		   txtAddress->ReadOnly = false;
		   txtPostalCode->ReadOnly = false;
	   }
	   Void DisableControls() {
		   txtId->ReadOnly = true;
		   txtName->ReadOnly = true;
		   txtAddress->ReadOnly = true;
		   txtPostalCode->ReadOnly = true;
		   btnAdd->Enabled = false;
		   btnUpdate->Enabled = false;
		   btnDelete->Enabled = false;
	   }
private: System::Void editarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	EnableControls();
	btnAdd->Enabled = false;
	btnUpdate->Enabled = true;
	btnDelete->Enabled = true;
}

private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	Store^ p = gcnew Store();
	try {
		if (txtName->Text->Trim() == "") {
			MessageBox::Show("El nombre de la tienda no debe estar vacío.");
			return;
		}
		if (txtAddress->Text->Trim() == "") {
			MessageBox::Show("La dirección no debe estar vacío.");
			return;
		}
		if (txtPostalCode->Text->Trim() == "") {
			MessageBox::Show("El correo postal no debe estar vacío.");
			return;
		}
		p->Id = SalesManager::QueryLastStoreId() + 1;
		p->Name = txtName->Text;
		p->Address = txtAddress->Text;
		p->PostalCode = txtPostalCode->Text;

		SalesManager::AddStore(p);
		RefreshDGVStores();
		btnAdd->Enabled = true;
		//ClearControls();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->ToString(), "No se guardó la tienda por error en los datos.");
		return;
	}
}
	   private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
		   try {
			   if (txtName->Text->Trim() == "") {
				   MessageBox::Show("El nombre de la tienda no debe estar vacío.");
				   return;
			   }
			   if (txtAddress->Text->Trim() == "") {
				   MessageBox::Show("La dirección no debe estar vacío.");
				   return;
			   }
			   if (txtPostalCode->Text->Trim() == "") {
				   MessageBox::Show("El correo postal no debe estar vacío.");
				   return;
			   }
			   store->Id = Int32::Parse(txtId->Text);
			   store->Name = txtName->Text;
			   store->Address = txtAddress->Text;
			   store->PostalCode = txtPostalCode->Text;

			   SalesManager::UpdateStore(store);
			   RefreshDGVStores();
			   //btnAdd->Enabled = false;			   
		   }
		   catch (Exception^ ex) {
			   MessageBox::Show(ex->ToString(), "No se guardó la tienda por error en los datos.");
			   return;
		   }
	   }

		private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
			int storeId = -1;
			try {
				if (txtId->Text->Trim() == "") {
					MessageBox::Show("No se puede eliminar porque no hay ninguna tienda seleccionado.");
					return;
				}
				storeId = Int32::Parse(txtId->Text);

			}
			catch (...) {
				MessageBox::Show("No se puede eliminar la tienda porque el Id no es válido.");
				return;
			}
			if (MessageBox::Show(
				"¿Está seguro de eliminar la tienda?",
				"Confirmación", MessageBoxButtons::YesNo,
				MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
			{
				SalesManager::DeleteStore(storeId);
				RefreshDGVStores();
				ClearControls();
			}
		}

		void ClearControls() {
			txtId->Text = "";
			txtName->Text = "";
			txtAddress->Text = "";
			txtPostalCode->Text = "";
		}

		void RefreshDGVStores() {
		   List <Store^>^ storeList = SalesManager::QueryAllStores();
		   dgvStores->Rows->Clear();
		   for (int i = 0; i < storeList->Count; i++) {
			   dgvStores->Rows->Add(gcnew array<String^> {
				   "" + storeList[i]->Id,
					   storeList[i]->Name
			   });
		   }
		}

	private: System::Void StoreForm_Load(System::Object^ sender, System::EventArgs^ e) {
		RefreshDGVStores();
	}

	private: System::Void dgvStores_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (dgvStores->CurrentCell != nullptr &&
			dgvStores->CurrentCell->Value != nullptr &&
			dgvStores->CurrentCell->Value->ToString() != "") {
			int selectedrowindex = dgvStores->SelectedCells[0]->RowIndex;
			DataGridViewRow^ selectedRow = dgvStores->Rows[selectedrowindex];
			String^ a = selectedRow->Cells[0]->Value->ToString();

			int storeId = Int32::Parse(a);
			store = SalesManager::QueryStoreById(storeId);
			txtId->Text = "" + store->Id;
			txtName->Text = store->Name;
			txtAddress->Text = store->Address;
			txtPostalCode->Text = "" + store->PostalCode;
		}

	}
};
}
