#include "pch.h"
#include "ProductSearchForm.h"
#include "TransactionForm.h"


System::Void ProjectApp::ProductSearchForm::dgvSearchProducts_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	if (e->RowIndex < 0) return;
	if (e->RowIndex >= 0) {
		String^ productId = dgvSearchProducts->Rows[e->RowIndex]->Cells[0]->Value->ToString();
		Product^ p = Controller::QueryProductById(Int32::Parse(productId));
		((TransactionForm^)refForm)->AddProductToSalesDetails(p);
	}
	this->Close();
}
