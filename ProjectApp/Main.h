#pragma once

#include "CompanyProduct.h"
#include "SellerCompanyForm.h"
#include "ProductSearchForm.h"
#include "TransactionForm.h"
#include "CustomerForm.h"


namespace ProjectApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Main
	/// </summary>
	public ref class Main : public System::Windows::Forms::Form
	{
	public:
		Main(void)
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
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ usuariosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ verProductosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ empresasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ registrarProductosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ administradoresToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ agregarNuevosUsuariosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ registrarNuevaEmpresaToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ busquedaDeUsuariosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ transacciónToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ busquedaDeProductosToolStripMenuItem;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->usuariosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->verProductosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->agregarNuevosUsuariosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->empresasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->registrarProductosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->registrarNuevaEmpresaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->administradoresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->busquedaDeUsuariosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->busquedaDeProductosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->transacciónToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->usuariosToolStripMenuItem,
					this->empresasToolStripMenuItem, this->administradoresToolStripMenuItem, this->transacciónToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(721, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// usuariosToolStripMenuItem
			// 
			this->usuariosToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->verProductosToolStripMenuItem,
					this->agregarNuevosUsuariosToolStripMenuItem
			});
			this->usuariosToolStripMenuItem->Name = L"usuariosToolStripMenuItem";
			this->usuariosToolStripMenuItem->Size = System::Drawing::Size(64, 20);
			this->usuariosToolStripMenuItem->Text = L"Usuarios";
			// 
			// verProductosToolStripMenuItem
			// 
			this->verProductosToolStripMenuItem->Name = L"verProductosToolStripMenuItem";
			this->verProductosToolStripMenuItem->Size = System::Drawing::Size(246, 22);
			this->verProductosToolStripMenuItem->Text = L"Iniciar Sesión";
			// 
			// agregarNuevosUsuariosToolStripMenuItem
			// 
			this->agregarNuevosUsuariosToolStripMenuItem->Name = L"agregarNuevosUsuariosToolStripMenuItem";
			this->agregarNuevosUsuariosToolStripMenuItem->Size = System::Drawing::Size(246, 22);
			this->agregarNuevosUsuariosToolStripMenuItem->Text = L"Registrarse como Nuevo Usuario";
			this->agregarNuevosUsuariosToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main::agregarNuevosUsuariosToolStripMenuItem_Click);
			// 
			// empresasToolStripMenuItem
			// 
			this->empresasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->registrarProductosToolStripMenuItem,
					this->registrarNuevaEmpresaToolStripMenuItem
			});
			this->empresasToolStripMenuItem->Name = L"empresasToolStripMenuItem";
			this->empresasToolStripMenuItem->Size = System::Drawing::Size(84, 20);
			this->empresasToolStripMenuItem->Text = L"Proveedores";
			// 
			// registrarProductosToolStripMenuItem
			// 
			this->registrarProductosToolStripMenuItem->Name = L"registrarProductosToolStripMenuItem";
			this->registrarProductosToolStripMenuItem->Size = System::Drawing::Size(203, 22);
			this->registrarProductosToolStripMenuItem->Text = L"Iniciar Sesion";
			this->registrarProductosToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main::registrarProductosToolStripMenuItem_Click);
			// 
			// registrarNuevaEmpresaToolStripMenuItem
			// 
			this->registrarNuevaEmpresaToolStripMenuItem->Name = L"registrarNuevaEmpresaToolStripMenuItem";
			this->registrarNuevaEmpresaToolStripMenuItem->Size = System::Drawing::Size(203, 22);
			this->registrarNuevaEmpresaToolStripMenuItem->Text = L"Registrar nueva empresa";
			this->registrarNuevaEmpresaToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main::registrarNuevaEmpresaToolStripMenuItem_Click);
			// 
			// administradoresToolStripMenuItem
			// 
			this->administradoresToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->busquedaDeUsuariosToolStripMenuItem,
					this->busquedaDeProductosToolStripMenuItem
			});
			this->administradoresToolStripMenuItem->Name = L"administradoresToolStripMenuItem";
			this->administradoresToolStripMenuItem->Size = System::Drawing::Size(106, 20);
			this->administradoresToolStripMenuItem->Text = L"Administradores";
			// 
			// busquedaDeUsuariosToolStripMenuItem
			// 
			this->busquedaDeUsuariosToolStripMenuItem->Name = L"busquedaDeUsuariosToolStripMenuItem";
			this->busquedaDeUsuariosToolStripMenuItem->Size = System::Drawing::Size(199, 22);
			this->busquedaDeUsuariosToolStripMenuItem->Text = L"Busqueda de Usuarios";
			// 
			// busquedaDeProductosToolStripMenuItem
			// 
			this->busquedaDeProductosToolStripMenuItem->Name = L"busquedaDeProductosToolStripMenuItem";
			this->busquedaDeProductosToolStripMenuItem->Size = System::Drawing::Size(199, 22);
			this->busquedaDeProductosToolStripMenuItem->Text = L"Busqueda de Productos";
			// 
			// transacciónToolStripMenuItem
			// 
			this->transacciónToolStripMenuItem->Name = L"transacciónToolStripMenuItem";
			this->transacciónToolStripMenuItem->Size = System::Drawing::Size(81, 20);
			this->transacciónToolStripMenuItem->Text = L"Transacción";
			this->transacciónToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main::transacciónToolStripMenuItem_Click);
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(721, 304);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Main";
			this->Text = L"ELECTROMARKET";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void registrarProductosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		CompanyProduct^ companyProduct = gcnew CompanyProduct();
		companyProduct->MdiParent = this;
		companyProduct->Show();
	}
private: System::Void registrarNuevaEmpresaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	SellerCompanyForm^ sellerCompanyform = gcnew SellerCompanyForm();
	sellerCompanyform->MdiParent = this;
	sellerCompanyform->Show();
}

private: System::Void busquedaDeProductosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void transacciónToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	TransactionForm^ transactionForm = gcnew TransactionForm();
	transactionForm->MdiParent = this;
	transactionForm->Show();
}

private: System::Void agregarNuevosUsuariosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	CustomerForm^ customerForm = gcnew CustomerForm();
	customerForm->MdiParent = this;
	customerForm->Show();
}
};
}
