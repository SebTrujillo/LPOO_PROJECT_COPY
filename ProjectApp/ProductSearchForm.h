#pragma once

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
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ProductName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ productType;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Company;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Stock;






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
			this->productType = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Company = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Stock = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSearchProducts))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(76, 28);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(27, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Id:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(76, 62);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(156, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre/Descripción:";
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(266, 23);
			this->txtId->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(368, 26);
			this->txtId->TabIndex = 2;
			// 
			// textNameDescription
			// 
			this->textNameDescription->Location = System::Drawing::Point(266, 57);
			this->textNameDescription->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textNameDescription->Name = L"textNameDescription";
			this->textNameDescription->Size = System::Drawing::Size(738, 26);
			this->textNameDescription->TabIndex = 3;
			// 
			// btnOk
			// 
			this->btnOk->Location = System::Drawing::Point(154, 135);
			this->btnOk->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnOk->Name = L"btnOk";
			this->btnOk->Size = System::Drawing::Size(112, 35);
			this->btnOk->TabIndex = 4;
			this->btnOk->Text = L"Buscar";
			this->btnOk->UseVisualStyleBackColor = true;
			this->btnOk->Click += gcnew System::EventHandler(this, &ProductSearchForm::btnOk_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(507, 135);
			this->btnDelete->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(112, 35);
			this->btnDelete->TabIndex = 5;
			this->btnDelete->Text = L"Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(912, 135);
			this->btnCancel->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(112, 35);
			this->btnCancel->TabIndex = 6;
			this->btnCancel->Text = L"Salir";
			this->btnCancel->UseVisualStyleBackColor = true;
			// 
			// dgvSearchProducts
			// 
			this->dgvSearchProducts->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvSearchProducts->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Id,
					this->ProductName, this->productType, this->Company, this->Stock
			});
			this->dgvSearchProducts->Location = System::Drawing::Point(51, 195);
			this->dgvSearchProducts->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->dgvSearchProducts->Name = L"dgvSearchProducts";
			this->dgvSearchProducts->RowHeadersWidth = 62;
			this->dgvSearchProducts->Size = System::Drawing::Size(1053, 391);
			this->dgvSearchProducts->TabIndex = 7;
			this->dgvSearchProducts->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ProductSearchForm::dgvSearchProducts_CellClick);
			// 
			// Id
			// 
			this->Id->HeaderText = L"Id";
			this->Id->MinimumWidth = 8;
			this->Id->Name = L"Id";
			this->Id->Width = 90;
			// 
			// ProductName
			// 
			this->ProductName->HeaderText = L"Nombre";
			this->ProductName->MinimumWidth = 8;
			this->ProductName->Name = L"ProductName";
			this->ProductName->Width = 280;
			// 
			// productType
			// 
			this->productType->HeaderText = L"Tipo de producto";
			this->productType->MinimumWidth = 8;
			this->productType->Name = L"productType";
			this->productType->Width = 150;
			// 
			// Company
			// 
			this->Company->HeaderText = L"Proveedor";
			this->Company->MinimumWidth = 8;
			this->Company->Name = L"Company";
			this->Company->Width = 200;
			// 
			// Stock
			// 
			this->Stock->HeaderText = L"Stock";
			this->Stock->MinimumWidth = 8;
			this->Stock->Name = L"Stock";
			this->Stock->Width = 90;
			// 
			// ProductSearchForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1122, 605);
			this->Controls->Add(this->dgvSearchProducts);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnOk);
			this->Controls->Add(this->textNameDescription);
			this->Controls->Add(this->txtId);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"ProductSearchForm";
			this->Text = L"Busqueda de Productos";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSearchProducts))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnOk_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtId->Text->Trim() != "") {
			//Búsqueda de producto por el código ingresado por el usuario
			Product^ p = Controller::QueryProductById(Convert::ToInt32(txtId->Text->Trim()));
			//Se borran los datos del grid.
			dgvSearchProducts->Rows->Clear();
			dgvSearchProducts->Rows->Add(gcnew array<String^> {
				"" + p->Id,
					p->Name,
					Convert::ToString(p->Price),
					Convert::ToString(p->Stock)
			});
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
						Convert::ToString(productList[i]->Price),
						Convert::ToString(productList[i]->Stock)
				});
			}
		}

	}
private: System::Void dgvSearchProducts_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);

};
}
