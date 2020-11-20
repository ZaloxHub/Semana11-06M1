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
	/// Resumen de SalesmanGraphicsForm
	/// </summary>
	public ref class SalesmanGraphicsForm : public System::Windows::Forms::Form
	{
	public:
		SalesmanGraphicsForm(void)
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
		~SalesmanGraphicsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ barchartSalesmanSalary;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ piechartSalesman;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ plotchartSalesman;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartAdministrators;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ piechartAdministrators;


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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea5 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->barchartSalesmanSalary = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->piechartSalesman = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->plotchartSalesman = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chartAdministrators = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->piechartAdministrators = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->barchartSalesmanSalary))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->piechartSalesman))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->plotchartSalesman))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartAdministrators))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->piechartAdministrators))->BeginInit();
			this->SuspendLayout();
			// 
			// barchartSalesmanSalary
			// 
			chartArea1->Name = L"ChartArea1";
			this->barchartSalesmanSalary->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->barchartSalesmanSalary->Legends->Add(legend1);
			this->barchartSalesmanSalary->Location = System::Drawing::Point(12, 12);
			this->barchartSalesmanSalary->Name = L"barchartSalesmanSalary";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Salario";
			this->barchartSalesmanSalary->Series->Add(series1);
			this->barchartSalesmanSalary->Size = System::Drawing::Size(311, 212);
			this->barchartSalesmanSalary->TabIndex = 0;
			this->barchartSalesmanSalary->Text = L"chartSalesmanSalary";
			title1->Name = L"Salary";
			title1->Text = L"Salarios";
			this->barchartSalesmanSalary->Titles->Add(title1);
			// 
			// piechartSalesman
			// 
			chartArea2->Name = L"ChartArea1";
			this->piechartSalesman->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->piechartSalesman->Legends->Add(legend2);
			this->piechartSalesman->Location = System::Drawing::Point(346, 12);
			this->piechartSalesman->Name = L"piechartSalesman";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series2->Legend = L"Legend1";
			series2->Name = L"Salario";
			this->piechartSalesman->Series->Add(series2);
			this->piechartSalesman->Size = System::Drawing::Size(300, 212);
			this->piechartSalesman->TabIndex = 1;
			this->piechartSalesman->Text = L"chart1";
			title2->Name = L"Salary";
			title2->Text = L"Salarios";
			this->piechartSalesman->Titles->Add(title2);
			// 
			// plotchartSalesman
			// 
			chartArea3->Name = L"ChartArea1";
			this->plotchartSalesman->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->plotchartSalesman->Legends->Add(legend3);
			this->plotchartSalesman->Location = System::Drawing::Point(662, 12);
			this->plotchartSalesman->Name = L"plotchartSalesman";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series3->Legend = L"Legend1";
			series3->Name = L"Salario";
			this->plotchartSalesman->Series->Add(series3);
			this->plotchartSalesman->Size = System::Drawing::Size(311, 210);
			this->plotchartSalesman->TabIndex = 2;
			this->plotchartSalesman->Text = L"chart1";
			title3->Name = L"Salary";
			title3->Text = L"Salarios";
			this->plotchartSalesman->Titles->Add(title3);
			// 
			// chartAdministrators
			// 
			chartArea4->Name = L"ChartArea1";
			this->chartAdministrators->ChartAreas->Add(chartArea4);
			legend4->Name = L"Legend1";
			this->chartAdministrators->Legends->Add(legend4);
			this->chartAdministrators->Location = System::Drawing::Point(12, 236);
			this->chartAdministrators->Name = L"chartAdministrators";
			series4->ChartArea = L"ChartArea1";
			series4->Legend = L"Legend1";
			series4->Name = L"Empleados";
			this->chartAdministrators->Series->Add(series4);
			this->chartAdministrators->Size = System::Drawing::Size(300, 204);
			this->chartAdministrators->TabIndex = 3;
			this->chartAdministrators->Text = L"chart1";
			// 
			// piechartAdministrators
			// 
			chartArea5->Name = L"ChartArea1";
			this->piechartAdministrators->ChartAreas->Add(chartArea5);
			legend5->Name = L"Legend1";
			this->piechartAdministrators->Legends->Add(legend5);
			this->piechartAdministrators->Location = System::Drawing::Point(346, 236);
			this->piechartAdministrators->Name = L"piechartAdministrators";
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series5->Legend = L"Legend1";
			series5->Name = L"Empleados";
			this->piechartAdministrators->Series->Add(series5);
			this->piechartAdministrators->Size = System::Drawing::Size(300, 204);
			this->piechartAdministrators->TabIndex = 4;
			this->piechartAdministrators->Text = L"chart1";
			// 
			// SalesmanGraphicsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(999, 452);
			this->Controls->Add(this->piechartAdministrators);
			this->Controls->Add(this->chartAdministrators);
			this->Controls->Add(this->plotchartSalesman);
			this->Controls->Add(this->piechartSalesman);
			this->Controls->Add(this->barchartSalesmanSalary);
			this->Name = L"SalesmanGraphicsForm";
			this->Text = L"SalesmanGraphicsForm";
			this->Load += gcnew System::EventHandler(this, &SalesmanGraphicsForm::SalesmanGraphicsForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->barchartSalesmanSalary))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->piechartSalesman))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->plotchartSalesman))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartAdministrators))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->piechartAdministrators))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void SalesmanGraphicsForm_Load(System::Object^ sender, System::EventArgs^ e) {
		List<Administrator^>^ administratorList = SalesManager::QueryAllAdministrators();
		if (administratorList != nullptr) {
			for (int i = 0; i < administratorList->Count; i++) {
				chartAdministrators->Series["Empleados"]->Points->Add(administratorList[i]->EmployeesNumber);
				chartAdministrators->Series["Empleados"]->Points[i]->Color = Color::Blue;
				chartAdministrators->Series["Empleados"]->Points[i]->AxisLabel = administratorList[i]->FirstName;
				chartAdministrators->Series["Empleados"]->Points[i]->LegendText = administratorList[i]->FirstName;
				chartAdministrators->Series["Empleados"]->Points[i]->Label = "" + administratorList[i]->EmployeesNumber;
			}

			for (int i = 0; i < administratorList->Count; i++) {
				piechartAdministrators->Series["Empleados"]->Points->Add(administratorList[i]->EmployeesNumber);
				piechartAdministrators->Series["Empleados"]->Points[i]->AxisLabel = administratorList[i]->FirstName;
				piechartAdministrators->Series["Empleados"]->Points[i]->LegendText = administratorList[i]->FirstName;
				piechartAdministrators->Series["Empleados"]->Points[i]->Label = "" + administratorList[i]->EmployeesNumber;
			}
		}


		List<Salesman^> ^ salesmanList = SalesManager::QueryAllSalesmen();
		if (salesmanList != nullptr) {
			for (int i = 0; i < salesmanList->Count; i++) {
				//barchartSalesmanSalary->Series["Salario"]->Points->AddXY(
				//	salesmanList[i]->FirstName, "" + salesmanList[i]->Salary);
				barchartSalesmanSalary->Series["Salario"]->Points->Add(salesmanList[i]->Salary);
				barchartSalesmanSalary->Series["Salario"]->Points[i]->Color = Color::Blue;
				barchartSalesmanSalary->Series["Salario"]->Points[i]->AxisLabel = salesmanList[i]->FirstName;
				barchartSalesmanSalary->Series["Salario"]->Points[i]->LegendText = salesmanList[i]->FirstName;
				barchartSalesmanSalary->Series["Salario"]->Points[i]->Label = "" + salesmanList[i]->Salary;
			}
			for (int i = 0; i < salesmanList->Count; i++) {
				//piechartSalesman->Series["Salario"]->Points->AddXY(
				//	salesmanList[i]->FirstName, "" + salesmanList[i]->Salary);
				piechartSalesman->Series["Salario"]->Points->Add(salesmanList[i]->Salary);
				//piechartSalesman->Series["Salario"]->Points[i]->Color = Color::Blue;
				piechartSalesman->Series["Salario"]->Points[i]->AxisLabel = salesmanList[i]->FirstName;
				piechartSalesman->Series["Salario"]->Points[i]->LegendText = salesmanList[i]->FirstName;
				piechartSalesman->Series["Salario"]->Points[i]->Label = "" + salesmanList[i]->Salary;
			}
			for (int i = 0; i < salesmanList->Count; i++) {
				//plotchartSalesman->Series["Salario"]->Points->AddXY(
				//	salesmanList[i]->FirstName, "" + salesmanList[i]->Salary);
				plotchartSalesman->Series["Salario"]->Points->Add(salesmanList[i]->Salary);
				plotchartSalesman->Series["Salario"]->Points[i]->Color = Color::Blue;
				plotchartSalesman->Series["Salario"]->Points[i]->AxisLabel = salesmanList[i]->FirstName;
				plotchartSalesman->Series["Salario"]->Points[i]->LegendText = salesmanList[i]->FirstName;
				plotchartSalesman->Series["Salario"]->Points[i]->Label = "" + salesmanList[i]->Salary;
			}
		}
	}
	};
}
