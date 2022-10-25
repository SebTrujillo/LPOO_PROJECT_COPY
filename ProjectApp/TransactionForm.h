#pragma once
#include "ProductSearchForm.h"


namespace ProjectApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace LPOOPROJECT;

	/// <summary>
	/// Resumen de TransactionForm
	/// </summary>
	public ref class TransactionForm : public System::Windows::Forms::Form
	{
	public:
		TransactionForm(void)
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
		~TransactionForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::DataGridView^ dgvProducts;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Product;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ TypeProduct;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Price;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Count;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ SubTotal;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ txtTotal;


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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->dgvProducts = (gcnew System::Windows::Forms::DataGridView());
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Product = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TypeProduct = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Count = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->SubTotal = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->txtTotal = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProducts))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(61, 14);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Fecha";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(61, 58);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Cliente";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(156, 10);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(311, 22);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(156, 49);
			this->textBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(437, 22);
			this->textBox2->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(636, 52);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(167, 28);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(139, 112);
			this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(200, 28);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Agregar producto";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &TransactionForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(523, 112);
			this->button3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(231, 28);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Eliminar Producto";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(33, 367);
			this->button4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(184, 33);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Registrar venta";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &TransactionForm::button4_Click);
			// 
			// dgvProducts
			// 
			this->dgvProducts->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvProducts->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Id, this->Product,
					this->TypeProduct, this->Price, this->Count, this->SubTotal
			});
			this->dgvProducts->Location = System::Drawing::Point(33, 169);
			this->dgvProducts->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dgvProducts->Name = L"dgvProducts";
			this->dgvProducts->RowHeadersWidth = 51;
			this->dgvProducts->Size = System::Drawing::Size(937, 127);
			this->dgvProducts->TabIndex = 8;
			this->dgvProducts->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &TransactionForm::dataGridView1_CellValueChanged);
			// 
			// Id
			// 
			this->Id->HeaderText = L"Id";
			this->Id->MinimumWidth = 6;
			this->Id->Name = L"Id";
			this->Id->Width = 125;
			// 
			// Product
			// 
			this->Product->HeaderText = L"Nombre";
			this->Product->MinimumWidth = 6;
			this->Product->Name = L"Product";
			this->Product->Width = 120;
			// 
			// TypeProduct
			// 
			this->TypeProduct->HeaderText = L"Tipo de Producto";
			this->TypeProduct->MinimumWidth = 6;
			this->TypeProduct->Name = L"TypeProduct";
			this->TypeProduct->Width = 140;
			// 
			// Price
			// 
			this->Price->HeaderText = L"Precio";
			this->Price->MinimumWidth = 6;
			this->Price->Name = L"Price";
			this->Price->Width = 125;
			// 
			// Count
			// 
			this->Count->HeaderText = L"Cantidad";
			this->Count->MinimumWidth = 6;
			this->Count->Name = L"Count";
			this->Count->Width = 125;
			// 
			// SubTotal
			// 
			this->SubTotal->HeaderText = L"SubTotal";
			this->SubTotal->MinimumWidth = 6;
			this->SubTotal->Name = L"SubTotal";
			this->SubTotal->Width = 125;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(577, 315);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 16);
			this->label3->TabIndex = 9;
			this->label3->Text = L"SubTotal";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(577, 345);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 16);
			this->label4->TabIndex = 10;
			this->label4->Text = L"I.G.V";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(577, 375);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(41, 16);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Total:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(671, 306);
			this->textBox3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(132, 22);
			this->textBox3->TabIndex = 12;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(671, 335);
			this->textBox4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(132, 22);
			this->textBox4->TabIndex = 13;
			// 
			// txtTotal
			// 
			this->txtTotal->Location = System::Drawing::Point(671, 367);
			this->txtTotal->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->txtTotal->Name = L"txtTotal";
			this->txtTotal->Size = System::Drawing::Size(132, 22);
			this->txtTotal->TabIndex = 14;
			// 
			// TransactionForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1182, 507);
			this->Controls->Add(this->txtTotal);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dgvProducts);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"TransactionForm";
			this->Text = L"TransactionForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProducts))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion



private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	ProductSearchForm^ productSearchForm = gcnew ProductSearchForm(this);
	productSearchForm->ShowDialog();

}
	/*public: Void AddProductToSalesDetails(Product^ p) {
		dgvProducts->Rows->Add(gcnew array<String^> {
			Convert::ToString(p->Id),
				p->Name,
				Convert::ToString(p->Price),
				"1",
				Convert::ToString(p->Price)
		});
	}*/


private: System::Void dataGridView1_CellValueChanged(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (dgvProducts->Columns[e->ColumnIndex]->Name == "Count") {
		dgvProducts->Rows[e->RowIndex]->Cells[5]->Value =
			Int32::Parse(dgvProducts->CurrentCell->Value->ToString()) *
			Double::Parse(dgvProducts->Rows[e->RowIndex]->Cells[2]->Value->ToString());
		double total = 0;
		for (int i = 0; i < dgvProducts->RowCount - 1; i++)
			total += Double::Parse(dgvProducts->Rows[i]->Cells[5]->Value->ToString());
		txtTotal->Text = "" + total;
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

}
};
}
