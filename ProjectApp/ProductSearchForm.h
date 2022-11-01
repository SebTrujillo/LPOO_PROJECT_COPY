#pragma once

#include "ComboBoxItem.h"

namespace ProjectApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace ProjectController;
	using namespace LPOOPROJECT;

	/// <summary>
	/// Resumen de ProductSearchForm
	/// </summary>
	public ref class ProductSearchForm : public System::Windows::Forms::Form
	{
		Form^ refForm;
	public:
		ProductSearchForm(Form^ form)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			refForm = form;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ProductSearchForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtId;
	private: System::Windows::Forms::TextBox^ textNameDescription;
	private: System::Windows::Forms::Button^ btnOk;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::DataGridView^ dgvSearchProducts;









	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ cmbSellerCompany;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ cmbProductType;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ProductName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Company;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Stock;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ prodType;


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
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->textNameDescription = (gcnew System::Windows::Forms::TextBox());
			this->btnOk = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->dgvSearchProducts = (gcnew System::Windows::Forms::DataGridView());
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ProductName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Company = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Stock = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->prodType = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->cmbSellerCompany = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->cmbProductType = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSearchProducts))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(68, 22);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(21, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Id:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(68, 49);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(135, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre/Descripción:";
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(236, 18);
			this->txtId->Margin = System::Windows::Forms::Padding(4);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(328, 22);
			this->txtId->TabIndex = 2;
			// 
			// textNameDescription
			// 
			this->textNameDescription->Location = System::Drawing::Point(236, 46);
			this->textNameDescription->Margin = System::Windows::Forms::Padding(4);
			this->textNameDescription->Name = L"textNameDescription";
			this->textNameDescription->Size = System::Drawing::Size(656, 22);
			this->textNameDescription->TabIndex = 3;
			// 
			// btnOk
			// 
			this->btnOk->Location = System::Drawing::Point(136, 171);
			this->btnOk->Margin = System::Windows::Forms::Padding(4);
			this->btnOk->Name = L"btnOk";
			this->btnOk->Size = System::Drawing::Size(100, 28);
			this->btnOk->TabIndex = 4;
			this->btnOk->Text = L"Buscar";
			this->btnOk->UseVisualStyleBackColor = true;
			this->btnOk->Click += gcnew System::EventHandler(this, &ProductSearchForm::btnOk_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(448, 171);
			this->btnDelete->Margin = System::Windows::Forms::Padding(4);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(100, 28);
			this->btnDelete->TabIndex = 5;
			this->btnDelete->Text = L"Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(810, 171);
			this->btnCancel->Margin = System::Windows::Forms::Padding(4);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(100, 28);
			this->btnCancel->TabIndex = 6;
			this->btnCancel->Text = L"Salir";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &ProductSearchForm::btnCancel_Click);
			// 
			// dgvSearchProducts
			// 
			this->dgvSearchProducts->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvSearchProducts->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Id,
					this->ProductName, this->Company, this->Stock, this->prodType
			});
			this->dgvSearchProducts->Location = System::Drawing::Point(47, 207);
			this->dgvSearchProducts->Margin = System::Windows::Forms::Padding(4);
			this->dgvSearchProducts->Name = L"dgvSearchProducts";
			this->dgvSearchProducts->RowHeadersWidth = 51;
			this->dgvSearchProducts->Size = System::Drawing::Size(936, 313);
			this->dgvSearchProducts->TabIndex = 7;
			this->dgvSearchProducts->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ProductSearchForm::dgvSearchProducts_CellClick);
			// 
			// Id
			// 
			this->Id->HeaderText = L"Id";
			this->Id->MinimumWidth = 6;
			this->Id->Name = L"Id";
			this->Id->Width = 90;
			// 
			// ProductName
			// 
			this->ProductName->HeaderText = L"Nombre";
			this->ProductName->MinimumWidth = 6;
			this->ProductName->Name = L"ProductName";
			this->ProductName->Width = 180;
			// 
			// Company
			// 
			this->Company->HeaderText = L"Proveedor";
			this->Company->MinimumWidth = 6;
			this->Company->Name = L"Company";
			this->Company->Width = 200;
			// 
			// Stock
			// 
			this->Stock->HeaderText = L"Stock";
			this->Stock->MinimumWidth = 6;
			this->Stock->Name = L"Stock";
			this->Stock->Width = 90;
			// 
			// prodType
			// 
			this->prodType->HeaderText = L"Tipo de Producto";
			this->prodType->MinimumWidth = 6;
			this->prodType->Name = L"prodType";
			this->prodType->Width = 160;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(71, 88);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(137, 16);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Empresa Proveedora";
			// 
			// cmbSellerCompany
			// 
			this->cmbSellerCompany->FormattingEnabled = true;
			this->cmbSellerCompany->Location = System::Drawing::Point(236, 79);
			this->cmbSellerCompany->Name = L"cmbSellerCompany";
			this->cmbSellerCompany->Size = System::Drawing::Size(328, 24);
			this->cmbSellerCompany->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(71, 125);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(111, 16);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Tipo de Producto";
			// 
			// cmbProductType
			// 
			this->cmbProductType->FormattingEnabled = true;
			this->cmbProductType->Location = System::Drawing::Point(236, 125);
			this->cmbProductType->Name = L"cmbProductType";
			this->cmbProductType->Size = System::Drawing::Size(211, 24);
			this->cmbProductType->TabIndex = 11;
			// 
			// ProductSearchForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1028, 533);
			this->Controls->Add(this->cmbProductType);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->cmbSellerCompany);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dgvSearchProducts);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnOk);
			this->Controls->Add(this->textNameDescription);
			this->Controls->Add(this->txtId);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"ProductSearchForm";
			this->Text = L"Busqueda de Productos";
			this->Load += gcnew System::EventHandler(this, &ProductSearchForm::ProductSearchForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSearchProducts))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public:

		void ClearControls() {
			txtId->Clear();
			textNameDescription->Clear();
			cmbSellerCompany->SelectedIndex = -1;
		}

		void FillCmbSellerCompanies() {
			cmbSellerCompany->Items->Clear();
			List <SellerCompany^>^ sellerCompanyList = Controller::QueryAllSellerCompanies();
			for (int i = 0; i < sellerCompanyList->Count; i++) {
				cmbSellerCompany->Items->Add(sellerCompanyList[i]->Name);
			}
		}
		void FillCmbTypes() {
			cmbProductType->Items->Clear();
			List <String^>^ productTypeList = Controller::QueryProductTypes();
			for (int i = 0; i < productTypeList->Count; i++) {
				cmbProductType->Items->Add(productTypeList[i]);

			}
		}


	private: System::Void btnOk_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtId->Text->Trim() != "" ) {
			//Búsqueda de producto por el código ingresado por el usuario
			Product^ p = Controller::QueryProductById(Convert::ToInt32(txtId->Text->Trim()));
			//Se borran los datos del grid.
			dgvSearchProducts->Rows->Clear();
			dgvSearchProducts->Rows->Add(gcnew array<String^> {
				"" + p->Id,
					p->Name,
					p->SellerCompany->Name,
					Convert::ToString(p->Stock),
					p->Type
			});
		}
		else if (textNameDescription->Text->Trim() != "") {
			//Búsqueda de productos por el nombre o descripción ingresado por el usuario
			List<Product^>^ productList = Controller::QueryProductsByNameOrDescription(textNameDescription->Text->Trim());
			//Se borran los datos del grid.
			dgvSearchProducts->Rows->Clear();
			for (int i = 0; i < productList->Count; i++) {
				dgvSearchProducts->Rows->Add(gcnew array<String^> {
					"" + productList[i]->Id,
						productList[i]->Name,
						productList[i]->SellerCompany->Name,
						Convert::ToString(productList[i]->Stock),
						productList[i]->Type
				});
			}
		}
		else if((cmbSellerCompany->SelectedIndex) != -1) {
			//Busqueda por empresa proveedora
			List<Product^>^ productList = Controller::QueryAllProductsBySeller((cmbSellerCompany->Items[cmbSellerCompany->SelectedIndex])->ToString());
			//Se borran los datos del grid.
			dgvSearchProducts->Rows->Clear();
			for (int i = 0; i < productList->Count; i++) {
				dgvSearchProducts->Rows->Add(gcnew array<String^> {
					"" + productList[i]->Id,
						productList[i]->Name,
						productList[i]->SellerCompany->Name,
						Convert::ToString(productList[i]->Stock),
						productList[i]->Type
				});
			}
		}
		else if((cmbProductType->SelectedIndex) != -1) {
			//Busqueda por tipo de producto
			List<Product^>^ productList = Controller::QueryAllProductsByType((cmbProductType->Items[cmbProductType->SelectedIndex])->ToString());
			//Se borran los datos del grid.
			dgvSearchProducts->Rows->Clear();
			for (int i = 0; i < productList->Count; i++) {
				dgvSearchProducts->Rows->Add(gcnew array<String^> {
					"" + productList[i]->Id,
						productList[i]->Name,
						productList[i]->SellerCompany->Name,
						Convert::ToString(productList[i]->Stock),
						productList[i]->Type
				});
			}
		}

		else {
			//Búsqueda de productos por el nombre o descripción ingresado por el usuario
			List<Product^>^ productList = Controller::QueryProductsByNameOrDescription(textNameDescription->Text->Trim());
			//Se borran los datos del grid.

			dgvSearchProducts->Rows->Clear();
			for (int i = 0; i < productList->Count; i++) {
				dgvSearchProducts->Rows->Add(gcnew array<String^> {
					"" + productList[i]->Id,
						productList[i]->Name,
						productList[i]->SellerCompany->Name,
						Convert::ToString(productList[i]->Stock),
						productList[i]->Type
				});
			}

		}

	}
private: System::Void dgvSearchProducts_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void ProductSearchForm_Load(System::Object^ sender, System::EventArgs^ e) {
	ClearControls();
	FillCmbSellerCompanies();
	FillCmbTypes();
}

};
}
