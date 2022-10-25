#pragma once

namespace ProjectApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ProjectController;
	using namespace LPOOPROJECT;

	/// <summary>
	/// Resumen de LoginCompany
	/// </summary>
	public ref class LoginCompany : public System::Windows::Forms::Form
	{
	public:
		LoginCompany(void)
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
		~LoginCompany()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtUsernameC;
	private: System::Windows::Forms::TextBox^ txtPasswordC;
	private: System::Windows::Forms::Button^ btnOkC;
	private: System::Windows::Forms::Button^ btnExitC;

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
			this->txtUsernameC = (gcnew System::Windows::Forms::TextBox());
			this->txtPasswordC = (gcnew System::Windows::Forms::TextBox());
			this->btnOkC = (gcnew System::Windows::Forms::Button());
			this->btnExitC = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(58, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Usuario";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(58, 67);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Contraseña";
			// 
			// txtUsernameC
			// 
			this->txtUsernameC->Location = System::Drawing::Point(135, 30);
			this->txtUsernameC->Name = L"txtUsernameC";
			this->txtUsernameC->Size = System::Drawing::Size(180, 20);
			this->txtUsernameC->TabIndex = 2;
			// 
			// txtPasswordC
			// 
			this->txtPasswordC->Location = System::Drawing::Point(135, 60);
			this->txtPasswordC->Name = L"txtPasswordC";
			this->txtPasswordC->PasswordChar = '*';
			this->txtPasswordC->Size = System::Drawing::Size(180, 20);
			this->txtPasswordC->TabIndex = 3;
			// 
			// btnOkC
			// 
			this->btnOkC->Location = System::Drawing::Point(77, 103);
			this->btnOkC->Name = L"btnOkC";
			this->btnOkC->Size = System::Drawing::Size(75, 23);
			this->btnOkC->TabIndex = 4;
			this->btnOkC->Text = L"Aceptar";
			this->btnOkC->UseVisualStyleBackColor = true;
			this->btnOkC->Click += gcnew System::EventHandler(this, &LoginCompany::btnOkC_Click);
			// 
			// btnExitC
			// 
			this->btnExitC->Location = System::Drawing::Point(212, 103);
			this->btnExitC->Name = L"btnExitC";
			this->btnExitC->Size = System::Drawing::Size(75, 23);
			this->btnExitC->TabIndex = 5;
			this->btnExitC->Text = L"Salir";
			this->btnExitC->UseVisualStyleBackColor = true;
			this->btnExitC->Click += gcnew System::EventHandler(this, &LoginCompany::btnExitC_Click);
			// 
			// LoginCompany
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(359, 154);
			this->ControlBox = false;
			this->Controls->Add(this->btnExitC);
			this->Controls->Add(this->btnOkC);
			this->Controls->Add(this->txtPasswordC);
			this->Controls->Add(this->txtUsernameC);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"LoginCompany";
			this->Text = L"Inicio de sesión de Proveedores";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnOkC_Click(System::Object^ sender, System::EventArgs^ e) {
		SellerCompany^ emp = Controller::LoginCompany(txtUsernameC->Text, txtPasswordC->Text);
		if (emp != nullptr) {
			MessageBox::Show("Bienvenido " + emp->Name);
			this->Close();
		}
		else {
			MessageBox::Show("Usuario y contraseña incorrectos.");
		}
	}
private: System::Void btnExitC_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
