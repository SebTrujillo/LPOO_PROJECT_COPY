#pragma once

namespace ProjectApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de LoginCustomer
	/// </summary>
	public ref class LoginCustomer : public System::Windows::Forms::Form
	{
	public:
		LoginCustomer(void)
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
		~LoginCustomer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtUserCustomer;
	private: System::Windows::Forms::TextBox^ txtPasswordCustomer;
	private: System::Windows::Forms::Button^ btnOkCustomer;
	private: System::Windows::Forms::Button^ btnCancelCustomer;





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
			this->txtUserCustomer = (gcnew System::Windows::Forms::TextBox());
			this->txtPasswordCustomer = (gcnew System::Windows::Forms::TextBox());
			this->btnOkCustomer = (gcnew System::Windows::Forms::Button());
			this->btnCancelCustomer = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(44, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Usuario";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(44, 92);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Contraseña";
			// 
			// txtUserCustomer
			// 
			this->txtUserCustomer->Location = System::Drawing::Point(128, 49);
			this->txtUserCustomer->Name = L"txtUserCustomer";
			this->txtUserCustomer->Size = System::Drawing::Size(100, 20);
			this->txtUserCustomer->TabIndex = 2;
			// 
			// txtPasswordCustomer
			// 
			this->txtPasswordCustomer->Location = System::Drawing::Point(128, 92);
			this->txtPasswordCustomer->Name = L"txtPasswordCustomer";
			this->txtPasswordCustomer->Size = System::Drawing::Size(100, 20);
			this->txtPasswordCustomer->TabIndex = 3;
			// 
			// btnOkCustomer
			// 
			this->btnOkCustomer->Location = System::Drawing::Point(47, 156);
			this->btnOkCustomer->Name = L"btnOkCustomer";
			this->btnOkCustomer->Size = System::Drawing::Size(108, 29);
			this->btnOkCustomer->TabIndex = 4;
			this->btnOkCustomer->Text = L"Aceptar";
			this->btnOkCustomer->UseVisualStyleBackColor = true;
			this->btnOkCustomer->Click += gcnew System::EventHandler(this, &LoginCustomer::btnOkCustomer_Click);
			// 
			// btnCancelCustomer
			// 
			this->btnCancelCustomer->Location = System::Drawing::Point(234, 156);
			this->btnCancelCustomer->Name = L"btnCancelCustomer";
			this->btnCancelCustomer->Size = System::Drawing::Size(129, 29);
			this->btnCancelCustomer->TabIndex = 5;
			this->btnCancelCustomer->Text = L"Salir";
			this->btnCancelCustomer->UseVisualStyleBackColor = true;
			// 
			// LoginCustomer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(409, 207);
			this->Controls->Add(this->btnCancelCustomer);
			this->Controls->Add(this->btnOkCustomer);
			this->Controls->Add(this->txtPasswordCustomer);
			this->Controls->Add(this->txtUserCustomer);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"LoginCustomer";
			this->Text = L"LoginCustomer";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnOkCustomer_Click(System::Object^ sender, System::EventArgs^ e) {

	}
};
}
