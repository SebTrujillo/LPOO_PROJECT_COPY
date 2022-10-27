#pragma once

namespace ProjectApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace LPOOPROJECT;
	using namespace ProjectController;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for SellerCompanyForm
	/// </summary>
	public ref class SellerCompanyForm : public System::Windows::Forms::Form
	{
	public:
		SellerCompanyForm(void)
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
		~SellerCompanyForm()
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
	private: System::Windows::Forms::TextBox^ txtSllrID;
	private: System::Windows::Forms::TextBox^ txtSllrName;
	private: System::Windows::Forms::TextBox^ txtSllrDir;
	private: System::Windows::Forms::TextBox^ txtSllrPhone;
	private: System::Windows::Forms::TextBox^ txtSllrEmail;






	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtSllrRUC;

	private: System::Windows::Forms::DataGridView^ dgvSllr;








	private: System::Windows::Forms::Button^ btnSllrAdd;
	private: System::Windows::Forms::Button^ btnSllrDelete;
	private: System::Windows::Forms::Button^ btnSllrUpdate;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ nuevoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ editarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reporteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ consultarDatosToolStripMenuItem;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ sllrID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ sllrName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ sllrPhone;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ sllrRUC;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CompanyUserName;
	private: System::Windows::Forms::TextBox^ txtCompanyUser;
	private: System::Windows::Forms::TextBox^ txtCompanyPassword;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;







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
			this->txtSllrID = (gcnew System::Windows::Forms::TextBox());
			this->txtSllrName = (gcnew System::Windows::Forms::TextBox());
			this->txtSllrDir = (gcnew System::Windows::Forms::TextBox());
			this->txtSllrPhone = (gcnew System::Windows::Forms::TextBox());
			this->txtSllrEmail = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtSllrRUC = (gcnew System::Windows::Forms::TextBox());
			this->dgvSllr = (gcnew System::Windows::Forms::DataGridView());
			this->btnSllrAdd = (gcnew System::Windows::Forms::Button());
			this->btnSllrDelete = (gcnew System::Windows::Forms::Button());
			this->btnSllrUpdate = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nuevoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reporteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->consultarDatosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->txtCompanyUser = (gcnew System::Windows::Forms::TextBox());
			this->txtCompanyPassword = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->sllrID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->sllrName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->sllrPhone = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->sllrRUC = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CompanyUserName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSllr))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(42, 43);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(16, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Id";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(42, 74);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(88, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre Empresa";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(42, 101);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Dirección";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(42, 136);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(93, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Número de celular";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(42, 166);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(32, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Email";
			// 
			// txtSllrID
			// 
			this->txtSllrID->Location = System::Drawing::Point(207, 43);
			this->txtSllrID->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtSllrID->Name = L"txtSllrID";
			this->txtSllrID->Size = System::Drawing::Size(62, 20);
			this->txtSllrID->TabIndex = 5;
			// 
			// txtSllrName
			// 
			this->txtSllrName->Location = System::Drawing::Point(207, 74);
			this->txtSllrName->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtSllrName->Name = L"txtSllrName";
			this->txtSllrName->Size = System::Drawing::Size(243, 20);
			this->txtSllrName->TabIndex = 6;
			// 
			// txtSllrDir
			// 
			this->txtSllrDir->Location = System::Drawing::Point(207, 101);
			this->txtSllrDir->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtSllrDir->Name = L"txtSllrDir";
			this->txtSllrDir->Size = System::Drawing::Size(314, 20);
			this->txtSllrDir->TabIndex = 7;
			// 
			// txtSllrPhone
			// 
			this->txtSllrPhone->Location = System::Drawing::Point(207, 136);
			this->txtSllrPhone->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtSllrPhone->Name = L"txtSllrPhone";
			this->txtSllrPhone->Size = System::Drawing::Size(156, 20);
			this->txtSllrPhone->TabIndex = 8;
			// 
			// txtSllrEmail
			// 
			this->txtSllrEmail->Location = System::Drawing::Point(207, 166);
			this->txtSllrEmail->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtSllrEmail->Name = L"txtSllrEmail";
			this->txtSllrEmail->Size = System::Drawing::Size(226, 20);
			this->txtSllrEmail->TabIndex = 9;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(42, 197);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(30, 13);
			this->label6->TabIndex = 10;
			this->label6->Text = L"RUC";
			// 
			// txtSllrRUC
			// 
			this->txtSllrRUC->Location = System::Drawing::Point(207, 197);
			this->txtSllrRUC->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtSllrRUC->Name = L"txtSllrRUC";
			this->txtSllrRUC->Size = System::Drawing::Size(156, 20);
			this->txtSllrRUC->TabIndex = 11;
			// 
			// dgvSllr
			// 
			this->dgvSllr->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvSllr->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->sllrID, this->sllrName,
					this->sllrPhone, this->sllrRUC, this->CompanyUserName
			});
			this->dgvSllr->Location = System::Drawing::Point(27, 286);
			this->dgvSllr->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dgvSllr->Name = L"dgvSllr";
			this->dgvSllr->RowHeadersWidth = 51;
			this->dgvSllr->RowTemplate->Height = 24;
			this->dgvSllr->Size = System::Drawing::Size(884, 115);
			this->dgvSllr->TabIndex = 13;
			this->dgvSllr->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &SellerCompanyForm::dgvSllr_CellClick);
			// 
			// btnSllrAdd
			// 
			this->btnSllrAdd->Location = System::Drawing::Point(44, 240);
			this->btnSllrAdd->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnSllrAdd->Name = L"btnSllrAdd";
			this->btnSllrAdd->Size = System::Drawing::Size(137, 24);
			this->btnSllrAdd->TabIndex = 14;
			this->btnSllrAdd->Text = L"Agregar";
			this->btnSllrAdd->UseVisualStyleBackColor = true;
			this->btnSllrAdd->Click += gcnew System::EventHandler(this, &SellerCompanyForm::btnSllrAdd_Click);
			// 
			// btnSllrDelete
			// 
			this->btnSllrDelete->Location = System::Drawing::Point(726, 249);
			this->btnSllrDelete->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnSllrDelete->Name = L"btnSllrDelete";
			this->btnSllrDelete->Size = System::Drawing::Size(129, 24);
			this->btnSllrDelete->TabIndex = 15;
			this->btnSllrDelete->Text = L"Eliminar";
			this->btnSllrDelete->UseVisualStyleBackColor = true;
			this->btnSllrDelete->Click += gcnew System::EventHandler(this, &SellerCompanyForm::btnSllrDelete_Click);
			// 
			// btnSllrUpdate
			// 
			this->btnSllrUpdate->Location = System::Drawing::Point(425, 240);
			this->btnSllrUpdate->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnSllrUpdate->Name = L"btnSllrUpdate";
			this->btnSllrUpdate->Size = System::Drawing::Size(137, 24);
			this->btnSllrUpdate->TabIndex = 16;
			this->btnSllrUpdate->Text = L"Modificar";
			this->btnSllrUpdate->UseVisualStyleBackColor = true;
			this->btnSllrUpdate->Click += gcnew System::EventHandler(this, &SellerCompanyForm::btnSllrUpdate_Click);
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
			this->menuStrip1->Size = System::Drawing::Size(922, 24);
			this->menuStrip1->TabIndex = 17;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->nuevoToolStripMenuItem,
					this->editarToolStripMenuItem, this->salirToolStripMenuItem
			});
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// nuevoToolStripMenuItem
			// 
			this->nuevoToolStripMenuItem->Name = L"nuevoToolStripMenuItem";
			this->nuevoToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->nuevoToolStripMenuItem->Text = L"Nueva empresa";
			this->nuevoToolStripMenuItem->Click += gcnew System::EventHandler(this, &SellerCompanyForm::nuevoToolStripMenuItem_Click);
			// 
			// editarToolStripMenuItem
			// 
			this->editarToolStripMenuItem->Name = L"editarToolStripMenuItem";
			this->editarToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->editarToolStripMenuItem->Text = L"Editar empresa";
			this->editarToolStripMenuItem->Click += gcnew System::EventHandler(this, &SellerCompanyForm::editarToolStripMenuItem_Click);
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &SellerCompanyForm::salirToolStripMenuItem_Click);
			// 
			// reporteToolStripMenuItem
			// 
			this->reporteToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->consultarDatosToolStripMenuItem });
			this->reporteToolStripMenuItem->Name = L"reporteToolStripMenuItem";
			this->reporteToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->reporteToolStripMenuItem->Text = L"Reporte";
			// 
			// consultarDatosToolStripMenuItem
			// 
			this->consultarDatosToolStripMenuItem->Name = L"consultarDatosToolStripMenuItem";
			this->consultarDatosToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->consultarDatosToolStripMenuItem->Text = L"Consultar datos";
			this->consultarDatosToolStripMenuItem->Click += gcnew System::EventHandler(this, &SellerCompanyForm::consultarDatosToolStripMenuItem_Click);
			// 
			// txtCompanyUser
			// 
			this->txtCompanyUser->Location = System::Drawing::Point(718, 36);
			this->txtCompanyUser->Name = L"txtCompanyUser";
			this->txtCompanyUser->Size = System::Drawing::Size(137, 20);
			this->txtCompanyUser->TabIndex = 18;
			// 
			// txtCompanyPassword
			// 
			this->txtCompanyPassword->Location = System::Drawing::Point(718, 78);
			this->txtCompanyPassword->Name = L"txtCompanyPassword";
			this->txtCompanyPassword->Size = System::Drawing::Size(137, 20);
			this->txtCompanyPassword->TabIndex = 19;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(611, 43);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(43, 13);
			this->label7->TabIndex = 20;
			this->label7->Text = L"Usuario";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(611, 81);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(61, 13);
			this->label8->TabIndex = 21;
			this->label8->Text = L"Contraseña";
			// 
			// sllrID
			// 
			this->sllrID->HeaderText = L"ID";
			this->sllrID->MinimumWidth = 6;
			this->sllrID->Name = L"sllrID";
			this->sllrID->Width = 60;
			// 
			// sllrName
			// 
			this->sllrName->HeaderText = L"Nombre Empresa";
			this->sllrName->MinimumWidth = 6;
			this->sllrName->Name = L"sllrName";
			this->sllrName->Width = 250;
			// 
			// sllrPhone
			// 
			this->sllrPhone->HeaderText = L"Número Celular";
			this->sllrPhone->MinimumWidth = 6;
			this->sllrPhone->Name = L"sllrPhone";
			this->sllrPhone->Width = 150;
			// 
			// sllrRUC
			// 
			this->sllrRUC->HeaderText = L"RUC";
			this->sllrRUC->MinimumWidth = 6;
			this->sllrRUC->Name = L"sllrRUC";
			this->sllrRUC->Width = 125;
			// 
			// CompanyUserName
			// 
			this->CompanyUserName->HeaderText = L"Nombre de Usuario";
			this->CompanyUserName->Name = L"CompanyUserName";
			this->CompanyUserName->Width = 250;
			// 
			// SellerCompanyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(922, 444);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txtCompanyPassword);
			this->Controls->Add(this->txtCompanyUser);
			this->Controls->Add(this->btnSllrUpdate);
			this->Controls->Add(this->btnSllrDelete);
			this->Controls->Add(this->btnSllrAdd);
			this->Controls->Add(this->dgvSllr);
			this->Controls->Add(this->txtSllrRUC);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txtSllrEmail);
			this->Controls->Add(this->txtSllrPhone);
			this->Controls->Add(this->txtSllrDir);
			this->Controls->Add(this->txtSllrName);
			this->Controls->Add(this->txtSllrID);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"SellerCompanyForm";
			this->Text = L"SellerCompanyForm";
			this->Load += gcnew System::EventHandler(this, &SellerCompanyForm::SellerCompanyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSllr))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
	   void ClearControls() {
		   txtSllrID->Clear();
		   txtSllrDir->Clear();
		   txtSllrEmail->Clear();
		   txtSllrName->Clear();
		   txtSllrPhone->Clear();
		   txtSllrRUC->Clear();
		   txtCompanyUser->Clear();
		   txtCompanyPassword->Clear();

	   }

	   void RefreshDGVSllr() {
		   List<SellerCompany^>^ sellerCompList = Controller::QueryAllSellerCompanies();
		   dgvSllr->Rows->Clear();
		   if (sellerCompList != nullptr) {
			   for (int i = 0; i < sellerCompList->Count; i++) {
				   dgvSllr->Rows->Add(gcnew array<String^> {
					   ""+sellerCompList[i]->Id,
						   sellerCompList[i]->Name,
						  ""+ sellerCompList[i]->PhoneNumber,
						  ""+ sellerCompList[i]->RUC,
						  ""+ sellerCompList[i]->User

				   });
			   }
		   }

	   }

private: System::Void btnSllrAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	SellerCompany^ sc = gcnew SellerCompany();
	try {
		if (txtSllrID->Text->Trim() == "") {
			MessageBox::Show("El ID de la empresa vendedora no debe estar vacio");
			return;
		}
		if (txtSllrName->Text->Trim() == "") {
			MessageBox::Show("El nombre de la empresa vendedora no debe estar vacio.");
			return;
		}
		if (txtSllrDir->Text->Trim() == "") {
			MessageBox::Show("La dirección de la empresa vendedora no debe estar vacío.");
			return;
		}
		if (txtSllrPhone->Text->Trim() == "") {
			MessageBox::Show("El teléfono de la empresa vendedora no debe estar vacío.");
			return;
		}
		if (txtSllrEmail->Text->Trim() == "") {
			MessageBox::Show("El correo de la empresa vendedora no debe estar vacío.");
			return;
		}
		if (txtSllrRUC->Text->Trim() == "") {
			MessageBox::Show("El RUC de la empresa vendedora no debe estar vacío.");
			return;
		}
		if (txtCompanyUser->Text->Trim() == "") {
			MessageBox::Show("El usuario de la empresa vendedora no debe estar vacío.");
			return;
		}
		if (txtCompanyPassword->Text->Trim() == "") {
			MessageBox::Show("La contraseña de la empresa vendedora no debe estar vacío.");
			return;
		}

		
		sc->Id = Int32::Parse(txtSllrID->Text);
		sc->Name = txtSllrName->Text;
		sc->Address = txtSllrDir->Text;
		sc->PhoneNumber = txtSllrPhone->Text;
		sc->Email = txtSllrEmail->Text;
		sc->RUC = txtSllrRUC->Text;
		sc->User = txtCompanyUser->Text;
		sc->Password = txtCompanyPassword->Text;

		Controller::AddSellerCompany(sc);
		RefreshDGVSllr();
		ClearControls();

	}
	catch(Exception ^ex) {
		MessageBox::Show(ex->ToString(), "Por favor, envíe el error al área de TI.");
		return;
	}
}

private: System::Void btnSllrUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dgvSllr->CurrentCell != nullptr &&
		dgvSllr->CurrentCell->Value != nullptr &&
		dgvSllr->CurrentCell->Value->ToString() != ""&&
		!txtSllrID->Text->Trim()->Equals("")) {
		SellerCompany^ sc = gcnew SellerCompany();
		try {
			if (txtSllrID->Text->Trim() == "") {
				MessageBox::Show("El ID de la empresa vendedora no debe estar vacio");
				return;
			}
			if (txtSllrName->Text->Trim() == "") {
				MessageBox::Show("El nombre de la empresa vendedora no debe estar vacio.");
				return;
			}
			if (txtSllrDir->Text->Trim() == "") {
				MessageBox::Show("La dirección de la empresa vendedora no debe estar vacío.");
				return;
			}
			if (txtSllrPhone->Text->Trim() == "") {
				MessageBox::Show("El teléfono de la empresa vendedora no debe estar vacío.");
				return;
			}
			if (txtSllrEmail->Text->Trim() == "") {
				MessageBox::Show("El correo de la empresa vendedora no debe estar vacío.");
				return;
			}
			if (txtSllrRUC->Text->Trim() == "") {
				MessageBox::Show("El RUC de la empresa vendedora no debe estar vacío.");
				return;
			}
			if (txtCompanyUser->Text->Trim() == "") {
				MessageBox::Show("El usuario de la empresa vendedora no debe estar vacío.");
				return;
			}
			if (txtCompanyPassword->Text->Trim() == "") {
				MessageBox::Show("La contraseña de la empresa vendedora no debe estar vacío.");
				return;
			}

			sc->Id = Int32::Parse(txtSllrID->Text);
			sc->Name = txtSllrName->Text;
			sc->Address = txtSllrDir->Text;
			sc->PhoneNumber = txtSllrPhone->Text;
			sc->Email = txtSllrEmail->Text;
			sc->RUC = txtSllrRUC->Text;
			sc->User = txtCompanyUser->Text;
			sc->Password = txtCompanyPassword->Text;
			Controller::UpdateSellerCompany(sc);
			RefreshDGVSllr();
			ClearControls();

		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->ToString(), "No se guardó la empresa vendedora por error en los datos.");
			return;
		}


	}
}
private: System::Void btnSllrDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtSllrID->Text->Trim()->Equals(""))
		MessageBox::Show("Debe seleccionar una empresa vendedora.");
	else
		Controller::DeleteSellerCompany(Int32::Parse(txtSllrID->Text));
	RefreshDGVSllr();
	ClearControls();
}

private: System::Void SellerCompanyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	RefreshDGVSllr();
	btnSllrAdd->Enabled = false;
	btnSllrUpdate->Enabled = false;
	btnSllrDelete->Enabled = false;
}

private: System::Void nuevoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	btnSllrAdd->Enabled = true;
	btnSllrUpdate->Enabled = false;
	btnSllrDelete->Enabled = false;
}
private: System::Void editarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	btnSllrAdd->Enabled = false;
	btnSllrUpdate->Enabled = true;
	btnSllrDelete->Enabled = true;
}
private: System::Void consultarDatosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	btnSllrAdd->Enabled = false;
	btnSllrUpdate->Enabled = false;
	btnSllrDelete->Enabled = false;
}
private: System::Void dgvSllr_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (dgvSllr->CurrentCell != nullptr &&
		dgvSllr->CurrentCell->Value != nullptr &&
		dgvSllr->CurrentCell->Value->ToString() != "") {
		int selectedrowindex = dgvSllr->SelectedCells[0]->RowIndex;
		DataGridViewRow^ selectedRow = dgvSllr->Rows[selectedrowindex];
		String^ a = selectedRow->Cells[0]->Value->ToString();

		int salesmanId = Int32::Parse(a);
		SellerCompany^ sc = Controller::QuerySellerCompanyById(salesmanId);
		txtSllrID->Text = "" + sc->Id;
		txtSllrDir->Text = sc->Address;
		txtSllrEmail->Text = sc->Email;
		txtSllrName->Text = sc->Name;
		txtSllrPhone->Text = sc->PhoneNumber;
		txtSllrRUC->Text = sc->RUC;
		txtCompanyUser->Text = sc->User;
		txtCompanyPassword->Text = sc->Password;

	}
}
};
}
