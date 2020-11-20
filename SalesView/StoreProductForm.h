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
	/// Resumen de StoreProductForm
	/// </summary>
	public ref class StoreProductForm : public System::Windows::Forms::Form
	{
	public:
		StoreProductForm(void)
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
		~StoreProductForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ btnAddProduct;
	private: System::Windows::Forms::Button^ btnDeleteProduct;
	private: System::Windows::Forms::ComboBox^ cmbStore;
	private: System::Windows::Forms::DataGridView^ dgvStoreProducts;

	private: System::Windows::Forms::Button^ btnSave;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ price;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ discount;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ stock;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ minStock;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnAddProduct = (gcnew System::Windows::Forms::Button());
			this->btnDeleteProduct = (gcnew System::Windows::Forms::Button());
			this->cmbStore = (gcnew System::Windows::Forms::ComboBox());
			this->dgvStoreProducts = (gcnew System::Windows::Forms::DataGridView());
			this->id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->discount = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->stock = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->minStock = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvStoreProducts))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(74, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Tienda";
			// 
			// btnAddProduct
			// 
			this->btnAddProduct->Location = System::Drawing::Point(106, 59);
			this->btnAddProduct->Name = L"btnAddProduct";
			this->btnAddProduct->Size = System::Drawing::Size(190, 23);
			this->btnAddProduct->TabIndex = 1;
			this->btnAddProduct->Text = L"Agregar producto";
			this->btnAddProduct->UseVisualStyleBackColor = true;
			this->btnAddProduct->Click += gcnew System::EventHandler(this, &StoreProductForm::btnAddProduct_Click);
			// 
			// btnDeleteProduct
			// 
			this->btnDeleteProduct->Location = System::Drawing::Point(326, 59);
			this->btnDeleteProduct->Name = L"btnDeleteProduct";
			this->btnDeleteProduct->Size = System::Drawing::Size(169, 23);
			this->btnDeleteProduct->TabIndex = 2;
			this->btnDeleteProduct->Text = L"Eliminar productos";
			this->btnDeleteProduct->UseVisualStyleBackColor = true;
			this->btnDeleteProduct->Click += gcnew System::EventHandler(this, &StoreProductForm::btnDeleteProduct_Click);
			// 
			// cmbStore
			// 
			this->cmbStore->FormattingEnabled = true;
			this->cmbStore->Location = System::Drawing::Point(151, 18);
			this->cmbStore->Name = L"cmbStore";
			this->cmbStore->Size = System::Drawing::Size(368, 21);
			this->cmbStore->TabIndex = 3;
			this->cmbStore->SelectedIndexChanged += gcnew System::EventHandler(this, &StoreProductForm::cmbStore_SelectedIndexChanged);
			// 
			// dgvStoreProducts
			// 
			this->dgvStoreProducts->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvStoreProducts->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->id,
					this->name, this->price, this->discount, this->stock, this->minStock
			});
			this->dgvStoreProducts->Location = System::Drawing::Point(12, 100);
			this->dgvStoreProducts->Name = L"dgvStoreProducts";
			this->dgvStoreProducts->Size = System::Drawing::Size(586, 259);
			this->dgvStoreProducts->TabIndex = 4;
			this->dgvStoreProducts->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &StoreProductForm::dgvStoreProducts_CellValueChanged);
			// 
			// id
			// 
			this->id->HeaderText = L"Código";
			this->id->Name = L"id";
			this->id->ReadOnly = true;
			this->id->Width = 45;
			// 
			// name
			// 
			this->name->HeaderText = L"Nombre";
			this->name->Name = L"name";
			this->name->ReadOnly = true;
			this->name->Width = 240;
			// 
			// price
			// 
			this->price->HeaderText = L"Precio (S/.)";
			this->price->Name = L"price";
			this->price->ReadOnly = true;
			this->price->Width = 75;
			// 
			// discount
			// 
			this->discount->HeaderText = L"Dscto.(%)";
			this->discount->Name = L"discount";
			this->discount->Width = 75;
			// 
			// stock
			// 
			this->stock->HeaderText = L"Stock";
			this->stock->Name = L"stock";
			this->stock->Width = 54;
			// 
			// minStock
			// 
			this->minStock->HeaderText = L"Stock mín.";
			this->minStock->Name = L"minStock";
			this->minStock->Width = 54;
			// 
			// btnSave
			// 
			this->btnSave->Location = System::Drawing::Point(165, 365);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(122, 28);
			this->btnSave->TabIndex = 5;
			this->btnSave->Text = L"Guardar";
			this->btnSave->UseVisualStyleBackColor = true;
			this->btnSave->Click += gcnew System::EventHandler(this, &StoreProductForm::btnSave_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(317, 366);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(122, 27);
			this->btnCancel->TabIndex = 6;
			this->btnCancel->Text = L"Cancelar";
			this->btnCancel->UseVisualStyleBackColor = true;
			// 
			// StoreProductForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(614, 399);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnSave);
			this->Controls->Add(this->dgvStoreProducts);
			this->Controls->Add(this->cmbStore);
			this->Controls->Add(this->btnDeleteProduct);
			this->Controls->Add(this->btnAddProduct);
			this->Controls->Add(this->label1);
			this->Name = L"StoreProductForm";
			this->Text = L"Productos por Tienda";
			this->Load += gcnew System::EventHandler(this, &StoreProductForm::StoreProductForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvStoreProducts))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnAddProduct_Click(System::Object^ sender, System::EventArgs^ e) {
		ProductSearchForm^ psForm = gcnew ProductSearchForm(this);
		psForm->ShowDialog();
	}

private: System::Void StoreProductForm_Load(System::Object^ sender, System::EventArgs^ e) {
	LoadCmbStores();
}
	public:
		void LoadCmbStores() {
			cmbStore->Items->Clear();
			List <Store^>^ storeList = SalesManager::QueryAllStores();
			for (int i = 0; i < storeList->Count; i++) {
				cmbStore->Items->Add(gcnew ComboBoxItem(storeList[i]->Name, storeList[i]->Id));
			}			
		}
		
		void ClearDGVStoreProduct() {
			dgvStoreProducts->Rows->Clear();
		}

		void AddProductToDetails(Product^ p) {
			if (p != nullptr) {
				String^ name = "";
				if (p->GetType() == Book::typeid) {
					name = ((Book^)p)->Title;
				}
				else if (p->GetType() == Electronic::typeid) {
					name = ((Electronic^)p)->Name;
				}
				this->dgvStoreProducts->Rows->Add(gcnew array<String^>{
					"" + p->Id,
						name,
						"" + p->Price,
						""+ 0,
						"" + p->StockTotal,
						"" + 0
				});
			}
		}
	private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			Store^ s = SalesManager::QueryStoreById(
				((ComboBoxItem^)cmbStore->Items[cmbStore->SelectedIndex])->Value);
			s->StoreProductList = gcnew List<StoreProduct^>();
			for (int i = 0; i < dgvStoreProducts->Rows->Count - 1; i++) {
				StoreProduct^ sp = gcnew StoreProduct();
				sp->Product = SalesManager::QueryProductById(
					Int32::Parse(dgvStoreProducts->Rows[i]->Cells[0]->Value->ToString()));
				sp->Stock = Int32::Parse(dgvStoreProducts->Rows[i]->Cells[4]->Value->ToString());
				sp->Discount = Int32::Parse(dgvStoreProducts->Rows[i]->Cells[3]->Value->ToString());
				sp->MinStock = Int32::Parse(dgvStoreProducts->Rows[i]->Cells[5]->Value->ToString());
				s->StoreProductList->Add(sp);
			}
			SalesManager::UpdateStore(s);
			MessageBox::Show("Se asignaron los productos a la tienda de manera exitosa.");
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->ToString(), "Hubo un error al grabar. Notifique al área de tecnología.");
			return;
		}

	}

private: System::Void dgvStoreProducts_CellValueChanged(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	
	if (dgvStoreProducts->Columns[e->ColumnIndex]->Name == "discount") {
		if (dgvStoreProducts->CurrentCell != nullptr &&
			dgvStoreProducts->CurrentCell->Value != nullptr &&
			dgvStoreProducts->CurrentCell->Value->ToString() != "") {
			Int32 discount;
			bool isValidDiscount = Int32::TryParse(dgvStoreProducts->CurrentCell->Value->ToString(), discount);

			if (isValidDiscount) {
				if (discount <0 || discount >100)
					MessageBox::Show("El descuento no es válido.");
			}
			else {
				MessageBox::Show("El descuento no es un número");
			}
		}
	}
	if (dgvStoreProducts->Columns[e->ColumnIndex]->Name == "stock") {
		if (dgvStoreProducts->CurrentCell != nullptr &&
			dgvStoreProducts->CurrentCell->Value != nullptr &&
			dgvStoreProducts->CurrentCell->Value->ToString() != "") {
			Int32 stock;
			bool isValidStock = Int32::TryParse(dgvStoreProducts->CurrentCell->Value->ToString(), stock);
			Product^ p = SalesManager::QueryProductById(Int32::Parse(dgvStoreProducts->Rows[e->RowIndex]->Cells[0]->Value->ToString()));
			if (isValidStock) {
				if (stock < 0 || stock > p->StockTotal)
					MessageBox::Show("El stock no es válido.");
			}
			else {
				MessageBox::Show("El stock no es un número");
			}
		}
	}
	if (dgvStoreProducts->Columns[e->ColumnIndex]->Name == "minStock") {
		if (dgvStoreProducts->CurrentCell != nullptr &&
			dgvStoreProducts->CurrentCell->Value != nullptr &&
			dgvStoreProducts->CurrentCell->Value->ToString() != "") {
			Int32 minStock;
			bool isValidMinStock = Int32::TryParse(dgvStoreProducts->CurrentCell->Value->ToString(), minStock);
			Product^ p = SalesManager::QueryProductById(Int32::Parse(dgvStoreProducts->Rows[e->RowIndex]->Cells[0]->Value->ToString()));
			if (isValidMinStock) {
				if (minStock < 0 || minStock > Int32::Parse(dgvStoreProducts->Rows[e->RowIndex]->Cells[4]->Value->ToString()))
					MessageBox::Show("El stock mínimo no es válido.");
			}
			else {
				MessageBox::Show("El stock mínimo no es un número");
			}
		}
	}
}
private: System::Void cmbStore_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	ClearDGVStoreProduct();
	int storeId = ((ComboBoxItem^)cmbStore->Items[cmbStore->SelectedIndex])->Value;
	Store^ store = SalesManager::QueryStoreById(storeId);
	if (store != nullptr && store->StoreProductList != nullptr) {
		String^ name;
		for (int i = 0; i < store->StoreProductList->Count; i++) {
			StoreProduct^ sp = store->StoreProductList[i];
			if (sp->Product->GetType() == Book::typeid) {
				name = ((Book^)sp->Product)->Title;
			}
			else if (sp->Product->GetType() == Electronic::typeid) {
				name = ((Electronic^)sp->Product)->Name;
			}
			this->dgvStoreProducts->Rows->Add(gcnew array<String^>{
				"" + sp->Product->Id,
					name,
					"" + sp->Product->Price,
					"" + sp->Discount,
					"" + sp->Stock,
					"" + sp->MinStock
			});
		}
	}
}
private: System::Void btnDeleteProduct_Click(System::Object^ sender, System::EventArgs^ e) {
	int selectedRows = dgvStoreProducts->SelectedRows->Count;
	if (selectedRows == 1) {
		dgvStoreProducts->Rows->RemoveAt(dgvStoreProducts->SelectedRows[0]->Index);
	}
	else {
		MessageBox::Show("Para eliminar un producto debe seleccionar todo el registro");
	}
}
};
}
