#pragma once

namespace SalesView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de GraphicsForm
	/// </summary>
	public ref class GraphicsForm : public System::Windows::Forms::Form
	{
	public:
		GraphicsForm(void)
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
		~GraphicsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pb_figure;
	protected:

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
			this->pb_figure = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_figure))->BeginInit();
			this->SuspendLayout();
			// 
			// pb_figure
			// 
			this->pb_figure->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pb_figure->Location = System::Drawing::Point(0, 0);
			this->pb_figure->Name = L"pb_figure";
			this->pb_figure->Size = System::Drawing::Size(646, 422);
			this->pb_figure->TabIndex = 0;
			this->pb_figure->TabStop = false;
			this->pb_figure->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &GraphicsForm::pb_figure_Paint);
			// 
			// GraphicsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(646, 422);
			this->Controls->Add(this->pb_figure);
			this->Name = L"GraphicsForm";
			this->Text = L"GraphicsForm";
			this->Load += gcnew System::EventHandler(this, &GraphicsForm::GraphicsForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb_figure))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void GraphicsForm_Load(System::Object^ sender, System::EventArgs^ e) {
		pb_figure->Dock = DockStyle::Fill;
		pb_figure->BackColor = Color::White;
	}

	private: System::Void pb_figure_Paint(System::Object^ sender, 
		System::Windows::Forms::PaintEventArgs^ e) {
		Graphics^ g = e->Graphics;
		g->DrawLine(System::Drawing::Pens::Black, 
			pb_figure->Left, pb_figure->Bottom/2, 
			pb_figure->Right, pb_figure->Bottom/2);
		g->DrawLine(System::Drawing::Pens::Black, pb_figure->Right/2, pb_figure->Top, pb_figure->Right/2, pb_figure->Bottom);
		g->DrawString("X", gcnew System::Drawing::Font("Arial", 10),
			System::Drawing::Brushes::Black, 0, (int)Math::Round(pb_figure->Bottom / 2));
		g->DrawString("Y", gcnew System::Drawing::Font("Arial", 10),
			System::Drawing::Brushes::Black, (int)Math::Round(pb_figure->Right / 2), 
			(int)pb_figure->Top);

		array <Point>^ arrPoints = gcnew array<Point>(5);
		//array <Point^>^ arrPoints2 = gcnew array<Point^>(5);
		arrPoints[0] = Point(0, 100);
		arrPoints[1] = Point(50, 80);
		arrPoints[2] = Point(100, 20);
		arrPoints[3] = Point(150, 80);
		arrPoints[4] = Point(200, 120);

		Color color = Color::Blue;
		Pen^ pen = gcnew Pen(color);
		//g->DrawCurve(System::Drawing::Pens::Blue, arrPoints);
		g->DrawCurve(pen, arrPoints);
		g->DrawEllipse(pen, 50, 50, 200, 200);
	}
	};
}
