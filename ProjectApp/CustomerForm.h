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
	/// Resumen de CustomerForm
	/// </summary>
	public ref class CustomerForm : public System::Windows::Forms::Form
	{
	public:
		CustomerForm(void)
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
		~CustomerForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ agregarNuevoUsuarioToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ modificarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reporteToolStripMenuItem;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::DataGridView^ dgvNatural;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NaturalId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NaturalName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NaturalUser;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NaturalEmail;
	private: System::Windows::Forms::Button^ btnNaturalDelete;
	private: System::Windows::Forms::Button^ btnNaturalUpdate;
	private: System::Windows::Forms::Button^ btnNaturalAdd;
	private: System::Windows::Forms::TextBox^ txtNaturalUser;
	private: System::Windows::Forms::TextBox^ txtNaturalDocNumber;
	private: System::Windows::Forms::TextBox^ txtNaturalEmail;
	private: System::Windows::Forms::TextBox^ txtNaturalPassword;
	private: System::Windows::Forms::TextBox^ txtNaturalPhoneNumber;
	private: System::Windows::Forms::TextBox^ txtNaturalAddress;
	private: System::Windows::Forms::TextBox^ txtNaturalName;
	private: System::Windows::Forms::TextBox^ txtNaturalId;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::DataGridView^ dgvCompany;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CompanyId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CompanyName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CompanyUser;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CompanyRUC;
	private: System::Windows::Forms::Button^ btnCompanyDelete;
	private: System::Windows::Forms::Button^ btnCompanyUpdate;


	private: System::Windows::Forms::Button^ btnCompanyAdd;

	private: System::Windows::Forms::TextBox^ txtCompanyRUC;
	private: System::Windows::Forms::TextBox^ txtCompanyUser;
	private: System::Windows::Forms::TextBox^ txtCompanyPassword;
	private: System::Windows::Forms::TextBox^ txtCompanyWebPage;
	private: System::Windows::Forms::TextBox^ txtCompanyEmail;
	private: System::Windows::Forms::TextBox^ txtCompanyPhoneNumber;
	private: System::Windows::Forms::TextBox^ txtCompanyAddress;
	private: System::Windows::Forms::TextBox^ txtCompanyName;
	private: System::Windows::Forms::TextBox^ txtCompanyId;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::ToolStripMenuItem^ consultasToolStripMenuItem;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->agregarNuevoUsuarioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modificarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reporteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->dgvNatural = (gcnew System::Windows::Forms::DataGridView());
			this->NaturalId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NaturalName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NaturalUser = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NaturalEmail = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnNaturalDelete = (gcnew System::Windows::Forms::Button());
			this->btnNaturalUpdate = (gcnew System::Windows::Forms::Button());
			this->btnNaturalAdd = (gcnew System::Windows::Forms::Button());
			this->txtNaturalUser = (gcnew System::Windows::Forms::TextBox());
			this->txtNaturalDocNumber = (gcnew System::Windows::Forms::TextBox());
			this->txtNaturalEmail = (gcnew System::Windows::Forms::TextBox());
			this->txtNaturalPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtNaturalPhoneNumber = (gcnew System::Windows::Forms::TextBox());
			this->txtNaturalAddress = (gcnew System::Windows::Forms::TextBox());
			this->txtNaturalName = (gcnew System::Windows::Forms::TextBox());
			this->txtNaturalId = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->dgvCompany = (gcnew System::Windows::Forms::DataGridView());
			this->CompanyId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CompanyName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CompanyUser = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CompanyRUC = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnCompanyDelete = (gcnew System::Windows::Forms::Button());
			this->btnCompanyUpdate = (gcnew System::Windows::Forms::Button());
			this->btnCompanyAdd = (gcnew System::Windows::Forms::Button());
			this->txtCompanyRUC = (gcnew System::Windows::Forms::TextBox());
			this->txtCompanyUser = (gcnew System::Windows::Forms::TextBox());
			this->txtCompanyPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtCompanyWebPage = (gcnew System::Windows::Forms::TextBox());
			this->txtCompanyEmail = (gcnew System::Windows::Forms::TextBox());
			this->txtCompanyPhoneNumber = (gcnew System::Windows::Forms::TextBox());
			this->txtCompanyAddress = (gcnew System::Windows::Forms::TextBox());
			this->txtCompanyName = (gcnew System::Windows::Forms::TextBox());
			this->txtCompanyId = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->consultasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvNatural))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCompany))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->AllowMerge = false;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->archivoToolStripMenuItem,
					this->reporteToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(744, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->agregarNuevoUsuarioToolStripMenuItem,
					this->modificarToolStripMenuItem, this->salirToolStripMenuItem
			});
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// agregarNuevoUsuarioToolStripMenuItem
			// 
			this->agregarNuevoUsuarioToolStripMenuItem->Name = L"agregarNuevoUsuarioToolStripMenuItem";
			this->agregarNuevoUsuarioToolStripMenuItem->Size = System::Drawing::Size(197, 22);
			this->agregarNuevoUsuarioToolStripMenuItem->Text = L"Agregar Nuevo Usuario";
			this->agregarNuevoUsuarioToolStripMenuItem->Click += gcnew System::EventHandler(this, &CustomerForm::agregarNuevoUsuarioToolStripMenuItem_Click);
			// 
			// modificarToolStripMenuItem
			// 
			this->modificarToolStripMenuItem->Name = L"modificarToolStripMenuItem";
			this->modificarToolStripMenuItem->Size = System::Drawing::Size(197, 22);
			this->modificarToolStripMenuItem->Text = L"Modificar";
			this->modificarToolStripMenuItem->Click += gcnew System::EventHandler(this, &CustomerForm::modificarToolStripMenuItem_Click_1);
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(197, 22);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &CustomerForm::salirToolStripMenuItem_Click);
			// 
			// reporteToolStripMenuItem
			// 
			this->reporteToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->consultasToolStripMenuItem });
			this->reporteToolStripMenuItem->Name = L"reporteToolStripMenuItem";
			this->reporteToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->reporteToolStripMenuItem->Text = L"Reporte";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(0, 27);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(732, 436);
			this->tabControl1->TabIndex = 1;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->dgvNatural);
			this->tabPage1->Controls->Add(this->btnNaturalDelete);
			this->tabPage1->Controls->Add(this->btnNaturalUpdate);
			this->tabPage1->Controls->Add(this->btnNaturalAdd);
			this->tabPage1->Controls->Add(this->txtNaturalUser);
			this->tabPage1->Controls->Add(this->txtNaturalDocNumber);
			this->tabPage1->Controls->Add(this->txtNaturalEmail);
			this->tabPage1->Controls->Add(this->txtNaturalPassword);
			this->tabPage1->Controls->Add(this->txtNaturalPhoneNumber);
			this->tabPage1->Controls->Add(this->txtNaturalAddress);
			this->tabPage1->Controls->Add(this->txtNaturalName);
			this->tabPage1->Controls->Add(this->txtNaturalId);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(724, 410);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Cuenta Persoal";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// dgvNatural
			// 
			this->dgvNatural->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvNatural->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->NaturalId,
					this->NaturalName, this->NaturalUser, this->NaturalEmail
			});
			this->dgvNatural->Location = System::Drawing::Point(8, 286);
			this->dgvNatural->Name = L"dgvNatural";
			this->dgvNatural->Size = System::Drawing::Size(692, 118);
			this->dgvNatural->TabIndex = 19;
			this->dgvNatural->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CustomerForm::dgvNatural_CellClick_1);
			// 
			// NaturalId
			// 
			this->NaturalId->HeaderText = L"Id";
			this->NaturalId->Name = L"NaturalId";
			// 
			// NaturalName
			// 
			this->NaturalName->HeaderText = L"Nombre";
			this->NaturalName->Name = L"NaturalName";
			// 
			// NaturalUser
			// 
			this->NaturalUser->HeaderText = L"Usuario";
			this->NaturalUser->Name = L"NaturalUser";
			// 
			// NaturalEmail
			// 
			this->NaturalEmail->HeaderText = L"Correo";
			this->NaturalEmail->Name = L"NaturalEmail";
			// 
			// btnNaturalDelete
			// 
			this->btnNaturalDelete->Location = System::Drawing::Point(474, 246);
			this->btnNaturalDelete->Name = L"btnNaturalDelete";
			this->btnNaturalDelete->Size = System::Drawing::Size(176, 23);
			this->btnNaturalDelete->TabIndex = 18;
			this->btnNaturalDelete->Text = L"Eliminar";
			this->btnNaturalDelete->UseVisualStyleBackColor = true;
			this->btnNaturalDelete->Click += gcnew System::EventHandler(this, &CustomerForm::btnNaturalDelete_Click_1);
			// 
			// btnNaturalUpdate
			// 
			this->btnNaturalUpdate->Location = System::Drawing::Point(248, 246);
			this->btnNaturalUpdate->Name = L"btnNaturalUpdate";
			this->btnNaturalUpdate->Size = System::Drawing::Size(164, 23);
			this->btnNaturalUpdate->TabIndex = 17;
			this->btnNaturalUpdate->Text = L"Modificar";
			this->btnNaturalUpdate->UseVisualStyleBackColor = true;
			this->btnNaturalUpdate->Click += gcnew System::EventHandler(this, &CustomerForm::btnNaturalUpdate_Click_1);
			// 
			// btnNaturalAdd
			// 
			this->btnNaturalAdd->Location = System::Drawing::Point(57, 246);
			this->btnNaturalAdd->Name = L"btnNaturalAdd";
			this->btnNaturalAdd->Size = System::Drawing::Size(142, 23);
			this->btnNaturalAdd->TabIndex = 16;
			this->btnNaturalAdd->Text = L"Agregar";
			this->btnNaturalAdd->UseVisualStyleBackColor = true;
			this->btnNaturalAdd->Click += gcnew System::EventHandler(this, &CustomerForm::btnNaturalAdd_Click_1);
			// 
			// txtNaturalUser
			// 
			this->txtNaturalUser->Location = System::Drawing::Point(99, 147);
			this->txtNaturalUser->Name = L"txtNaturalUser";
			this->txtNaturalUser->Size = System::Drawing::Size(100, 20);
			this->txtNaturalUser->TabIndex = 15;
			// 
			// txtNaturalDocNumber
			// 
			this->txtNaturalDocNumber->Location = System::Drawing::Point(99, 199);
			this->txtNaturalDocNumber->Name = L"txtNaturalDocNumber";
			this->txtNaturalDocNumber->Size = System::Drawing::Size(156, 20);
			this->txtNaturalDocNumber->TabIndex = 14;
			// 
			// txtNaturalEmail
			// 
			this->txtNaturalEmail->Location = System::Drawing::Point(99, 117);
			this->txtNaturalEmail->Name = L"txtNaturalEmail";
			this->txtNaturalEmail->Size = System::Drawing::Size(100, 20);
			this->txtNaturalEmail->TabIndex = 13;
			// 
			// txtNaturalPassword
			// 
			this->txtNaturalPassword->Location = System::Drawing::Point(99, 173);
			this->txtNaturalPassword->Name = L"txtNaturalPassword";
			this->txtNaturalPassword->Size = System::Drawing::Size(140, 20);
			this->txtNaturalPassword->TabIndex = 12;
			// 
			// txtNaturalPhoneNumber
			// 
			this->txtNaturalPhoneNumber->Location = System::Drawing::Point(99, 86);
			this->txtNaturalPhoneNumber->Name = L"txtNaturalPhoneNumber";
			this->txtNaturalPhoneNumber->Size = System::Drawing::Size(100, 20);
			this->txtNaturalPhoneNumber->TabIndex = 11;
			// 
			// txtNaturalAddress
			// 
			this->txtNaturalAddress->Location = System::Drawing::Point(99, 61);
			this->txtNaturalAddress->Name = L"txtNaturalAddress";
			this->txtNaturalAddress->Size = System::Drawing::Size(100, 20);
			this->txtNaturalAddress->TabIndex = 10;
			// 
			// txtNaturalName
			// 
			this->txtNaturalName->Location = System::Drawing::Point(99, 35);
			this->txtNaturalName->Name = L"txtNaturalName";
			this->txtNaturalName->Size = System::Drawing::Size(100, 20);
			this->txtNaturalName->TabIndex = 9;
			// 
			// txtNaturalId
			// 
			this->txtNaturalId->Location = System::Drawing::Point(99, 9);
			this->txtNaturalId->Name = L"txtNaturalId";
			this->txtNaturalId->Size = System::Drawing::Size(100, 20);
			this->txtNaturalId->TabIndex = 8;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(26, 206);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(26, 13);
			this->label8->TabIndex = 7;
			this->label8->Text = L"DNI";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(26, 181);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(61, 13);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Contraseña";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(26, 154);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(29, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"User";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(26, 124);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(32, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Email";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(26, 93);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(49, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Telefono";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(26, 69);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Direccion";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(26, 44);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(26, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(16, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Id";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->dgvCompany);
			this->tabPage2->Controls->Add(this->btnCompanyDelete);
			this->tabPage2->Controls->Add(this->btnCompanyUpdate);
			this->tabPage2->Controls->Add(this->btnCompanyAdd);
			this->tabPage2->Controls->Add(this->txtCompanyRUC);
			this->tabPage2->Controls->Add(this->txtCompanyUser);
			this->tabPage2->Controls->Add(this->txtCompanyPassword);
			this->tabPage2->Controls->Add(this->txtCompanyWebPage);
			this->tabPage2->Controls->Add(this->txtCompanyEmail);
			this->tabPage2->Controls->Add(this->txtCompanyPhoneNumber);
			this->tabPage2->Controls->Add(this->txtCompanyAddress);
			this->tabPage2->Controls->Add(this->txtCompanyName);
			this->tabPage2->Controls->Add(this->txtCompanyId);
			this->tabPage2->Controls->Add(this->label17);
			this->tabPage2->Controls->Add(this->label16);
			this->tabPage2->Controls->Add(this->label15);
			this->tabPage2->Controls->Add(this->label14);
			this->tabPage2->Controls->Add(this->label13);
			this->tabPage2->Controls->Add(this->label12);
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(724, 410);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Cuenta Empresa";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// dgvCompany
			// 
			this->dgvCompany->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvCompany->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->CompanyId,
					this->CompanyName, this->CompanyUser, this->CompanyRUC
			});
			this->dgvCompany->Location = System::Drawing::Point(28, 285);
			this->dgvCompany->Name = L"dgvCompany";
			this->dgvCompany->Size = System::Drawing::Size(677, 119);
			this->dgvCompany->TabIndex = 21;
			this->dgvCompany->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CustomerForm::dgvCompany_CellClick_1);
			// 
			// CompanyId
			// 
			this->CompanyId->HeaderText = L"Id";
			this->CompanyId->Name = L"CompanyId";
			// 
			// CompanyName
			// 
			this->CompanyName->HeaderText = L"Nombre";
			this->CompanyName->Name = L"CompanyName";
			// 
			// CompanyUser
			// 
			this->CompanyUser->HeaderText = L"Usuario";
			this->CompanyUser->Name = L"CompanyUser";
			// 
			// CompanyRUC
			// 
			this->CompanyRUC->HeaderText = L"RUC";
			this->CompanyRUC->Name = L"CompanyRUC";
			// 
			// btnCompanyDelete
			// 
			this->btnCompanyDelete->Location = System::Drawing::Point(458, 256);
			this->btnCompanyDelete->Name = L"btnCompanyDelete";
			this->btnCompanyDelete->Size = System::Drawing::Size(151, 23);
			this->btnCompanyDelete->TabIndex = 20;
			this->btnCompanyDelete->Text = L"Eliminar";
			this->btnCompanyDelete->UseVisualStyleBackColor = true;
			this->btnCompanyDelete->Click += gcnew System::EventHandler(this, &CustomerForm::btnCompanyDelete_Click_1);
			// 
			// btnCompanyUpdate
			// 
			this->btnCompanyUpdate->Location = System::Drawing::Point(235, 256);
			this->btnCompanyUpdate->Name = L"btnCompanyUpdate";
			this->btnCompanyUpdate->Size = System::Drawing::Size(162, 23);
			this->btnCompanyUpdate->TabIndex = 19;
			this->btnCompanyUpdate->Text = L"Modificar";
			this->btnCompanyUpdate->UseVisualStyleBackColor = true;
			this->btnCompanyUpdate->Click += gcnew System::EventHandler(this, &CustomerForm::btnCompanyUpdate_Click_1);
			// 
			// btnCompanyAdd
			// 
			this->btnCompanyAdd->Location = System::Drawing::Point(54, 256);
			this->btnCompanyAdd->Name = L"btnCompanyAdd";
			this->btnCompanyAdd->Size = System::Drawing::Size(123, 23);
			this->btnCompanyAdd->TabIndex = 18;
			this->btnCompanyAdd->Text = L"Agregar";
			this->btnCompanyAdd->UseVisualStyleBackColor = true;
			this->btnCompanyAdd->Click += gcnew System::EventHandler(this, &CustomerForm::btnCompanyAdd_Click_1);
			// 
			// txtCompanyRUC
			// 
			this->txtCompanyRUC->Location = System::Drawing::Point(102, 219);
			this->txtCompanyRUC->Name = L"txtCompanyRUC";
			this->txtCompanyRUC->Size = System::Drawing::Size(100, 20);
			this->txtCompanyRUC->TabIndex = 17;
			// 
			// txtCompanyUser
			// 
			this->txtCompanyUser->Location = System::Drawing::Point(96, 133);
			this->txtCompanyUser->Name = L"txtCompanyUser";
			this->txtCompanyUser->Size = System::Drawing::Size(100, 20);
			this->txtCompanyUser->TabIndex = 16;
			// 
			// txtCompanyPassword
			// 
			this->txtCompanyPassword->Location = System::Drawing::Point(96, 160);
			this->txtCompanyPassword->Name = L"txtCompanyPassword";
			this->txtCompanyPassword->Size = System::Drawing::Size(100, 20);
			this->txtCompanyPassword->TabIndex = 15;
			// 
			// txtCompanyWebPage
			// 
			this->txtCompanyWebPage->Location = System::Drawing::Point(102, 188);
			this->txtCompanyWebPage->Name = L"txtCompanyWebPage";
			this->txtCompanyWebPage->Size = System::Drawing::Size(99, 20);
			this->txtCompanyWebPage->TabIndex = 14;
			// 
			// txtCompanyEmail
			// 
			this->txtCompanyEmail->Location = System::Drawing::Point(96, 108);
			this->txtCompanyEmail->Name = L"txtCompanyEmail";
			this->txtCompanyEmail->Size = System::Drawing::Size(100, 20);
			this->txtCompanyEmail->TabIndex = 13;
			// 
			// txtCompanyPhoneNumber
			// 
			this->txtCompanyPhoneNumber->Location = System::Drawing::Point(96, 84);
			this->txtCompanyPhoneNumber->Name = L"txtCompanyPhoneNumber";
			this->txtCompanyPhoneNumber->Size = System::Drawing::Size(100, 20);
			this->txtCompanyPhoneNumber->TabIndex = 12;
			// 
			// txtCompanyAddress
			// 
			this->txtCompanyAddress->Location = System::Drawing::Point(96, 60);
			this->txtCompanyAddress->Name = L"txtCompanyAddress";
			this->txtCompanyAddress->Size = System::Drawing::Size(100, 20);
			this->txtCompanyAddress->TabIndex = 11;
			// 
			// txtCompanyName
			// 
			this->txtCompanyName->Location = System::Drawing::Point(96, 34);
			this->txtCompanyName->Name = L"txtCompanyName";
			this->txtCompanyName->Size = System::Drawing::Size(100, 20);
			this->txtCompanyName->TabIndex = 10;
			// 
			// txtCompanyId
			// 
			this->txtCompanyId->Location = System::Drawing::Point(96, 8);
			this->txtCompanyId->Name = L"txtCompanyId";
			this->txtCompanyId->Size = System::Drawing::Size(100, 20);
			this->txtCompanyId->TabIndex = 9;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(30, 222);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(30, 13);
			this->label17->TabIndex = 8;
			this->label17->Text = L"RUC";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(30, 195);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(66, 13);
			this->label16->TabIndex = 7;
			this->label16->Text = L"Pagina Web";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(29, 163);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(61, 13);
			this->label15->TabIndex = 6;
			this->label15->Text = L"Contraseña";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(29, 140);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(43, 13);
			this->label14->TabIndex = 5;
			this->label14->Text = L"Usuario";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(27, 115);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(38, 13);
			this->label13->TabIndex = 4;
			this->label13->Text = L"Correo";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(26, 91);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(54, 13);
			this->label12->TabIndex = 3;
			this->label12->Text = L"Telefonos";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(26, 66);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(52, 13);
			this->label11->TabIndex = 2;
			this->label11->Text = L"Direccion";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(26, 41);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(44, 13);
			this->label10->TabIndex = 1;
			this->label10->Text = L"Nombre";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(25, 13);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(16, 13);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Id";
			// 
			// consultasToolStripMenuItem
			// 
			this->consultasToolStripMenuItem->Name = L"consultasToolStripMenuItem";
			this->consultasToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->consultasToolStripMenuItem->Text = L"Consultas";
			this->consultasToolStripMenuItem->Click += gcnew System::EventHandler(this, &CustomerForm::consultasToolStripMenuItem_Click_1);
			// 
			// CustomerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(744, 475);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"CustomerForm";
			this->Text = L"CustomerForm";
			this->Load += gcnew System::EventHandler(this, &CustomerForm::CustomerForm_Load_1);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvNatural))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCompany))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public:
			void RefreshGridNatural() {
				List<Natural^>^ naturalList = Controller::QueryAllCustomerNaturals();
				dgvNatural->Rows->Clear();
				for (int i = 0; i < naturalList->Count; i++) {
					dgvNatural->Rows->Add(gcnew array<String^>{
						"" + naturalList[i]->Id,
							naturalList[i]->Name,
							naturalList[i]->User,
							naturalList[i]->Email,


					});
				}
			}
			void RefreshGridCompany() {
				List<Company^>^ customerCompanyList = Controller::QueryAllCustomerCompanies();
				dgvCompany->Rows->Clear();
				for (int i = 0; i < customerCompanyList->Count; i++) {
					dgvCompany->Rows->Add(gcnew array<String^>{
						"" + customerCompanyList[i]->Id,
							customerCompanyList[i]->Name,
							customerCompanyList[i]->User,
							customerCompanyList[i]->RUC,


					});
				}
			}
			void ClearControlsNatural() {
				txtNaturalId->Clear();
				txtNaturalName->Clear();
				txtNaturalAddress->Clear();
				txtNaturalDocNumber->Clear();
				txtNaturalEmail->Clear();
				txtNaturalPassword->Clear();
				txtNaturalPhoneNumber->Clear();
				txtNaturalUser->Clear();
			}
			void ClearControlsCompanies() {
				txtCompanyId->Clear();
				txtCompanyName->Clear();
				txtCompanyAddress->Clear();
				txtCompanyRUC->Clear();
				txtCompanyEmail->Clear();
				txtCompanyPassword->Clear();
				txtCompanyPhoneNumber->Clear();
				txtCompanyWebPage->Clear();
				txtCompanyUser->Clear();
			}


	private: System::Void CustomerForm_Load(System::Object^ sender, System::EventArgs^ e) {
		RefreshGridNatural();
		RefreshGridCompany();
		btnCompanyAdd->Enabled = false;
		btnNaturalAdd->Enabled = false;
		btnNaturalDelete->Enabled = false;
		btnNaturalUpdate->Enabled = false;
		btnCompanyDelete->Enabled = false;
		btnCompanyUpdate->Enabled = false;
	}
	private: System::Void btnNaturalAdd_Click_1(System::Object^ sender, System::EventArgs^ e) {
		Natural^ p = gcnew Natural();
		p->Id = Int32::Parse(txtNaturalId->Text);
		p->Name = txtNaturalName->Text;
		p->Address = txtNaturalAddress->Text;
		p->PhoneNumber = txtNaturalPhoneNumber->Text;
		p->Email = txtNaturalEmail->Text;
		p->User = txtNaturalUser->Text;
		p->Password = txtNaturalPassword->Text;
		p->DocNumber = txtNaturalDocNumber->Text;

		Controller::AddCustomerNatural(p);
		RefreshGridNatural();
		ClearControlsNatural();
	}
private: System::Void btnNaturalUpdate_Click_1(System::Object^ sender, System::EventArgs^ e) {
	Natural^ p = gcnew Natural();
	p->Id = Int32::Parse(txtNaturalId->Text);
	p->Name = txtNaturalName->Text;
	p->Address = txtNaturalAddress->Text;
	p->PhoneNumber = txtNaturalPhoneNumber->Text;
	p->Email = txtNaturalEmail->Text;
	p->User = txtNaturalUser->Text;
	p->Password = txtNaturalPassword->Text;
	p->DocNumber = txtNaturalDocNumber->Text;


	Controller::UpdateCustomerNatural(p);
	RefreshGridNatural();
	ClearControlsNatural();
}
private: System::Void btnNaturalDelete_Click_1(System::Object^ sender, System::EventArgs^ e) {
	int naturalId = Int32::Parse(txtNaturalId->Text);
	Controller::DeleteCustomerNatural(naturalId);
	RefreshGridNatural();
	ClearControlsNatural();
}

private: System::Void btnCompanyAdd_Click_1(System::Object^ sender, System::EventArgs^ e) {
	Company^ p = gcnew Company();
	p->Id = Int32::Parse(txtCompanyId->Text);
	p->Name = txtCompanyName->Text;
	p->Address = txtCompanyAddress->Text;
	p->PhoneNumber = txtCompanyPhoneNumber->Text;
	p->Email = txtCompanyEmail->Text;
	p->User = txtCompanyUser->Text;
	p->Password = txtCompanyPassword->Text;
	p->WebPage = txtCompanyWebPage->Text;
	p->RUC = txtCompanyRUC->Text;

	Controller::AddCustomerCompany(p);
	RefreshGridCompany();
	ClearControlsCompanies();
}
private: System::Void btnCompanyUpdate_Click_1(System::Object^ sender, System::EventArgs^ e) {
	Company^ p = gcnew Company();
	p->Id = Int32::Parse(txtCompanyId->Text);
	p->Name = txtCompanyName->Text;
	p->Address = txtCompanyAddress->Text;
	p->PhoneNumber = txtCompanyPhoneNumber->Text;
	p->Email = txtCompanyEmail->Text;
	p->User = txtCompanyUser->Text;
	p->Password = txtCompanyPassword->Text;
	p->WebPage = txtCompanyWebPage->Text;
	p->RUC = txtCompanyRUC->Text;

	Controller::UpdateCustomerCompany(p);
	RefreshGridCompany();
	ClearControlsCompanies();
}
private: System::Void btnCompanyDelete_Click_1(System::Object^ sender, System::EventArgs^ e) {

	int customerCompanyId = Int32::Parse(txtCompanyId->Text);
	Controller::DeleteCustomerCompany(customerCompanyId);
	RefreshGridCompany();
	ClearControlsCompanies();
}
private: System::Void dgvNatural_CellClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (dgvNatural->CurrentCell != nullptr &&
		dgvNatural->CurrentCell->Value != nullptr &&
		dgvNatural->CurrentCell->Value->ToString() != "") {
		int selectedRowIndex = dgvNatural->SelectedCells[0]->RowIndex;
		int naturalId = Int32::Parse(dgvNatural->Rows[selectedRowIndex]->Cells[0]->Value->ToString());
		Natural^ n = Controller::QueryCustomerNaturalById(naturalId);
		txtNaturalId->Text = "" + n->Id;
		txtNaturalName->Text = n->Name;
		txtNaturalAddress->Text = n->Address;
		txtNaturalDocNumber->Text = n->DocNumber;
		txtNaturalEmail->Text = n->Email;
		txtNaturalPassword->Text = n->Password;
		txtNaturalPhoneNumber->Text = n->PhoneNumber;
		txtNaturalUser->Text = n->User;
	}


}
private: System::Void dgvCompany_CellClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (dgvCompany->CurrentCell != nullptr &&
		dgvCompany->CurrentCell->Value != nullptr &&
		dgvCompany->CurrentCell->Value->ToString() != "") {
		int selectedRowIndex = dgvCompany->SelectedCells[0]->RowIndex;
		int naturalId = Int32::Parse(dgvCompany->Rows[selectedRowIndex]->Cells[0]->Value->ToString());
		Company^ n = Controller::QueryCustomerCompanyById(naturalId);
		txtCompanyId->Text = "" + n->Id;
		txtCompanyName->Text = n->Name;
		txtCompanyAddress->Text = n->Address;
		txtCompanyRUC->Text = n->RUC;
		txtCompanyEmail->Text = n->Email;
		txtCompanyPassword->Text = n->Password;
		txtCompanyPhoneNumber->Text = n->PhoneNumber;
		txtCompanyWebPage->Text = n->WebPage;
		txtCompanyUser->Text = n->User;
	}
}


private: System::Void consultasToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
	btnCompanyAdd->Enabled = false;
	btnNaturalAdd->Enabled = false;
	btnNaturalDelete->Enabled = false;
	btnNaturalUpdate->Enabled = false;
	btnCompanyDelete->Enabled = false;
	btnCompanyUpdate->Enabled = false;
}
private: System::Void agregarNuevoUsuarioToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	btnCompanyAdd->Enabled = true;
	btnNaturalAdd->Enabled = true;
	btnNaturalDelete->Enabled = false;
	btnNaturalUpdate->Enabled = false;
	btnCompanyDelete->Enabled = false;
	btnCompanyUpdate->Enabled = false;
	ClearControlsCompanies();
	ClearControlsNatural();
}
private: System::Void modificarToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
	btnCompanyAdd->Enabled = false;
	btnNaturalAdd->Enabled = false;
	btnNaturalDelete->Enabled = true;
	btnNaturalUpdate->Enabled = true;
	btnCompanyDelete->Enabled = true;
	btnCompanyUpdate->Enabled = true;
	ClearControlsCompanies();
	ClearControlsNatural();
}
private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void CustomerForm_Load_1(System::Object^ sender, System::EventArgs^ e) {
	RefreshGridNatural();
	RefreshGridCompany();
	btnCompanyAdd->Enabled = false;
	btnNaturalAdd->Enabled = false;
	btnNaturalDelete->Enabled = false;
	btnNaturalUpdate->Enabled = false;
	btnCompanyDelete->Enabled = false;
	btnCompanyUpdate->Enabled = false;
}



};
}
