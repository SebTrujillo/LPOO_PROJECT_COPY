#pragma once

namespace ProjectApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace LPOOPROJECT;
	using namespace ProjectController;

	/// <summary>
	/// Summary for CompanyProduct
	/// </summary>
	public ref class CompanyProduct : public System::Windows::Forms::Form
	{
	public:
		CompanyProduct(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CompanyProduct()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtId;
	private: System::Windows::Forms::TextBox^ txtName;

	private: System::Windows::Forms::TextBox^ txtDesc;
	private: System::Windows::Forms::TextBox^ txtStock;





	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtPrice;
	private: System::Windows::Forms::PictureBox^ pbCompProduct;


	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::DataGridView^ dgvCompProduct;









	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ComboBox^ cmbType;

	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ToolStripMenuItem^ nuevoProductoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ modificarProductoToolStripMenuItem;

	private: System::Windows::Forms::CheckBox^ cbxLearn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ productID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ productName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ productType;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ productStock;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ productPrice;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ productLearn;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->txtDesc = (gcnew System::Windows::Forms::TextBox());
			this->txtStock = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtPrice = (gcnew System::Windows::Forms::TextBox());
			this->pbCompProduct = (gcnew System::Windows::Forms::PictureBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->dgvCompProduct = (gcnew System::Windows::Forms::DataGridView());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nuevoProductoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modificarProductoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cmbType = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->cbxLearn = (gcnew System::Windows::Forms::CheckBox());
			this->productID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->productName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->productType = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->productStock = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->productPrice = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->productLearn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbCompProduct))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCompProduct))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(46, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(20, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ID";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(46, 85);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(46, 122);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(110, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Tipo de producto";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(46, 159);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(79, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Descripción";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(46, 224);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(41, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Stock";
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(214, 49);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(121, 22);
			this->txtId->TabIndex = 5;
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(214, 85);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(354, 22);
			this->txtName->TabIndex = 6;
			// 
			// txtDesc
			// 
			this->txtDesc->Location = System::Drawing::Point(214, 159);
			this->txtDesc->Multiline = true;
			this->txtDesc->Name = L"txtDesc";
			this->txtDesc->Size = System::Drawing::Size(354, 53);
			this->txtDesc->TabIndex = 8;
			// 
			// txtStock
			// 
			this->txtStock->Location = System::Drawing::Point(214, 224);
			this->txtStock->Name = L"txtStock";
			this->txtStock->Size = System::Drawing::Size(121, 22);
			this->txtStock->TabIndex = 9;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(46, 255);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(46, 16);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Precio";
			// 
			// txtPrice
			// 
			this->txtPrice->Location = System::Drawing::Point(214, 255);
			this->txtPrice->Name = L"txtPrice";
			this->txtPrice->Size = System::Drawing::Size(121, 22);
			this->txtPrice->TabIndex = 11;
			// 
			// pbCompProduct
			// 
			this->pbCompProduct->Location = System::Drawing::Point(610, 31);
			this->pbCompProduct->Name = L"pbCompProduct";
			this->pbCompProduct->Size = System::Drawing::Size(163, 179);
			this->pbCompProduct->TabIndex = 12;
			this->pbCompProduct->TabStop = false;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(49, 333);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(159, 32);
			this->btnAdd->TabIndex = 13;
			this->btnAdd->Text = L"Agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &CompanyProduct::btnAdd_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(337, 333);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(159, 32);
			this->btnUpdate->TabIndex = 14;
			this->btnUpdate->Text = L"Modificar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &CompanyProduct::btnUpdate_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(610, 333);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(159, 32);
			this->btnDelete->TabIndex = 15;
			this->btnDelete->Text = L"Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &CompanyProduct::btnDelete_Click);
			// 
			// dgvCompProduct
			// 
			this->dgvCompProduct->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvCompProduct->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->productID,
					this->productName, this->productType, this->productStock, this->productPrice, this->productLearn
			});
			this->dgvCompProduct->Location = System::Drawing::Point(49, 387);
			this->dgvCompProduct->Name = L"dgvCompProduct";
			this->dgvCompProduct->RowHeadersWidth = 51;
			this->dgvCompProduct->RowTemplate->Height = 24;
			this->dgvCompProduct->Size = System::Drawing::Size(796, 150);
			this->dgvCompProduct->TabIndex = 16;
			this->dgvCompProduct->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CompanyProduct::dgvCompProduct_CellClick);
			// 
			// menuStrip1
			// 
			this->menuStrip1->AllowMerge = false;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->archivoToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(965, 28);
			this->menuStrip1->TabIndex = 17;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->nuevoProductoToolStripMenuItem,
					this->modificarProductoToolStripMenuItem
			});
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(73, 24);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// nuevoProductoToolStripMenuItem
			// 
			this->nuevoProductoToolStripMenuItem->Name = L"nuevoProductoToolStripMenuItem";
			this->nuevoProductoToolStripMenuItem->Size = System::Drawing::Size(220, 26);
			this->nuevoProductoToolStripMenuItem->Text = L"Nuevo Producto";
			this->nuevoProductoToolStripMenuItem->Click += gcnew System::EventHandler(this, &CompanyProduct::nuevoProductoToolStripMenuItem_Click);
			// 
			// modificarProductoToolStripMenuItem
			// 
			this->modificarProductoToolStripMenuItem->Name = L"modificarProductoToolStripMenuItem";
			this->modificarProductoToolStripMenuItem->Size = System::Drawing::Size(220, 26);
			this->modificarProductoToolStripMenuItem->Text = L"Modificar Producto";
			this->modificarProductoToolStripMenuItem->Click += gcnew System::EventHandler(this, &CompanyProduct::modificarProductoToolStripMenuItem_Click);
			// 
			// cmbType
			// 
			this->cmbType->FormattingEnabled = true;
			this->cmbType->Location = System::Drawing::Point(214, 122);
			this->cmbType->Name = L"cmbType";
			this->cmbType->Size = System::Drawing::Size(187, 24);
			this->cmbType->TabIndex = 18;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(631, 216);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(138, 41);
			this->button1->TabIndex = 19;
			this->button1->Text = L"Agregar imagen";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(46, 294);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(247, 16);
			this->label7->TabIndex = 22;
			this->label7->Text = L"Producto diseñado para el aprendizaje\?";
			// 
			// cbxLearn
			// 
			this->cbxLearn->AutoSize = true;
			this->cbxLearn->Location = System::Drawing::Point(337, 294);
			this->cbxLearn->Name = L"cbxLearn";
			this->cbxLearn->Size = System::Drawing::Size(41, 20);
			this->cbxLearn->TabIndex = 23;
			this->cbxLearn->Text = L"Si";
			this->cbxLearn->UseVisualStyleBackColor = true;
			// 
			// productID
			// 
			this->productID->HeaderText = L"ID";
			this->productID->MinimumWidth = 6;
			this->productID->Name = L"productID";
			this->productID->Width = 50;
			// 
			// productName
			// 
			this->productName->HeaderText = L"Nombre";
			this->productName->MinimumWidth = 6;
			this->productName->Name = L"productName";
			this->productName->Width = 200;
			// 
			// productType
			// 
			this->productType->HeaderText = L"Tipo";
			this->productType->MinimumWidth = 6;
			this->productType->Name = L"productType";
			this->productType->Width = 125;
			// 
			// productStock
			// 
			this->productStock->HeaderText = L"Stock";
			this->productStock->MinimumWidth = 6;
			this->productStock->Name = L"productStock";
			this->productStock->Width = 70;
			// 
			// productPrice
			// 
			this->productPrice->HeaderText = L"Precio";
			this->productPrice->MinimumWidth = 6;
			this->productPrice->Name = L"productPrice";
			this->productPrice->Width = 125;
			// 
			// productLearn
			// 
			this->productLearn->HeaderText = L"Aprendizaje";
			this->productLearn->MinimumWidth = 6;
			this->productLearn->Name = L"productLearn";
			this->productLearn->Width = 125;
			// 
			// CompanyProduct
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(965, 617);
			this->Controls->Add(this->cbxLearn);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->cmbType);
			this->Controls->Add(this->dgvCompProduct);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->pbCompProduct);
			this->Controls->Add(this->txtPrice);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txtStock);
			this->Controls->Add(this->txtDesc);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->txtId);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"CompanyProduct";
			this->Text = L"Mantenimiento de Productos";
			this->Load += gcnew System::EventHandler(this, &CompanyProduct::CompanyProduct_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbCompProduct))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCompProduct))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
		public:
			void RefreshGrid() {
				List<Product^>^ productList = Controller::QueryAllProducts();
				dgvCompProduct->Rows->Clear();
				for (int i = 0; i < productList->Count; i++) {
					dgvCompProduct->Rows->Add(gcnew array<String^>{
						"" + productList[i]->Id,
							productList[i]->Name,
							"" + productList[i]->Type,
							"" + productList[i]->Stock,
							"" + productList[i]->Price,
							productList[i]->IsLearning
					});
				}
			}

			void FillCmbStores() {
				cmbType->Items->Clear();
				List <String^>^ productTypeList = Controller::QueryProductTypes();
				for (int i = 0; i < productTypeList->Count; i++) {
					cmbType->Items->Add(productTypeList[i]);

				}
			}
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		Product^ p = gcnew Product();
		p->Id = Int32::Parse(txtId->Text);
		p->Name = txtName->Text;
		p->Description = txtDesc->Text;
		p->Price = Double::Parse(txtPrice->Text);
		p->Stock = Int32::Parse(txtStock->Text);
		p->Type = Controller::QueryTypeByName(cmbType->Items[cmbType->SelectedIndex]->ToString());
		p->IsLearning = cbxLearn->Checked ? "true" : "false";
		Controller::AddProduct(p);
		RefreshGrid();
		ClearControls();
	}
		   void ClearControls() {
			   txtId->Clear();
			   txtName->Clear();
			   txtDesc->Clear();
			   txtPrice->Clear();
			   txtStock->Clear();
		   }

	private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
		Product^ p = gcnew Product();
		p->Id = Int32::Parse(txtId->Text);
		p->Name = txtName->Text;
		p->Description = txtDesc->Text;
		p->Price = Double::Parse(txtPrice->Text);
		p->Stock = Int32::Parse(txtStock->Text);
		p->Type = Controller::QueryTypeByName(cmbType->Items[cmbType->SelectedIndex]->ToString());
		p->IsLearning = cbxLearn->Checked ? "true" : "false";
		Controller::UpdateProduct(p);
		RefreshGrid();
	}

	private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
		int productId = Int32::Parse(txtId->Text);
		Controller::DeleteProduct(productId);
		RefreshGrid();
		ClearControls();
	}








private: System::Void dgvCompProduct_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int selectedRowIndex = dgvCompProduct->SelectedCells[0]->RowIndex;
	int productId = Int32::Parse(dgvCompProduct->Rows[selectedRowIndex]->Cells[0]->Value->ToString());
	Product^ p = Controller::QueryProductById(productId);

	txtId->Text = "" + p->Id;
	txtName->Text = p->Name;
	txtDesc->Text = p->Description;

	for (int i = 0; i < cmbType->Items->Count; i++) {
		String^ cmbi = ((String^)cmbType->Items[i]);
		if (cmbi == p->Type) {
			cmbType->SelectedIndex = i;
			break;
		}


		txtPrice->Text = "" + p->Price;
		txtStock->Text = "" + p->Stock;
	}
}
private: System::Void nuevoProductoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearControls();
	btnAdd->Enabled = true;
	btnUpdate->Enabled = false;
	btnDelete->Enabled = false;

}
private: System::Void modificarProductoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	btnAdd->Enabled = false;
	btnUpdate->Enabled = true;
	btnDelete->Enabled = true;
}
	   
private: System::Void CompanyProduct_Load(System::Object^ sender, System::EventArgs^ e) {
	RefreshGrid();
	FillCmbStores();
	btnUpdate->Enabled = false;
	btnDelete->Enabled = false;
	btnAdd->Enabled = false;
	
}
};
}
