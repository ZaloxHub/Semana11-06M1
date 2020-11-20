#include "ProductSearchForm.h"
#include "SaleForm.h"
#include "StoreProductForm.h"

using namespace SalesView;

System::Void ProductSearchForm::dgvProducts_CellClick(System::Object^ sender, 
						System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	
	if (e->RowIndex < 0) return;
	int selectedRow = e->RowIndex;
	if (selectedRow >= 0) {
		if (dgvProducts->Rows[selectedRow]->Cells[0] != nullptr &&
			dgvProducts->Rows[selectedRow]->Cells[0]->Value != nullptr &&
			dgvProducts->Rows[selectedRow]->Cells[0]->Value->ToString() != "") {

			dgvProducts->Rows[selectedRow]->Selected = true;
			String^ productId = dgvProducts->Rows[selectedRow]->Cells[0]->Value->ToString();
			//Product^ p = SalesManager::QueryProductById(Int32::Parse(productId));
			/*Se agrega el objeto p al grid de la ventana que lo invoca*/
			if (refForm->GetType() == SaleForm::typeid) {
				((SaleForm^)refForm)->AddProductToDetails(productList[selectedRow]);
			}
			else if (refForm->GetType() == StoreProductForm::typeid) {
				((StoreProductForm^)refForm)->AddProductToDetails(productList[selectedRow]);
			}
			/*Se agrega el objeto p al grid de la venta*/
			
			this->Close();
		}
	}
}

