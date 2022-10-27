#pragma once
#include "LoginCompany.h"

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
	private: System::Windows::Forms::Button^ btnPhoto;




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
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reporteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ consultasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ modificarInformacionToolStripMenuItem;

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
			this->productID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->productName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->productType = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->productStock = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->productPrice = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->productLearn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nuevoProductoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modificarProductoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reporteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->consultasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cmbType = (gcnew System::Windows::Forms::ComboBox());
			this->btnPhoto = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->cbxLearn = (gcnew System::Windows::Forms::CheckBox());
			this->modificarInformacionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbCompProduct))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCompProduct))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(34, 40);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ID";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(34, 69);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(34, 99);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(88, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Tipo de producto";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(34, 129);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(63, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Descripción";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(34, 182);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Stock";
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(160, 40);
			this->txtId->Margin = System::Windows::Forms::Padding(2);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(92, 20);
			this->txtId->TabIndex = 5;
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(160, 69);
			this->txtName->Margin = System::Windows::Forms::Padding(2);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(266, 20);
			this->txtName->TabIndex = 6;
			// 
			// txtDesc
			// 
			this->txtDesc->Location = System::Drawing::Point(160, 129);
			this->txtDesc->Margin = System::Windows::Forms::Padding(2);
			this->txtDesc->Multiline = true;
			this->txtDesc->Name = L"txtDesc";
			this->txtDesc->Size = System::Drawing::Size(266, 44);
			this->txtDesc->TabIndex = 8;
			// 
			// txtStock
			// 
			this->txtStock->Location = System::Drawing::Point(160, 182);
			this->txtStock->Margin = System::Windows::Forms::Padding(2);
			this->txtStock->Name = L"txtStock";
			this->txtStock->Size = System::Drawing::Size(92, 20);
			this->txtStock->TabIndex = 9;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(34, 207);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(37, 13);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Precio";
			// 
			// txtPrice
			// 
			this->txtPrice->Location = System::Drawing::Point(160, 207);
			this->txtPrice->Margin = System::Windows::Forms::Padding(2);
			this->txtPrice->Name = L"txtPrice";
			this->txtPrice->Size = System::Drawing::Size(92, 20);
			this->txtPrice->TabIndex = 11;
			// 
			// pbCompProduct
			// 
			this->pbCompProduct->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pbCompProduct->Location = System::Drawing::Point(458, 25);
			this->pbCompProduct->Margin = System::Windows::Forms::Padding(2);
			this->pbCompProduct->Name = L"pbCompProduct";
			this->pbCompProduct->Size = System::Drawing::Size(122, 145);
			this->pbCompProduct->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbCompProduct->TabIndex = 12;
			this->pbCompProduct->TabStop = false;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(37, 271);
			this->btnAdd->Margin = System::Windows::Forms::Padding(2);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(119, 26);
			this->btnAdd->TabIndex = 13;
			this->btnAdd->Text = L"Agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &CompanyProduct::btnAdd_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(253, 271);
			this->btnUpdate->Margin = System::Windows::Forms::Padding(2);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(119, 26);
			this->btnUpdate->TabIndex = 14;
			this->btnUpdate->Text = L"Modificar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &CompanyProduct::btnUpdate_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(458, 271);
			this->btnDelete->Margin = System::Windows::Forms::Padding(2);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(119, 26);
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
			this->dgvCompProduct->Location = System::Drawing::Point(37, 314);
			this->dgvCompProduct->Margin = System::Windows::Forms::Padding(2);
			this->dgvCompProduct->Name = L"dgvCompProduct";
			this->dgvCompProduct->RowHeadersWidth = 51;
			this->dgvCompProduct->RowTemplate->Height = 24;
			this->dgvCompProduct->Size = System::Drawing::Size(597, 122);
			this->dgvCompProduct->TabIndex = 16;
			this->dgvCompProduct->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CompanyProduct::dgvCompProduct_CellClick);
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
			// menuStrip1
			// 
			this->menuStrip1->AllowMerge = false;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->archivoToolStripMenuItem,
					this->reporteToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(724, 24);
			this->menuStrip1->TabIndex = 17;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->nuevoProductoToolStripMenuItem,
					this->modificarProductoToolStripMenuItem, this->modificarInformacionToolStripMenuItem, this->salirToolStripMenuItem
			});
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// nuevoProductoToolStripMenuItem
			// 
			this->nuevoProductoToolStripMenuItem->Name = L"nuevoProductoToolStripMenuItem";
			this->nuevoProductoToolStripMenuItem->Size = System::Drawing::Size(193, 22);
			this->nuevoProductoToolStripMenuItem->Text = L"Nuevo Producto";
			this->nuevoProductoToolStripMenuItem->Click += gcnew System::EventHandler(this, &CompanyProduct::nuevoProductoToolStripMenuItem_Click);
			// 
			// modificarProductoToolStripMenuItem
			// 
			this->modificarProductoToolStripMenuItem->Name = L"modificarProductoToolStripMenuItem";
			this->modificarProductoToolStripMenuItem->Size = System::Drawing::Size(193, 22);
			this->modificarProductoToolStripMenuItem->Text = L"Modificar Producto";
			this->modificarProductoToolStripMenuItem->Click += gcnew System::EventHandler(this, &CompanyProduct::modificarProductoToolStripMenuItem_Click);
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(193, 22);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &CompanyProduct::salirToolStripMenuItem_Click);
			// 
			// reporteToolStripMenuItem
			// 
			this->reporteToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->consultasToolStripMenuItem });
			this->reporteToolStripMenuItem->Name = L"reporteToolStripMenuItem";
			this->reporteToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->reporteToolStripMenuItem->Text = L"Reporte";
			// 
			// consultasToolStripMenuItem
			// 
			this->consultasToolStripMenuItem->Name = L"consultasToolStripMenuItem";
			this->consultasToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->consultasToolStripMenuItem->Text = L"Consultas";
			this->consultasToolStripMenuItem->Click += gcnew System::EventHandler(this, &CompanyProduct::consultasToolStripMenuItem_Click);
			// 
			// cmbType
			// 
			this->cmbType->FormattingEnabled = true;
			this->cmbType->Location = System::Drawing::Point(160, 99);
			this->cmbType->Margin = System::Windows::Forms::Padding(2);
			this->cmbType->Name = L"cmbType";
			this->cmbType->Size = System::Drawing::Size(141, 21);
			this->cmbType->TabIndex = 18;
			this->cmbType->SelectedIndexChanged += gcnew System::EventHandler(this, &CompanyProduct::cmbType_SelectedIndexChanged);
			// 
			// btnPhoto
			// 
			this->btnPhoto->Location = System::Drawing::Point(473, 176);
			this->btnPhoto->Margin = System::Windows::Forms::Padding(2);
			this->btnPhoto->Name = L"btnPhoto";
			this->btnPhoto->Size = System::Drawing::Size(104, 33);
			this->btnPhoto->TabIndex = 19;
			this->btnPhoto->Text = L"Agregar imagen";
			this->btnPhoto->UseVisualStyleBackColor = true;
			this->btnPhoto->Click += gcnew System::EventHandler(this, &CompanyProduct::btnPhoto_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(34, 239);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(194, 13);
			this->label7->TabIndex = 22;
			this->label7->Text = L"Producto diseñado para el aprendizaje\?";
			// 
			// cbxLearn
			// 
			this->cbxLearn->AutoSize = true;
			this->cbxLearn->Location = System::Drawing::Point(253, 239);
			this->cbxLearn->Margin = System::Windows::Forms::Padding(2);
			this->cbxLearn->Name = L"cbxLearn";
			this->cbxLearn->Size = System::Drawing::Size(35, 17);
			this->cbxLearn->TabIndex = 23;
			this->cbxLearn->Text = L"Si";
			this->cbxLearn->UseVisualStyleBackColor = true;
			// 
			// modificarInformacionToolStripMenuItem
			// 
			this->modificarInformacionToolStripMenuItem->Name = L"modificarInformacionToolStripMenuItem";
			this->modificarInformacionToolStripMenuItem->Size = System::Drawing::Size(193, 22);
			this->modificarInformacionToolStripMenuItem->Text = L"Modificar Informacion";
			// 
			// CompanyProduct
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(724, 501);
			this->Controls->Add(this->cbxLearn);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->btnPhoto);
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
			this->Margin = System::Windows::Forms::Padding(2);
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
		if (pbCompProduct != nullptr && pbCompProduct->Image != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
			pbCompProduct->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
			p->Photo = ms->ToArray();
		}
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
			   pbCompProduct->Image = nullptr;
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
		if (pbCompProduct != nullptr && pbCompProduct->Image != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
			pbCompProduct->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
			p->Photo = ms->ToArray();
		}
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
	if (p->Photo != nullptr) {
		System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(p->Photo);
		pbCompProduct->Image = Image::FromStream(ms);
	}
	else {
		pbCompProduct->Image = nullptr;
		pbCompProduct->Invalidate();
	}

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
	LoginCompany^ loginCompany = gcnew LoginCompany();
	loginCompany->ShowDialog();
	RefreshGrid();
	FillCmbStores();
	btnUpdate->Enabled = false;
	btnDelete->Enabled = false;
	btnAdd->Enabled = false;


	
}
private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void consultasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	btnUpdate->Enabled = false;
	btnDelete->Enabled = false;
	btnAdd->Enabled = false;
}
private: System::Void cmbType_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnPhoto_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ opnfd = gcnew OpenFileDialog();
	opnfd->Filter = "Image Files (*.jpg;*.jpeg;)|*.jpg;*.jpeg;";
	if (opnfd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		pbCompProduct->Image = gcnew Bitmap(opnfd->FileName);
	}

	}

};
}
