#include "SalesMainForm.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void Main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    /* Carga de los usuarios desde el archivo XML users.xml */
    SalesController::DBController::LoadUsers();
    SalesView::SalesMainForm form;
    Application::Run(% form);
}