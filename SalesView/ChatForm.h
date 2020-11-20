#pragma once

namespace SalesView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;

	/// <summary>
	/// Resumen de StoreForm
	/// </summary>
	public ref class ChatForm : public System::Windows::Forms::Form
	{
	public:
		ChatForm(void)
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
		~ChatForm()
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

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtIP;




	private: System::Windows::Forms::TextBox^ txtMessages;
	private: System::Windows::Forms::TextBox^ txtMessage;


	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnSend;








	private: System::Windows::Forms::TextBox^ txtUser;
	private: System::Windows::Forms::Label^ label4;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ChatForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nuevoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtIP = (gcnew System::Windows::Forms::TextBox());
			this->txtMessages = (gcnew System::Windows::Forms::TextBox());
			this->txtMessage = (gcnew System::Windows::Forms::TextBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnSend = (gcnew System::Windows::Forms::Button());
			this->txtUser = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->AllowMerge = false;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->archivoToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(460, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->nuevoToolStripMenuItem,
					this->salirToolStripMenuItem
			});
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// nuevoToolStripMenuItem
			// 
			this->nuevoToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nuevoToolStripMenuItem.Image")));
			this->nuevoToolStripMenuItem->Name = L"nuevoToolStripMenuItem";
			this->nuevoToolStripMenuItem->Size = System::Drawing::Size(109, 22);
			this->nuevoToolStripMenuItem->Text = L"Nuevo";
			this->nuevoToolStripMenuItem->Click += gcnew System::EventHandler(this, &ChatForm::nuevoToolStripMenuItem_Click);
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"salirToolStripMenuItem.Image")));
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(109, 22);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &ChatForm::salirToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(20, 226);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(17, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"IP";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(20, 254);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Mensaje";
			// 
			// txtIP
			// 
			this->txtIP->Location = System::Drawing::Point(74, 223);
			this->txtIP->Name = L"txtIP";
			this->txtIP->ReadOnly = true;
			this->txtIP->Size = System::Drawing::Size(97, 20);
			this->txtIP->TabIndex = 1;
			// 
			// txtMessages
			// 
			this->txtMessages->Location = System::Drawing::Point(20, 35);
			this->txtMessages->Multiline = true;
			this->txtMessages->Name = L"txtMessages";
			this->txtMessages->ReadOnly = true;
			this->txtMessages->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->txtMessages->Size = System::Drawing::Size(428, 177);
			this->txtMessages->TabIndex = 6;
			// 
			// txtMessage
			// 
			this->txtMessage->Location = System::Drawing::Point(74, 249);
			this->txtMessage->Name = L"txtMessage";
			this->txtMessage->ReadOnly = true;
			this->txtMessage->Size = System::Drawing::Size(253, 20);
			this->txtMessage->TabIndex = 4;
			// 
			// btnAdd
			// 
			this->btnAdd->Enabled = false;
			this->btnAdd->Location = System::Drawing::Point(347, 221);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(101, 23);
			this->btnAdd->TabIndex = 3;
			this->btnAdd->Text = L"Conectar";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &ChatForm::BtnAdd_Click);
			// 
			// btnSend
			// 
			this->btnSend->Enabled = false;
			this->btnSend->Location = System::Drawing::Point(347, 249);
			this->btnSend->Name = L"btnSend";
			this->btnSend->Size = System::Drawing::Size(101, 23);
			this->btnSend->TabIndex = 5;
			this->btnSend->Text = L"Enviar";
			this->btnSend->UseVisualStyleBackColor = true;
			this->btnSend->Click += gcnew System::EventHandler(this, &ChatForm::BtnSend_Click);
			// 
			// txtUser
			// 
			this->txtUser->Location = System::Drawing::Point(212, 223);
			this->txtUser->Name = L"txtUser";
			this->txtUser->ReadOnly = true;
			this->txtUser->Size = System::Drawing::Size(115, 20);
			this->txtUser->TabIndex = 2;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(177, 226);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(29, 13);
			this->label4->TabIndex = 13;
			this->label4->Text = L"User";
			// 
			// StoreForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(460, 288);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtUser);
			this->Controls->Add(this->btnSend);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->txtMessage);
			this->Controls->Add(this->txtMessages);
			this->Controls->Add(this->txtIP);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"StoreForm";
			this->Text = L"Chat de soporte";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void nuevoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		EnableControlsToJoinServer();
	}
private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void consultasToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {

}
	   Void EnableControlsToJoinServer() {
		   txtIP->ReadOnly = false;
		   txtUser->ReadOnly = false;
		   btnAdd->Enabled = true;
		   txtMessage->ReadOnly = true;
		   btnSend->Enabled = false;
	   }
	   Void EnableControlsToSendMessage() {
		   txtIP->ReadOnly = true;
		   txtUser->ReadOnly = true;
		   btnAdd->Enabled = false;
		   txtMessage->ReadOnly = false;
		   btnSend->Enabled = true;
	   }

	private: 
		System::Void BtnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
			MessageBox::Show("Muy pronto");
		}
	
	void GetMessage(){		
	}

	void msg() {
	
	}
	private: System::Void BtnSend_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Muy pronto");
	}
};
}
