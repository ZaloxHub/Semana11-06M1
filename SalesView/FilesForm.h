#pragma once

namespace SalesView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Resumen de FilesForm
	/// </summary>
	public ref class FilesForm : public System::Windows::Forms::Form
	{
	public:
		FilesForm(void)
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
		~FilesForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtData;
	protected:

	protected:
	private: System::Windows::Forms::Button^ btnSaveTextFile;
	private: System::Windows::Forms::Button^ btnReadTextFile;


	private: System::Windows::Forms::SaveFileDialog^ sfd;


	private: System::Windows::Forms::OpenFileDialog^ ofd;

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
			this->txtData = (gcnew System::Windows::Forms::TextBox());
			this->btnSaveTextFile = (gcnew System::Windows::Forms::Button());
			this->btnReadTextFile = (gcnew System::Windows::Forms::Button());
			this->sfd = (gcnew System::Windows::Forms::SaveFileDialog());
			this->ofd = (gcnew System::Windows::Forms::OpenFileDialog());
			this->SuspendLayout();
			// 
			// txtData
			// 
			this->txtData->Location = System::Drawing::Point(25, 18);
			this->txtData->Multiline = true;
			this->txtData->Name = L"txtData";
			this->txtData->Size = System::Drawing::Size(360, 192);
			this->txtData->TabIndex = 0;
			// 
			// btnSaveTextFile
			// 
			this->btnSaveTextFile->Location = System::Drawing::Point(25, 226);
			this->btnSaveTextFile->Name = L"btnSaveTextFile";
			this->btnSaveTextFile->Size = System::Drawing::Size(159, 23);
			this->btnSaveTextFile->TabIndex = 1;
			this->btnSaveTextFile->Text = L"Guardar texto plano";
			this->btnSaveTextFile->UseVisualStyleBackColor = true;
			this->btnSaveTextFile->Click += gcnew System::EventHandler(this, &FilesForm::btnSaveTextFile_Click);
			// 
			// btnReadTextFile
			// 
			this->btnReadTextFile->Location = System::Drawing::Point(210, 226);
			this->btnReadTextFile->Name = L"btnReadTextFile";
			this->btnReadTextFile->Size = System::Drawing::Size(175, 23);
			this->btnReadTextFile->TabIndex = 2;
			this->btnReadTextFile->Text = L"Leer texto plano";
			this->btnReadTextFile->UseVisualStyleBackColor = true;
			this->btnReadTextFile->Click += gcnew System::EventHandler(this, &FilesForm::btnSaveXMLFile_Click);
			// 
			// ofd
			// 
			this->ofd->FileName = L"ofd";
			// 
			// FilesForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(412, 261);
			this->Controls->Add(this->btnReadTextFile);
			this->Controls->Add(this->btnSaveTextFile);
			this->Controls->Add(this->txtData);
			this->Name = L"FilesForm";
			this->Text = L"Guardar y leer un archivo";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnFileChooser_Click(System::Object^ sender, System::EventArgs^ e) {
		sfd->ShowDialog();
	}

private: System::Void btnSaveTextFile_Click(System::Object^ sender, System::EventArgs^ e) {
	Stream^ myStream;
	//SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
	sfd = gcnew SaveFileDialog();

	sfd->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
	sfd->FilterIndex = 2;
	sfd->RestoreDirectory = true;

	if (sfd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		if ((myStream = sfd->OpenFile()) != nullptr)
		{
			StreamWriter^ sw = gcnew StreamWriter(myStream);
			sw->WriteLine(txtData->Text);
			sw->Close();
			myStream->Close();
		}
	}
}
private: System::Void btnSaveXMLFile_Click(System::Object^ sender, System::EventArgs^ e) {
	Stream^ myStream;
	ofd = gcnew OpenFileDialog();
	ofd->FileName = "Seleccione un archivo de texto.";
	ofd->Filter = "Archivos de texto (*.txt)|*.txt";
	ofd->Title = "Abrir un archivo de texto";

	if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		String^ fileName = ofd->FileName;
		myStream = ofd->OpenFile();
		StreamReader^ sr = gcnew StreamReader(fileName);
		txtData->Text = sr->ReadToEnd();
	}
}
};
}
