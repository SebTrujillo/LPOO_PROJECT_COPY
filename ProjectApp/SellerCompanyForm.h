#pragma once

namespace ProjectApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::TextBox^ txtSllrMail;





	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtSllrRUC;
	private: System::Windows::Forms::PictureBox^ pbSllr;
	private: System::Windows::Forms::DataGridView^ dgvSllr;



	private: System::Windows::Forms::DataGridViewTextBoxColumn^ sllrID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ sllrName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ sllrPhone;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ sllrEmail;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ sllrRUC;
	private: System::Windows::Forms::Button^ btnSllrAdd;
	private: System::Windows::Forms::Button^ btnSllrDelete;



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
			this->txtSllrMail = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtSllrRUC = (gcnew System::Windows::Forms::TextBox());
			this->pbSllr = (gcnew System::Windows::Forms::PictureBox());
			this->dgvSllr = (gcnew System::Windows::Forms::DataGridView());
			this->sllrID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->sllrName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->sllrPhone = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->sllrEmail = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->sllrRUC = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnSllrAdd = (gcnew System::Windows::Forms::Button());
			this->btnSllrDelete = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbSllr))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSllr))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(83, 53);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Id";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(83, 91);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(114, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre Empresa";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(83, 131);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Dirección";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(83, 168);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(117, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Número de celular";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(83, 204);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(41, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Email";
			// 
			// txtSllrID
			// 
			this->txtSllrID->Location = System::Drawing::Point(276, 53);
			this->txtSllrID->Name = L"txtSllrID";
			this->txtSllrID->Size = System::Drawing::Size(100, 22);
			this->txtSllrID->TabIndex = 5;
			// 
			// txtSllrName
			// 
			this->txtSllrName->Location = System::Drawing::Point(276, 91);
			this->txtSllrName->Name = L"txtSllrName";
			this->txtSllrName->Size = System::Drawing::Size(323, 22);
			this->txtSllrName->TabIndex = 6;
			// 
			// txtSllrDir
			// 
			this->txtSllrDir->Location = System::Drawing::Point(276, 124);
			this->txtSllrDir->Name = L"txtSllrDir";
			this->txtSllrDir->Size = System::Drawing::Size(405, 22);
			this->txtSllrDir->TabIndex = 7;
			// 
			// txtSllrPhone
			// 
			this->txtSllrPhone->Location = System::Drawing::Point(276, 168);
			this->txtSllrPhone->Name = L"txtSllrPhone";
			this->txtSllrPhone->Size = System::Drawing::Size(207, 22);
			this->txtSllrPhone->TabIndex = 8;
			// 
			// txtSllrMail
			// 
			this->txtSllrMail->Location = System::Drawing::Point(276, 204);
			this->txtSllrMail->Name = L"txtSllrMail";
			this->txtSllrMail->Size = System::Drawing::Size(300, 22);
			this->txtSllrMail->TabIndex = 9;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(83, 243);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(36, 16);
			this->label6->TabIndex = 10;
			this->label6->Text = L"RUC";
			// 
			// txtSllrRUC
			// 
			this->txtSllrRUC->Location = System::Drawing::Point(276, 243);
			this->txtSllrRUC->Name = L"txtSllrRUC";
			this->txtSllrRUC->Size = System::Drawing::Size(155, 22);
			this->txtSllrRUC->TabIndex = 11;
			// 
			// pbSllr
			// 
			this->pbSllr->Location = System::Drawing::Point(836, 18);
			this->pbSllr->Name = L"pbSllr";
			this->pbSllr->Size = System::Drawing::Size(180, 241);
			this->pbSllr->TabIndex = 12;
			this->pbSllr->TabStop = false;
			// 
			// dgvSllr
			// 
			this->dgvSllr->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvSllr->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->sllrID, this->sllrName,
					this->sllrPhone, this->sllrEmail, this->sllrRUC
			});
			this->dgvSllr->Location = System::Drawing::Point(98, 386);
			this->dgvSllr->Name = L"dgvSllr";
			this->dgvSllr->RowHeadersWidth = 51;
			this->dgvSllr->RowTemplate->Height = 24;
			this->dgvSllr->Size = System::Drawing::Size(770, 142);
			this->dgvSllr->TabIndex = 13;
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
			// sllrEmail
			// 
			this->sllrEmail->HeaderText = L"Email";
			this->sllrEmail->MinimumWidth = 6;
			this->sllrEmail->Name = L"sllrEmail";
			this->sllrEmail->Width = 125;
			// 
			// sllrRUC
			// 
			this->sllrRUC->HeaderText = L"RUC";
			this->sllrRUC->MinimumWidth = 6;
			this->sllrRUC->Name = L"sllrRUC";
			this->sllrRUC->Width = 125;
			// 
			// btnSllrAdd
			// 
			this->btnSllrAdd->Location = System::Drawing::Point(214, 327);
			this->btnSllrAdd->Name = L"btnSllrAdd";
			this->btnSllrAdd->Size = System::Drawing::Size(183, 30);
			this->btnSllrAdd->TabIndex = 14;
			this->btnSllrAdd->Text = L"Agregar";
			this->btnSllrAdd->UseVisualStyleBackColor = true;
			// 
			// btnSllrDelete
			// 
			this->btnSllrDelete->Location = System::Drawing::Point(583, 327);
			this->btnSllrDelete->Name = L"btnSllrDelete";
			this->btnSllrDelete->Size = System::Drawing::Size(172, 30);
			this->btnSllrDelete->TabIndex = 15;
			this->btnSllrDelete->Text = L"Eliminar";
			this->btnSllrDelete->UseVisualStyleBackColor = true;
			// 
			// SellerCompanyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1028, 547);
			this->Controls->Add(this->btnSllrDelete);
			this->Controls->Add(this->btnSllrAdd);
			this->Controls->Add(this->dgvSllr);
			this->Controls->Add(this->pbSllr);
			this->Controls->Add(this->txtSllrRUC);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txtSllrMail);
			this->Controls->Add(this->txtSllrPhone);
			this->Controls->Add(this->txtSllrDir);
			this->Controls->Add(this->txtSllrName);
			this->Controls->Add(this->txtSllrID);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"SellerCompanyForm";
			this->Text = L"SellerCompanyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbSllr))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSllr))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
