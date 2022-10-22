#pragma once

#include "CompanyProduct.h"
#include "SellerCompanyForm.h"



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
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->usuariosToolStripMenuItem,
					this->empresasToolStripMenuItem, this->administradoresToolStripMenuItem
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
			this->verProductosToolStripMenuItem->Size = System::Drawing::Size(204, 22);
			this->verProductosToolStripMenuItem->Text = L"Ver productos";
			// 
			// agregarNuevosUsuariosToolStripMenuItem
			// 
			this->agregarNuevosUsuariosToolStripMenuItem->Name = L"agregarNuevosUsuariosToolStripMenuItem";
			this->agregarNuevosUsuariosToolStripMenuItem->Size = System::Drawing::Size(204, 22);
			this->agregarNuevosUsuariosToolStripMenuItem->Text = L"Agregar nuevos usuarios";
			// 
			// empresasToolStripMenuItem
			// 
			this->empresasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->registrarProductosToolStripMenuItem,
					this->registrarNuevaEmpresaToolStripMenuItem
			});
			this->empresasToolStripMenuItem->Name = L"empresasToolStripMenuItem";
			this->empresasToolStripMenuItem->Size = System::Drawing::Size(69, 20);
			this->empresasToolStripMenuItem->Text = L"Empresas";
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
			this->administradoresToolStripMenuItem->Name = L"administradoresToolStripMenuItem";
			this->administradoresToolStripMenuItem->Size = System::Drawing::Size(106, 20);
			this->administradoresToolStripMenuItem->Text = L"Administradores";
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(721, 304);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
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
};
}
