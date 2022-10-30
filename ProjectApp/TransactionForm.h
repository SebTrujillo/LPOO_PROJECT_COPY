#pragma once
#include "ProductSearchForm.h"

#include "Resource.h"


namespace ProjectApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace LPOOPROJECT;


	/// <summary>
	/// Resumen de TransactionForm
	/// </summary>
	public ref class TransactionForm : public System::Windows::Forms::Form
	{
	public:
		TransactionForm(void)
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
		~TransactionForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::TextBox^ txtDate;

	private: System::Windows::Forms::TextBox^ txtCustomer;
	private: System::Windows::Forms::Button^ btnSearchCustomer;


	private: System::Windows::Forms::Button^ btnAddProduct;
	private: System::Windows::Forms::Button^ btnDeleteProduct;
	private: System::Windows::Forms::Button^ btnRegisterSale;
	private: System::Windows::Forms::DataGridView^ dgvTransaction;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtSubTotal;
	private: System::Windows::Forms::TextBox^ txtTax;


	private: System::Windows::Forms::TextBox^ txtTotal;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ productID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ productName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ productPrice;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ QuantityProducts;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ SubTotal;





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
			this->label2 = (gcnew System::Windows::Forms::Label());

			this->txtDate = (gcnew System::Windows::Forms::TextBox());
			this->txtCustomer = (gcnew System::Windows::Forms::TextBox());
			this->btnSearchCustomer = (gcnew System::Windows::Forms::Button());
			this->btnAddProduct = (gcnew System::Windows::Forms::Button());
			this->btnDeleteProduct = (gcnew System::Windows::Forms::Button());
			this->btnRegisterSale = (gcnew System::Windows::Forms::Button());
			this->dgvTransaction = (gcnew System::Windows::Forms::DataGridView());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtSubTotal = (gcnew System::Windows::Forms::TextBox());
			this->txtTax = (gcnew System::Windows::Forms::TextBox());
			this->txtTotal = (gcnew System::Windows::Forms::TextBox());
			this->productID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->productName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->productPrice = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->QuantityProducts = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->SubTotal = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvTransaction))->BeginInit();

			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;

			this->label1->Location = System::Drawing::Point(69, 17);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 20);

			this->label1->TabIndex = 0;
			this->label1->Text = L"Fecha";
			// 
			// label2
			// 
			this->label2->AutoSize = true;

			this->label2->Location = System::Drawing::Point(69, 72);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Cliente";
			// 
			// txtDate
			// 
			this->txtDate->Location = System::Drawing::Point(176, 12);
			this->txtDate->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtDate->Name = L"txtDate";
			this->txtDate->ReadOnly = true;
			this->txtDate->Size = System::Drawing::Size(349, 26);
			this->txtDate->TabIndex = 2;
			// 
			// txtCustomer
			// 
			this->txtCustomer->Location = System::Drawing::Point(176, 62);
			this->txtCustomer->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtCustomer->Name = L"txtCustomer";
			this->txtCustomer->Size = System::Drawing::Size(492, 26);
			this->txtCustomer->TabIndex = 3;
			// 
			// btnSearchCustomer
			// 
			this->btnSearchCustomer->Location = System::Drawing::Point(887, 57);
			this->btnSearchCustomer->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnSearchCustomer->Name = L"btnSearchCustomer";
			this->btnSearchCustomer->Size = System::Drawing::Size(188, 35);
			this->btnSearchCustomer->TabIndex = 4;
			this->btnSearchCustomer->Text = L"Buscar";
			this->btnSearchCustomer->UseVisualStyleBackColor = true;
			// 
			// btnAddProduct
			// 
			this->btnAddProduct->Location = System::Drawing::Point(167, 140);
			this->btnAddProduct->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnAddProduct->Name = L"btnAddProduct";
			this->btnAddProduct->Size = System::Drawing::Size(225, 35);
			this->btnAddProduct->TabIndex = 5;
			this->btnAddProduct->Text = L"Agregar producto";
			this->btnAddProduct->UseVisualStyleBackColor = true;
			this->btnAddProduct->Click += gcnew System::EventHandler(this, &TransactionForm::btnAddProduct_Click);
			// 
			// btnDeleteProduct
			// 
			this->btnDeleteProduct->Location = System::Drawing::Point(642, 140);
			this->btnDeleteProduct->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnDeleteProduct->Name = L"btnDeleteProduct";
			this->btnDeleteProduct->Size = System::Drawing::Size(260, 35);
			this->btnDeleteProduct->TabIndex = 6;
			this->btnDeleteProduct->Text = L"Eliminar Producto";
			this->btnDeleteProduct->UseVisualStyleBackColor = true;
			// 
			// btnRegisterSale
			// 
			this->btnRegisterSale->Location = System::Drawing::Point(38, 458);
			this->btnRegisterSale->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnRegisterSale->Name = L"btnRegisterSale";
			this->btnRegisterSale->Size = System::Drawing::Size(207, 42);
			this->btnRegisterSale->TabIndex = 7;
			this->btnRegisterSale->Text = L"Registrar venta";
			this->btnRegisterSale->UseVisualStyleBackColor = true;
			// 
			// dgvTransaction
			// 
			this->dgvTransaction->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvTransaction->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->productID,
					this->productName, this->productPrice, this->QuantityProducts, this->SubTotal
			});
			this->dgvTransaction->Location = System::Drawing::Point(38, 197);
			this->dgvTransaction->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->dgvTransaction->Name = L"dgvTransaction";
			this->dgvTransaction->RowHeadersWidth = 62;
			this->dgvTransaction->Size = System::Drawing::Size(1054, 158);
			this->dgvTransaction->TabIndex = 8;
			this->dgvTransaction->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &TransactionForm::dgvTransaction_CellValueChanged);

			// 
			// label3
			// 
			this->label3->AutoSize = true;

			this->label3->Location = System::Drawing::Point(650, 394);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(73, 20);

			this->label3->TabIndex = 9;
			this->label3->Text = L"SubTotal";
			// 
			// label4
			// 
			this->label4->AutoSize = true;

			this->label4->Location = System::Drawing::Point(650, 431);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(46, 20);

			this->label4->TabIndex = 10;
			this->label4->Text = L"I.G.V";
			// 
			// label5
			// 
			this->label5->AutoSize = true;

			this->label5->Location = System::Drawing::Point(650, 469);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(48, 20);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Total:";
			// 
			// txtSubTotal
			// 
			this->txtSubTotal->Location = System::Drawing::Point(754, 383);
			this->txtSubTotal->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtSubTotal->Name = L"txtSubTotal";
			this->txtSubTotal->ReadOnly = true;
			this->txtSubTotal->Size = System::Drawing::Size(148, 26);
			this->txtSubTotal->TabIndex = 12;
			// 
			// txtTax
			// 
			this->txtTax->Location = System::Drawing::Point(754, 418);
			this->txtTax->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtTax->Name = L"txtTax";
			this->txtTax->ReadOnly = true;
			this->txtTax->Size = System::Drawing::Size(148, 26);
			this->txtTax->TabIndex = 13;
			// 
			// txtTotal
			// 
			this->txtTotal->Location = System::Drawing::Point(754, 458);
			this->txtTotal->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtTotal->Name = L"txtTotal";
			this->txtTotal->ReadOnly = true;
			this->txtTotal->Size = System::Drawing::Size(148, 26);
			this->txtTotal->TabIndex = 14;
			// 
			// productID
			// 
			this->productID->HeaderText = L"Id";
			this->productID->MinimumWidth = 8;
			this->productID->Name = L"productID";
			this->productID->Width = 50;
			// 
			// productName
			// 
			this->productName->HeaderText = L"Name";
			this->productName->MinimumWidth = 8;
			this->productName->Name = L"productName";
			this->productName->Width = 220;
			// 
			// productPrice
			// 
			this->productPrice->HeaderText = L"Precio";
			this->productPrice->MinimumWidth = 8;
			this->productPrice->Name = L"productPrice";
			this->productPrice->Width = 150;
			// 
			// QuantityProducts
			// 
			this->QuantityProducts->HeaderText = L"Cantidad";
			this->QuantityProducts->MinimumWidth = 8;
			this->QuantityProducts->Name = L"QuantityProducts";
			this->QuantityProducts->Width = 105;
			// 
			// SubTotal
			// 
			this->SubTotal->HeaderText = L"SubTotal";
			this->SubTotal->MinimumWidth = 8;
			this->SubTotal->Name = L"SubTotal";
			this->SubTotal->Width = 110;
			// 
			// TransactionForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1124, 518);
			this->Controls->Add(this->txtTotal);
			this->Controls->Add(this->txtTax);
			this->Controls->Add(this->txtSubTotal);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dgvTransaction);
			this->Controls->Add(this->btnRegisterSale);
			this->Controls->Add(this->btnDeleteProduct);
			this->Controls->Add(this->btnAddProduct);
			this->Controls->Add(this->btnSearchCustomer);
			this->Controls->Add(this->txtCustomer);
			this->Controls->Add(this->txtDate);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"TransactionForm";
			this->Text = L" Venta realizada por";
			this->Load += gcnew System::EventHandler(this, &TransactionForm::TransactionForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvTransaction))->EndInit();

			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion




private: System::Void btnAddProduct_Click(System::Object^ sender, System::EventArgs^ e) {
	ProductSearchForm^ companyProductsForm = gcnew ProductSearchForm(this);
	companyProductsForm->ShowDialog();

}
	public: Void AddProductToSalesDetails(Product^ p) {
		dgvTransaction->Rows->Add(gcnew array<String^> {

			Convert::ToString(p->Id),
				p->Name,
				Convert::ToString(p->Price),
				"1",
				Convert::ToString(p->Price)
		});

		RefreshTotalAmounts();
	}

	private: Void RefreshTotalAmounts() {
		double total = 0;
		for (int i = 0; i < dgvTransaction->RowCount - 1; i++)
			total += Double::Parse(dgvTransaction->Rows[i]->Cells[4]->Value->ToString());
		txtSubTotal->Text = "" + (total * (1 - IGV));
		txtTax->Text = "" + (total * IGV);
		txtTotal->Text = "" + total;
	}


private: System::Void dgvTransaction_CellValueChanged(System::Object^ sender,
	System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (dgvTransaction->Columns[e->ColumnIndex]->Name == "QuantityProducts") {
		dgvTransaction->Rows[e->RowIndex]->Cells[4]->Value =
			Int32::Parse(dgvTransaction->CurrentCell->Value->ToString()) *
			Double::Parse(dgvTransaction->Rows[e->RowIndex]->Cells[2]->Value->ToString());
		RefreshTotalAmounts();
	}
}
private: System::Void TransactionForm_Load(System::Object^ sender, System::EventArgs^ e) {
	txtDate->Text = DateTime::Now.ToString("dd/MM/yyyy");
	//this->Text = "Venta realizada por " + Main::salesman->Name + " " + Main::salesman->LastName;

}
};
}
