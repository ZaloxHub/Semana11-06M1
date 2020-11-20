#pragma once

namespace SalesView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SalesController;
	using namespace SalesModel;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de ProductForm
	/// </summary>
	public ref class ProductForm : public System::Windows::Forms::Form
	{
	public:
		ProductForm(void)
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
		~ProductForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtId;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::TextBox^ txtDescription;
	private: System::Windows::Forms::TextBox^ txtPrice;
	private: System::Windows::Forms::TextBox^ txtStock;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::DataGridView^ dgvBooks;






	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ nuevoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cerrarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reporteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ porDebajoStockMínimoToolStripMenuItem;




	private: System::Windows::Forms::ToolStripMenuItem^ editToolStripMenuItem;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPageBooks;


	private: System::Windows::Forms::TextBox^ txtYear;
	private: System::Windows::Forms::TextBox^ txtEdition;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txtEditorial;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtAuthor;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ btnUploadPhoto;
	private: System::Windows::Forms::TextBox^ txtTitle;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ pbPhoto;
	private: System::Windows::Forms::TabPage^ tabPageElectronics;

	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::TextBox^ txtWarranty;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ txtFamily;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ txtModel;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Button^ btnUploadElectronicPhoto;
	private: System::Windows::Forms::TextBox^ txtBrand;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::PictureBox^ pbElectronicPhoto;

	private: System::Windows::Forms::DataGridView^ dgvElectronics;
	private: System::Windows::Forms::Button^ btnElectronicDelete;





	private: System::Windows::Forms::TextBox^ txtElectronicName;
	private: System::Windows::Forms::Button^ btnElectronicUpdate;

	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Button^ btnElectronicAdd;

	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ txtElectronicStock;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ txtElectronicPrice;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ txtElectronicDescription;
	private: System::Windows::Forms::TextBox^ txtElectronicId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ title;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ author;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ price;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ stock;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ brand;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
private: System::Windows::Forms::ToolStripMenuItem^ libroToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ electrónicoToolStripMenuItem;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ProductForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->txtDescription = (gcnew System::Windows::Forms::TextBox());
			this->txtPrice = (gcnew System::Windows::Forms::TextBox());
			this->txtStock = (gcnew System::Windows::Forms::TextBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->dgvBooks = (gcnew System::Windows::Forms::DataGridView());
			this->id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->title = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->author = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->stock = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nuevoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->libroToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->electrónicoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cerrarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reporteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->porDebajoStockMínimoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPageBooks = (gcnew System::Windows::Forms::TabPage());
			this->txtYear = (gcnew System::Windows::Forms::TextBox());
			this->txtEdition = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtEditorial = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtAuthor = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->btnUploadPhoto = (gcnew System::Windows::Forms::Button());
			this->txtTitle = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pbPhoto = (gcnew System::Windows::Forms::PictureBox());
			this->tabPageElectronics = (gcnew System::Windows::Forms::TabPage());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->txtWarranty = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txtFamily = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->txtModel = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->btnUploadElectronicPhoto = (gcnew System::Windows::Forms::Button());
			this->txtBrand = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->pbElectronicPhoto = (gcnew System::Windows::Forms::PictureBox());
			this->dgvElectronics = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->brand = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnElectronicDelete = (gcnew System::Windows::Forms::Button());
			this->txtElectronicName = (gcnew System::Windows::Forms::TextBox());
			this->btnElectronicUpdate = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->btnElectronicAdd = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->txtElectronicStock = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->txtElectronicPrice = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->txtElectronicDescription = (gcnew System::Windows::Forms::TextBox());
			this->txtElectronicId = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvBooks))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPageBooks->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->BeginInit();
			this->tabPageElectronics->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbElectronicPhoto))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvElectronics))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(42, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Código";
			this->label1->Click += gcnew System::EventHandler(this, &ProductForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(41, 35);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre (*)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(42, 89);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(63, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Descripción";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(41, 213);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(83, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Precio en S/. (*)";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(295, 213);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(48, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Stock (*)";
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(131, 5);
			this->txtId->Name = L"txtId";
			this->txtId->ReadOnly = true;
			this->txtId->Size = System::Drawing::Size(100, 20);
			this->txtId->TabIndex = 1;
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(131, 31);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(308, 20);
			this->txtName->TabIndex = 2;
			// 
			// txtDescription
			// 
			this->txtDescription->Location = System::Drawing::Point(131, 84);
			this->txtDescription->Multiline = true;
			this->txtDescription->Name = L"txtDescription";
			this->txtDescription->Size = System::Drawing::Size(308, 36);
			this->txtDescription->TabIndex = 4;
			// 
			// txtPrice
			// 
			this->txtPrice->Location = System::Drawing::Point(131, 210);
			this->txtPrice->Name = L"txtPrice";
			this->txtPrice->Size = System::Drawing::Size(137, 20);
			this->txtPrice->TabIndex = 9;
			// 
			// txtStock
			// 
			this->txtStock->Location = System::Drawing::Point(357, 210);
			this->txtStock->Name = L"txtStock";
			this->txtStock->Size = System::Drawing::Size(82, 20);
			this->txtStock->TabIndex = 10;
			// 
			// btnAdd
			// 
			this->btnAdd->Enabled = false;
			this->btnAdd->Location = System::Drawing::Point(95, 250);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(129, 23);
			this->btnAdd->TabIndex = 12;
			this->btnAdd->Text = L"Agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &ProductForm::btnAdd_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->Enabled = false;
			this->btnUpdate->Location = System::Drawing::Point(230, 250);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(141, 23);
			this->btnUpdate->TabIndex = 13;
			this->btnUpdate->Text = L"Actualizar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &ProductForm::btnUpdate_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Enabled = false;
			this->btnDelete->Location = System::Drawing::Point(377, 250);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(132, 23);
			this->btnDelete->TabIndex = 14;
			this->btnDelete->Text = L"Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &ProductForm::btnDelete_Click);
			// 
			// dgvBooks
			// 
			this->dgvBooks->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvBooks->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->id, this->title,
					this->author, this->price, this->stock
			});
			this->dgvBooks->Location = System::Drawing::Point(16, 279);
			this->dgvBooks->Name = L"dgvBooks";
			this->dgvBooks->Size = System::Drawing::Size(583, 181);
			this->dgvBooks->TabIndex = 15;
			this->dgvBooks->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ProductForm::dgvProducts_CellClick);
			// 
			// id
			// 
			this->id->HeaderText = L"Id";
			this->id->Name = L"id";
			this->id->Width = 30;
			// 
			// title
			// 
			this->title->HeaderText = L"Título";
			this->title->Name = L"title";
			this->title->Width = 210;
			// 
			// author
			// 
			this->author->HeaderText = L"Autor";
			this->author->Name = L"author";
			this->author->Width = 160;
			// 
			// price
			// 
			this->price->HeaderText = L"Precio (S/.)";
			this->price->Name = L"price";
			this->price->Width = 70;
			// 
			// stock
			// 
			this->stock->HeaderText = L"Stock";
			this->stock->Name = L"stock";
			this->stock->Width = 70;
			// 
			// menuStrip1
			// 
			this->menuStrip1->AllowMerge = false;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->archivoToolStripMenuItem,
					this->reporteToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(649, 24);
			this->menuStrip1->TabIndex = 14;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->nuevoToolStripMenuItem,
					this->editToolStripMenuItem, this->cerrarToolStripMenuItem
			});
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// nuevoToolStripMenuItem
			// 
			this->nuevoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->libroToolStripMenuItem,
					this->electrónicoToolStripMenuItem
			});
			this->nuevoToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nuevoToolStripMenuItem.Image")));
			this->nuevoToolStripMenuItem->Name = L"nuevoToolStripMenuItem";
			this->nuevoToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->nuevoToolStripMenuItem->Text = L"Nuevo";
			this->nuevoToolStripMenuItem->Click += gcnew System::EventHandler(this, &ProductForm::nuevoToolStripMenuItem_Click);
			// 
			// libroToolStripMenuItem
			// 
			this->libroToolStripMenuItem->Name = L"libroToolStripMenuItem";
			this->libroToolStripMenuItem->Size = System::Drawing::Size(133, 22);
			this->libroToolStripMenuItem->Text = L"Libro";
			this->libroToolStripMenuItem->Click += gcnew System::EventHandler(this, &ProductForm::libroToolStripMenuItem_Click);
			// 
			// electrónicoToolStripMenuItem
			// 
			this->electrónicoToolStripMenuItem->Name = L"electrónicoToolStripMenuItem";
			this->electrónicoToolStripMenuItem->Size = System::Drawing::Size(133, 22);
			this->electrónicoToolStripMenuItem->Text = L"Electrónico";
			this->electrónicoToolStripMenuItem->Click += gcnew System::EventHandler(this, &ProductForm::electrónicoToolStripMenuItem_Click);
			// 
			// editToolStripMenuItem
			// 
			this->editToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"editToolStripMenuItem.Image")));
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			this->editToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->editToolStripMenuItem->Text = L"Editar";
			this->editToolStripMenuItem->Click += gcnew System::EventHandler(this, &ProductForm::editToolStripMenuItem_Click);
			// 
			// cerrarToolStripMenuItem
			// 
			this->cerrarToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cerrarToolStripMenuItem.Image")));
			this->cerrarToolStripMenuItem->Name = L"cerrarToolStripMenuItem";
			this->cerrarToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->cerrarToolStripMenuItem->Text = L"Cerrar";
			this->cerrarToolStripMenuItem->Click += gcnew System::EventHandler(this, &ProductForm::cerrarToolStripMenuItem_Click);
			// 
			// reporteToolStripMenuItem
			// 
			this->reporteToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->porDebajoStockMínimoToolStripMenuItem });
			this->reporteToolStripMenuItem->Name = L"reporteToolStripMenuItem";
			this->reporteToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->reporteToolStripMenuItem->Text = L"Reporte";
			// 
			// porDebajoStockMínimoToolStripMenuItem
			// 
			this->porDebajoStockMínimoToolStripMenuItem->Name = L"porDebajoStockMínimoToolStripMenuItem";
			this->porDebajoStockMínimoToolStripMenuItem->Size = System::Drawing::Size(126, 22);
			this->porDebajoStockMínimoToolStripMenuItem->Text = L"Consultas";
			this->porDebajoStockMínimoToolStripMenuItem->Click += gcnew System::EventHandler(this, &ProductForm::porDebajoStockMínimoToolStripMenuItem_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPageBooks);
			this->tabControl1->Controls->Add(this->tabPageElectronics);
			this->tabControl1->Location = System::Drawing::Point(12, 27);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(626, 492);
			this->tabControl1->TabIndex = 15;
			this->tabControl1->Click += gcnew System::EventHandler(this, &ProductForm::tabControl1_Click);
			// 
			// tabPageBooks
			// 
			this->tabPageBooks->Controls->Add(this->txtYear);
			this->tabPageBooks->Controls->Add(this->txtEdition);
			this->tabPageBooks->Controls->Add(this->label9);
			this->tabPageBooks->Controls->Add(this->label10);
			this->tabPageBooks->Controls->Add(this->txtEditorial);
			this->tabPageBooks->Controls->Add(this->label8);
			this->tabPageBooks->Controls->Add(this->txtAuthor);
			this->tabPageBooks->Controls->Add(this->label7);
			this->tabPageBooks->Controls->Add(this->btnUploadPhoto);
			this->tabPageBooks->Controls->Add(this->txtTitle);
			this->tabPageBooks->Controls->Add(this->label6);
			this->tabPageBooks->Controls->Add(this->pbPhoto);
			this->tabPageBooks->Controls->Add(this->dgvBooks);
			this->tabPageBooks->Controls->Add(this->btnDelete);
			this->tabPageBooks->Controls->Add(this->txtName);
			this->tabPageBooks->Controls->Add(this->btnUpdate);
			this->tabPageBooks->Controls->Add(this->label1);
			this->tabPageBooks->Controls->Add(this->btnAdd);
			this->tabPageBooks->Controls->Add(this->label2);
			this->tabPageBooks->Controls->Add(this->txtStock);
			this->tabPageBooks->Controls->Add(this->label3);
			this->tabPageBooks->Controls->Add(this->txtPrice);
			this->tabPageBooks->Controls->Add(this->label4);
			this->tabPageBooks->Controls->Add(this->txtDescription);
			this->tabPageBooks->Controls->Add(this->label5);
			this->tabPageBooks->Controls->Add(this->txtId);
			this->tabPageBooks->Location = System::Drawing::Point(4, 22);
			this->tabPageBooks->Name = L"tabPageBooks";
			this->tabPageBooks->Padding = System::Windows::Forms::Padding(3);
			this->tabPageBooks->Size = System::Drawing::Size(618, 466);
			this->tabPageBooks->TabIndex = 0;
			this->tabPageBooks->Text = L"Libros";
			this->tabPageBooks->UseVisualStyleBackColor = true;
			// 
			// txtYear
			// 
			this->txtYear->Location = System::Drawing::Point(357, 181);
			this->txtYear->Name = L"txtYear";
			this->txtYear->Size = System::Drawing::Size(82, 20);
			this->txtYear->TabIndex = 8;
			// 
			// txtEdition
			// 
			this->txtEdition->Location = System::Drawing::Point(131, 181);
			this->txtEdition->Name = L"txtEdition";
			this->txtEdition->Size = System::Drawing::Size(138, 20);
			this->txtEdition->TabIndex = 7;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(41, 185);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(42, 13);
			this->label9->TabIndex = 22;
			this->label9->Text = L"Edición";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(295, 184);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(26, 13);
			this->label10->TabIndex = 24;
			this->label10->Text = L"Año";
			// 
			// txtEditorial
			// 
			this->txtEditorial->Location = System::Drawing::Point(131, 154);
			this->txtEditorial->Name = L"txtEditorial";
			this->txtEditorial->Size = System::Drawing::Size(308, 20);
			this->txtEditorial->TabIndex = 6;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(41, 158);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(44, 13);
			this->label8->TabIndex = 20;
			this->label8->Text = L"Editorial";
			// 
			// txtAuthor
			// 
			this->txtAuthor->Location = System::Drawing::Point(131, 127);
			this->txtAuthor->Name = L"txtAuthor";
			this->txtAuthor->Size = System::Drawing::Size(308, 20);
			this->txtAuthor->TabIndex = 5;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(42, 131);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(32, 13);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Autor";
			// 
			// btnUploadPhoto
			// 
			this->btnUploadPhoto->Enabled = false;
			this->btnUploadPhoto->Location = System::Drawing::Point(464, 182);
			this->btnUploadPhoto->Name = L"btnUploadPhoto";
			this->btnUploadPhoto->Size = System::Drawing::Size(135, 23);
			this->btnUploadPhoto->TabIndex = 11;
			this->btnUploadPhoto->Text = L"Subir imagen";
			this->btnUploadPhoto->UseVisualStyleBackColor = true;
			this->btnUploadPhoto->Click += gcnew System::EventHandler(this, &ProductForm::btnUploadPhoto_Click);
			// 
			// txtTitle
			// 
			this->txtTitle->Location = System::Drawing::Point(131, 57);
			this->txtTitle->Name = L"txtTitle";
			this->txtTitle->Size = System::Drawing::Size(308, 20);
			this->txtTitle->TabIndex = 3;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(42, 60);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(48, 13);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Título (*)";
			// 
			// pbPhoto
			// 
			this->pbPhoto->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pbPhoto->Location = System::Drawing::Point(464, 12);
			this->pbPhoto->Name = L"pbPhoto";
			this->pbPhoto->Size = System::Drawing::Size(135, 159);
			this->pbPhoto->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbPhoto->TabIndex = 14;
			this->pbPhoto->TabStop = false;
			// 
			// tabPageElectronics
			// 
			this->tabPageElectronics->Controls->Add(this->label20);
			this->tabPageElectronics->Controls->Add(this->txtWarranty);
			this->tabPageElectronics->Controls->Add(this->label11);
			this->tabPageElectronics->Controls->Add(this->txtFamily);
			this->tabPageElectronics->Controls->Add(this->label12);
			this->tabPageElectronics->Controls->Add(this->txtModel);
			this->tabPageElectronics->Controls->Add(this->label13);
			this->tabPageElectronics->Controls->Add(this->btnUploadElectronicPhoto);
			this->tabPageElectronics->Controls->Add(this->txtBrand);
			this->tabPageElectronics->Controls->Add(this->label14);
			this->tabPageElectronics->Controls->Add(this->pbElectronicPhoto);
			this->tabPageElectronics->Controls->Add(this->dgvElectronics);
			this->tabPageElectronics->Controls->Add(this->btnElectronicDelete);
			this->tabPageElectronics->Controls->Add(this->txtElectronicName);
			this->tabPageElectronics->Controls->Add(this->btnElectronicUpdate);
			this->tabPageElectronics->Controls->Add(this->label15);
			this->tabPageElectronics->Controls->Add(this->btnElectronicAdd);
			this->tabPageElectronics->Controls->Add(this->label16);
			this->tabPageElectronics->Controls->Add(this->txtElectronicStock);
			this->tabPageElectronics->Controls->Add(this->label17);
			this->tabPageElectronics->Controls->Add(this->txtElectronicPrice);
			this->tabPageElectronics->Controls->Add(this->label18);
			this->tabPageElectronics->Controls->Add(this->txtElectronicDescription);
			this->tabPageElectronics->Controls->Add(this->txtElectronicId);
			this->tabPageElectronics->Location = System::Drawing::Point(4, 22);
			this->tabPageElectronics->Name = L"tabPageElectronics";
			this->tabPageElectronics->Padding = System::Windows::Forms::Padding(3);
			this->tabPageElectronics->Size = System::Drawing::Size(618, 466);
			this->tabPageElectronics->TabIndex = 1;
			this->tabPageElectronics->Text = L"Electrónicos";
			this->tabPageElectronics->UseVisualStyleBackColor = true;
			this->tabPageElectronics->Click += gcnew System::EventHandler(this, &ProductForm::tabPageElectronics_Click);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(298, 215);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(48, 13);
			this->label20->TabIndex = 47;
			this->label20->Text = L"Stock (*)";
			// 
			// txtWarranty
			// 
			this->txtWarranty->Location = System::Drawing::Point(145, 182);
			this->txtWarranty->Name = L"txtWarranty";
			this->txtWarranty->Size = System::Drawing::Size(126, 20);
			this->txtWarranty->TabIndex = 33;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(43, 186);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(96, 13);
			this->label11->TabIndex = 46;
			this->label11->Text = L"Meses de garantía";
			// 
			// txtFamily
			// 
			this->txtFamily->Location = System::Drawing::Point(145, 155);
			this->txtFamily->Name = L"txtFamily";
			this->txtFamily->Size = System::Drawing::Size(296, 20);
			this->txtFamily->TabIndex = 32;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(43, 159);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(39, 13);
			this->label12->TabIndex = 45;
			this->label12->Text = L"Familia";
			// 
			// txtModel
			// 
			this->txtModel->Location = System::Drawing::Point(145, 128);
			this->txtModel->Name = L"txtModel";
			this->txtModel->Size = System::Drawing::Size(296, 20);
			this->txtModel->TabIndex = 31;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(44, 132);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(42, 13);
			this->label13->TabIndex = 44;
			this->label13->Text = L"Modelo";
			// 
			// btnUploadElectronicPhoto
			// 
			this->btnUploadElectronicPhoto->Enabled = false;
			this->btnUploadElectronicPhoto->Location = System::Drawing::Point(466, 166);
			this->btnUploadElectronicPhoto->Name = L"btnUploadElectronicPhoto";
			this->btnUploadElectronicPhoto->Size = System::Drawing::Size(135, 23);
			this->btnUploadElectronicPhoto->TabIndex = 37;
			this->btnUploadElectronicPhoto->Text = L"Subir imagen";
			this->btnUploadElectronicPhoto->UseVisualStyleBackColor = true;
			this->btnUploadElectronicPhoto->Click += gcnew System::EventHandler(this, &ProductForm::btnUploadElectronicPhoto_Click);
			// 
			// txtBrand
			// 
			this->txtBrand->Location = System::Drawing::Point(145, 58);
			this->txtBrand->Name = L"txtBrand";
			this->txtBrand->Size = System::Drawing::Size(296, 20);
			this->txtBrand->TabIndex = 29;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(44, 61);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(37, 13);
			this->label14->TabIndex = 42;
			this->label14->Text = L"Marca";
			// 
			// pbElectronicPhoto
			// 
			this->pbElectronicPhoto->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pbElectronicPhoto->Location = System::Drawing::Point(466, 13);
			this->pbElectronicPhoto->Name = L"pbElectronicPhoto";
			this->pbElectronicPhoto->Size = System::Drawing::Size(135, 138);
			this->pbElectronicPhoto->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbElectronicPhoto->TabIndex = 41;
			this->pbElectronicPhoto->TabStop = false;
			// 
			// dgvElectronics
			// 
			this->dgvElectronics->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvElectronics->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->brand, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4
			});
			this->dgvElectronics->Location = System::Drawing::Point(18, 280);
			this->dgvElectronics->Name = L"dgvElectronics";
			this->dgvElectronics->Size = System::Drawing::Size(583, 181);
			this->dgvElectronics->TabIndex = 43;
			this->dgvElectronics->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ProductForm::dgvElectronics_CellClick);
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"Id";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->Width = 30;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Nombre";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->Width = 230;
			// 
			// brand
			// 
			this->brand->HeaderText = L"Marca";
			this->brand->Name = L"brand";
			this->brand->Width = 140;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Precio (S/.)";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->Width = 70;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"Stock";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->Width = 70;
			// 
			// btnElectronicDelete
			// 
			this->btnElectronicDelete->Enabled = false;
			this->btnElectronicDelete->Location = System::Drawing::Point(379, 251);
			this->btnElectronicDelete->Name = L"btnElectronicDelete";
			this->btnElectronicDelete->Size = System::Drawing::Size(132, 23);
			this->btnElectronicDelete->TabIndex = 40;
			this->btnElectronicDelete->Text = L"Eliminar";
			this->btnElectronicDelete->UseVisualStyleBackColor = true;
			this->btnElectronicDelete->Click += gcnew System::EventHandler(this, &ProductForm::btnElectronicDelete_Click);
			// 
			// txtElectronicName
			// 
			this->txtElectronicName->Location = System::Drawing::Point(145, 32);
			this->txtElectronicName->Name = L"txtElectronicName";
			this->txtElectronicName->Size = System::Drawing::Size(296, 20);
			this->txtElectronicName->TabIndex = 27;
			// 
			// btnElectronicUpdate
			// 
			this->btnElectronicUpdate->Enabled = false;
			this->btnElectronicUpdate->Location = System::Drawing::Point(232, 251);
			this->btnElectronicUpdate->Name = L"btnElectronicUpdate";
			this->btnElectronicUpdate->Size = System::Drawing::Size(141, 23);
			this->btnElectronicUpdate->TabIndex = 39;
			this->btnElectronicUpdate->Text = L"Actualizar";
			this->btnElectronicUpdate->UseVisualStyleBackColor = true;
			this->btnElectronicUpdate->Click += gcnew System::EventHandler(this, &ProductForm::btnElectronicUpdate_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(44, 12);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(40, 13);
			this->label15->TabIndex = 23;
			this->label15->Text = L"Código";
			// 
			// btnElectronicAdd
			// 
			this->btnElectronicAdd->Enabled = false;
			this->btnElectronicAdd->Location = System::Drawing::Point(97, 251);
			this->btnElectronicAdd->Name = L"btnElectronicAdd";
			this->btnElectronicAdd->Size = System::Drawing::Size(129, 23);
			this->btnElectronicAdd->TabIndex = 38;
			this->btnElectronicAdd->Text = L"Agregar";
			this->btnElectronicAdd->UseVisualStyleBackColor = true;
			this->btnElectronicAdd->Click += gcnew System::EventHandler(this, &ProductForm::button4_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(43, 36);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(57, 13);
			this->label16->TabIndex = 25;
			this->label16->Text = L"Nombre (*)";
			// 
			// txtElectronicStock
			// 
			this->txtElectronicStock->Location = System::Drawing::Point(359, 211);
			this->txtElectronicStock->Name = L"txtElectronicStock";
			this->txtElectronicStock->Size = System::Drawing::Size(82, 20);
			this->txtElectronicStock->TabIndex = 36;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(44, 90);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(63, 13);
			this->label17->TabIndex = 26;
			this->label17->Text = L"Descripción";
			// 
			// txtElectronicPrice
			// 
			this->txtElectronicPrice->Location = System::Drawing::Point(145, 211);
			this->txtElectronicPrice->Name = L"txtElectronicPrice";
			this->txtElectronicPrice->Size = System::Drawing::Size(125, 20);
			this->txtElectronicPrice->TabIndex = 35;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(43, 214);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(83, 13);
			this->label18->TabIndex = 28;
			this->label18->Text = L"Precio en S/. (*)";
			// 
			// txtElectronicDescription
			// 
			this->txtElectronicDescription->Location = System::Drawing::Point(145, 85);
			this->txtElectronicDescription->Multiline = true;
			this->txtElectronicDescription->Name = L"txtElectronicDescription";
			this->txtElectronicDescription->Size = System::Drawing::Size(296, 36);
			this->txtElectronicDescription->TabIndex = 30;
			// 
			// txtElectronicId
			// 
			this->txtElectronicId->Location = System::Drawing::Point(145, 6);
			this->txtElectronicId->Name = L"txtElectronicId";
			this->txtElectronicId->ReadOnly = true;
			this->txtElectronicId->Size = System::Drawing::Size(100, 20);
			this->txtElectronicId->TabIndex = 24;
			// 
			// ProductForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(649, 523);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"ProductForm";
			this->Text = L"Productos";
			this->Load += gcnew System::EventHandler(this, &ProductForm::ProductForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvBooks))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPageBooks->ResumeLayout(false);
			this->tabPageBooks->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhoto))->EndInit();
			this->tabPageElectronics->ResumeLayout(false);
			this->tabPageElectronics->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbElectronicPhoto))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvElectronics))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void ProductForm_Load(System::Object^ sender, System::EventArgs^ e) {
		RefreshDGVProducts();
	}

	public:
		void RefreshDGVProducts() {
			if (tabPageBooks->Visible)
				RefreshDGVBooks();
			if (tabPageElectronics->Visible)
				RefreshDGVElectronics();
		}

		void RefreshDGVBooks() {
			List <Book^>^ productList = SalesManager::QueryAllBooks();
			dgvBooks->Rows->Clear();
			for (int i = 0; i < productList->Count; i++) {
				dgvBooks->Rows->Add(gcnew array<String^> {
									"" + productList[i]->Id,
										productList[i]->Title,
										productList[i]->Author,
										"" + productList[i]->Price,
										"" + productList[i]->StockTotal
									});
			}
		}

		void RefreshDGVElectronics() {
			List <Electronic^>^ productList = SalesManager::QueryAllElectronics();
			dgvElectronics->Rows->Clear();
			for (int i = 0; i < productList->Count; i++) {
				dgvElectronics->Rows->Add(gcnew array<String^> {
					"" + productList[i]->Id,
						productList[i]->Name,
						productList[i]->Brand,
						"" + productList[i]->Price,
						"" + productList[i]->StockTotal
				});
			}
		}
private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	Book^ p = gcnew Book();
	try {
		if (txtPrice->Text->Trim() == "") {
			MessageBox::Show("El precio no debe estar vacío.");
			return;
		}
		if (txtStock->Text->Trim() == "") {
			MessageBox::Show("El stock no debe estar vacío.");
			return;
		}
		p->Id = SalesManager::QueryLastProductId()+1;
		p->Name = txtName->Text;
		p->Description = txtDescription->Text;
		p->Price = Double::Parse(txtPrice->Text);
		p->StockTotal = Int32::Parse(txtStock->Text);
		p->Title = txtTitle->Text;
		p->Author = txtAuthor->Text;
		p->Editorial = txtEditorial->Text;
		p->Edition = txtEdition->Text;
		p->Year = Int32::Parse(txtYear->Text);
		p->Status = 'A';
		if (pbPhoto != nullptr && pbPhoto->Image != nullptr) {
			ImageConverter^ imgConverter = gcnew ImageConverter();
			p->Photo = (array<Byte>^) imgConverter->ConvertTo(pbPhoto->Image, Type::GetType(" array<Byte>^"));
		}
		SalesManager::AddProduct(p);
		RefreshDGVProducts();
		btnAdd->Enabled = false;
		ClearControls();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->ToString(), "Error al guardar el producto por error en los datos.");
		return;
	}
}
private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	int productId = -1;
	try {
		if (txtId->Text->Trim() == "") {
			MessageBox::Show("No se puede eliminar porque no hay ningún producto seleccionado.");
			return;
		}
		productId = Int32::Parse(txtId->Text);
	}
	catch (...) {
		MessageBox::Show("No se puede eliminar el producto porque el Id no es válido.");
		return;
	}
	if (MessageBox::Show(
		"¿Está seguro de eliminar el producto?",
		"Confirmación", MessageBoxButtons::YesNo,
		MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
	{
		SalesManager::DeleteProduct(productId);
		RefreshDGVProducts();
		ClearControls();
	}
}

private: System::Void dgvProducts_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (dgvBooks->CurrentCell != nullptr &&
		dgvBooks->CurrentCell->Value != nullptr &&
		dgvBooks->CurrentCell->Value->ToString() != "") {
		int selectedrowindex = dgvBooks->SelectedCells[0]->RowIndex;
		DataGridViewRow^ selectedRow = dgvBooks->Rows[selectedrowindex];
		String^ a = selectedRow->Cells[0]->Value->ToString();

		int productId = Int32::Parse(a);
		//Product^ p = SalesManager::QueryProductById(productId);
		Book^ p = SalesManager::QueryBookById(productId);
		txtId->Text = "" + p->Id;
		txtName->Text = p->Name;
		txtDescription->Text = p->Description;
		txtPrice->Text = "" + p->Price;
		txtStock->Text = "" + p->StockTotal;
		txtTitle->Text = p->Title;
		txtAuthor->Text = p->Author;
		txtEdition->Text = p->Edition;
		txtEditorial->Text = p->Editorial;
		txtYear->Text = "" + p->Year;

		if (p->Photo != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(p->Photo);
			pbPhoto->Image = Image::FromStream(ms);
		} else {
			pbPhoto->Image = nullptr;
			pbPhoto->Invalidate();
		}
	}

}
private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtId->Text->Trim() == "") {
		MessageBox::Show("El Id no debe estar vacío.");
		return;
	}
	if (txtPrice->Text->Trim() == "") {
		MessageBox::Show("El precio no debe estar vacío.");
		return;
	}
	if (txtStock->Text->Trim() == "") {
		MessageBox::Show("El stock no debe estar vacío.");
		return;
	}
	if (MessageBox::Show(
		"¿Está seguro de actualizar el producto?",
		"Confirmación", MessageBoxButtons::YesNo,
		MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
	{
		Book^ p = gcnew Book();
		try {
			p->Id = Int32::Parse(txtId->Text);
			p->Name = txtName->Text;
			p->Description = txtDescription->Text;
			p->Price = Double::Parse(txtPrice->Text);
			p->StockTotal = Int32::Parse(txtStock->Text);

			if (pbPhoto->Image != nullptr) {
				System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
				pbPhoto->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
				p->Photo = ms->ToArray();
			}

			p->Title = txtTitle->Text;
			p->Author = txtAuthor->Text;
			p->Edition = txtEdition->Text;
			p->Editorial = txtEditorial->Text;
			p->Year = Int32::Parse(txtYear->Text);
			p->Status = 'A';
			SalesManager::UpdateProduct(p);
			btnUpdate->Enabled = false;
			btnDelete->Enabled = false;
			btnUploadPhoto->Enabled = false;

			btnElectronicUpdate->Enabled = false;
			btnElectronicDelete->Enabled = false;
			btnUploadElectronicPhoto->Enabled = false;
			RefreshDGVProducts();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->ToString(), "Error al grabar.");
			return;
		}
	}
	else
	{
		// If 'No', do something here.
	}

}
private: System::Void nuevoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}

public:
	System::Void ClearControls()
	{
		txtId->Clear();
		txtName->Clear();
		txtDescription->Clear();
		txtPrice->Clear();
		txtStock->Clear();
		txtTitle->Clear();
		txtAuthor->Clear();
		txtEdition->Clear();
		txtEditorial->Clear();
		txtYear->Clear();

		txtElectronicId->Clear();
		txtElectronicName->Clear();
		txtElectronicDescription->Clear();
		txtElectronicPrice->Clear();
		txtElectronicStock->Clear();
		txtBrand->Clear();
		txtModel->Clear();
		txtFamily->Clear();
		txtWarranty->Clear();
	}

	Void EnableControls() {
		txtName->ReadOnly = false;
		txtPrice->ReadOnly = false;
		txtStock->ReadOnly = false;
		txtDescription->ReadOnly = false;
		btnAdd->Enabled = true;
	}
	Void EnableElectronicControls() {
		btnElectronicAdd->Enabled = true;
		btnUploadElectronicPhoto->Enabled = true;
	}
private: System::Void cerrarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void porDebajoStockMínimoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	txtId->ReadOnly = true;
	txtName->ReadOnly = true;
	txtPrice->ReadOnly = true;
	txtStock->ReadOnly = true;
	txtDescription->ReadOnly = true;
	btnAdd->Enabled = false;
	btnUpdate->Enabled = false;
	btnDelete->Enabled = false;
}
private: System::Void editToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	EnableControls();
	btnAdd->Enabled = false;
	btnUpdate->Enabled = true;
	btnDelete->Enabled = true;
	btnUploadPhoto->Enabled = true;
	btnElectronicAdd->Enabled = false;
	btnElectronicUpdate->Enabled = true;
	btnElectronicDelete->Enabled = true;
	btnUploadElectronicPhoto->Enabled = true;
}
private: System::Void btnUploadPhoto_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ opnfd = gcnew OpenFileDialog();
	opnfd->Filter = "Image Files (*.jpg;*.jpeg;)|*.jpg;*.jpeg;";
	if (opnfd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		pbPhoto->Image = gcnew Bitmap(opnfd->FileName);
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Electronic^ p = gcnew Electronic();
	try {
		if (txtElectronicPrice->Text->Trim() == "") {
			MessageBox::Show("El precio no debe estar vacío.");
			return;
		}
		if (txtElectronicStock->Text->Trim() == "") {
			MessageBox::Show("El stock no debe estar vacío.");
			return;
		}
		p->Id = SalesManager::QueryLastProductId() + 1;
		p->Name = txtElectronicName->Text;
		p->Description = txtElectronicDescription->Text;
		p->Price = Double::Parse(txtElectronicPrice->Text);
		p->StockTotal = Int32::Parse(txtElectronicStock->Text);
		p->Brand = txtBrand->Text;
		p->Family = txtFamily->Text;
		p->Model = txtModel->Text;
		p->Warranty = Int32::Parse(txtWarranty->Text);
		p->Status = 'A';
		//ImageConverter^ imgConverter = gcnew ImageConverter();
		//p->Photo = (array<Byte>^) imgConverter->ConvertTo(pbElectronicPhoto->Image, Type::GetType(" array<Byte>^"));

		if (pbPhoto != nullptr && pbPhoto->Image != nullptr) {
			ImageConverter^ imgConverter = gcnew ImageConverter();
			p->Photo = (array<Byte>^) imgConverter->ConvertTo(pbElectronicPhoto->Image, Type::GetType(" array<Byte>^"));
		}
		SalesManager::AddProduct(p);
		RefreshDGVProducts();
		btnElectronicAdd->Enabled = false;
		ClearControls();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->ToString(), "No se logró grabar.");
		return;
	}
}
private: System::Void tabControl1_Click(System::Object^ sender, System::EventArgs^ e) {
	//MessageBox::Show("Click tabControl1");
	if (tabPageElectronics->Visible) {
		RefreshDGVElectronics();
	}
	if (tabPageBooks->Visible) {
		RefreshDGVBooks();
	}	
}
private: System::Void tabPageElectronics_Click(System::Object^ sender, System::EventArgs^ e) {
	//MessageBox::Show("Click tabPageElectronics");
}
private: System::Void dgvElectronics_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (dgvElectronics->CurrentCell != nullptr &&
		dgvElectronics->CurrentCell->Value != nullptr &&
		dgvElectronics->CurrentCell->Value->ToString() != "") {
		int selectedrowindex = dgvElectronics->SelectedCells[0]->RowIndex;
		DataGridViewRow^ selectedRow = dgvElectronics->Rows[selectedrowindex];
		String^ a = selectedRow->Cells[0]->Value->ToString();

		int productId = Int32::Parse(a);
		Electronic^ p = SalesManager::QueryElectronicById(productId);
		txtElectronicId->Text = "" + p->Id;
		txtElectronicName->Text = p->Name;
		txtElectronicDescription->Text = p->Description;
		txtElectronicPrice->Text = "" + p->Price;
		txtElectronicStock->Text = "" + p->StockTotal;
		txtBrand->Text = p->Brand;
		txtModel->Text = p->Model;
		txtFamily->Text = p->Family;
		txtWarranty->Text = ""+ p->Warranty;

		if (p->Photo != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(p->Photo);
			pbElectronicPhoto->Image = Image::FromStream(ms);
		}
		else {
			pbElectronicPhoto->Image = nullptr;
			pbElectronicPhoto->Invalidate();
		}
	}
}
private: System::Void btnUploadElectronicPhoto_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ opnfd = gcnew OpenFileDialog();
	opnfd->Filter = "Image Files (*.jpg;*.jpeg;)|*.jpg;*.jpeg;";
	if (opnfd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		pbElectronicPhoto->Image = gcnew Bitmap(opnfd->FileName);
	}

}
private: System::Void btnElectronicUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtElectronicId->Text->Trim() == "") {
		MessageBox::Show("El Id no debe estar vacío.");
		return;
	}
	if (txtElectronicPrice->Text->Trim() == "") {
		MessageBox::Show("El precio no debe estar vacío.");
		return;
	}
	if (txtElectronicStock->Text->Trim() == "") {
		MessageBox::Show("El stock no debe estar vacío.");
		return;
	}
	if (MessageBox::Show(
		"¿Está seguro de actualizar el producto?",
		"Confirmación", MessageBoxButtons::YesNo,
		MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
	{
		Electronic^ p = gcnew Electronic();
		try {
			p->Id = Int32::Parse(txtElectronicId->Text);
			p->Name = txtElectronicName->Text;
			p->Description = txtElectronicDescription->Text;
			p->Price = Double::Parse(txtElectronicPrice->Text);
			p->StockTotal = Int32::Parse(txtElectronicStock->Text);

			if (pbElectronicPhoto->Image != nullptr) {
				System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
				pbElectronicPhoto->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
				p->Photo = ms->ToArray();
			}

			p->Brand = txtBrand->Text;
			p->Model = txtModel->Text;
			p->Family = txtFamily->Text;
			p->Warranty = Int32::Parse(txtWarranty->Text);
			p->Status = 'A';
			btnUpdate->Enabled = false;
			btnDelete->Enabled = false;
			btnUploadPhoto->Enabled = false;

			btnElectronicUpdate->Enabled = false;
			btnElectronicDelete->Enabled = false;
			btnUploadElectronicPhoto->Enabled = false;
			SalesManager::UpdateProduct(p);

			SalesManager::UpdateProduct(p);
			RefreshDGVProducts();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->ToString(), "Error al grabar.");
			return;
		}
	}
	else
	{
		// If 'No', do something here.
	}

}
private: System::Void btnElectronicDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtElectronicId->Text->Trim() == "") {
		MessageBox::Show("Debe elegir un producto a eliminar.");
		return;
	}

	if (MessageBox::Show(
		"¿Está seguro de eliminar el producto?",
		"Confirmación", MessageBoxButtons::YesNo,
		MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
	{
		SalesManager::DeleteProduct(Int32::Parse(txtElectronicId->Text));
		RefreshDGVElectronics();
		ClearControls();
	}

}
private: System::Void libroToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearControls();
	EnableControls();
	btnUpdate->Enabled = false;
	btnDelete->Enabled = false;

}
private: System::Void electrónicoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearControls();
	EnableElectronicControls();
	btnElectronicUpdate->Enabled = false;
	btnElectronicDelete->Enabled = false;
}
};
}
