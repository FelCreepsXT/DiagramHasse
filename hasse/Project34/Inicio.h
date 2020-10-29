#pragma once
#include "MyForm.h"
namespace Project34 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Inicio
	/// </summary>
	public ref class Inicio : public System::Windows::Forms::Form
	{
	public:
		Inicio(void)
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
		~Inicio()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  btnSalir;

	private: System::Windows::Forms::Button^  btnCreditos;
	private: System::Windows::Forms::Button^  btnEjecutar;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Inicio::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnSalir = (gcnew System::Windows::Forms::Button());
			this->btnCreditos = (gcnew System::Windows::Forms::Button());
			this->btnEjecutar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Red;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 23, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(-4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(333, 53);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Diagrama de Hasse";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(133, 56);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(67, 53);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(73, 115);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(188, 117);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 6;
			this->pictureBox2->TabStop = false;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Red;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 23, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(-4, 235);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(333, 69);
			this->label2->TabIndex = 7;
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnSalir
			// 
			this->btnSalir->BackColor = System::Drawing::Color::White;
			this->btnSalir->Location = System::Drawing::Point(239, 250);
			this->btnSalir->Name = L"btnSalir";
			this->btnSalir->Size = System::Drawing::Size(75, 35);
			this->btnSalir->TabIndex = 11;
			this->btnSalir->Text = L"Salir";
			this->btnSalir->UseVisualStyleBackColor = false;
			this->btnSalir->Click += gcnew System::EventHandler(this, &Inicio::button5_Click);
			// 
			// btnCreditos
			// 
			this->btnCreditos->BackColor = System::Drawing::Color::White;
			this->btnCreditos->Location = System::Drawing::Point(125, 250);
			this->btnCreditos->Name = L"btnCreditos";
			this->btnCreditos->Size = System::Drawing::Size(75, 35);
			this->btnCreditos->TabIndex = 9;
			this->btnCreditos->Text = L"Creado";
			this->btnCreditos->UseVisualStyleBackColor = false;
			this->btnCreditos->Click += gcnew System::EventHandler(this, &Inicio::button7_Click);
			// 
			// btnEjecutar
			// 
			this->btnEjecutar->BackColor = System::Drawing::Color::White;
			this->btnEjecutar->Location = System::Drawing::Point(12, 250);
			this->btnEjecutar->Name = L"btnEjecutar";
			this->btnEjecutar->Size = System::Drawing::Size(75, 35);
			this->btnEjecutar->TabIndex = 8;
			this->btnEjecutar->Text = L"Ejecutar";
			this->btnEjecutar->UseVisualStyleBackColor = false;
			this->btnEjecutar->Click += gcnew System::EventHandler(this, &Inicio::button8_Click);
			// 
			// Inicio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(326, 302);
			this->Controls->Add(this->btnSalir);
			this->Controls->Add(this->btnCreditos);
			this->Controls->Add(this->btnEjecutar);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Name = L"Inicio";
			this->Text = L"Inicio";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show("Luciano Lopez\n");
	}

	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
		MyForm^ asd = gcnew MyForm();
		asd->ShowDialog();
	}
};
}
