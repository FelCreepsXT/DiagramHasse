#pragma once

#include "cArreglo.h"
#include "Agregar.h"
namespace Project34 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnSalir;
	protected:


	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btnOperar;
	private: System::Windows::Forms::Label^  Titulo;
	public: System::Windows::Forms::TextBox^  txtNumero;
	private:
	private: System::Windows::Forms::Label^  lblNum;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::ComponentModel::IContainer^  components;
	public:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->btnSalir = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnOperar = (gcnew System::Windows::Forms::Button());
			this->Titulo = (gcnew System::Windows::Forms::Label());
			this->txtNumero = (gcnew System::Windows::Forms::TextBox());
			this->lblNum = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// btnSalir
			// 
			this->btnSalir->BackColor = System::Drawing::Color::Red;
			this->btnSalir->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnSalir->Location = System::Drawing::Point(335, 45);
			this->btnSalir->Name = L"btnSalir";
			this->btnSalir->Size = System::Drawing::Size(75, 23);
			this->btnSalir->TabIndex = 25;
			this->btnSalir->Text = L"Salir";
			this->btnSalir->UseVisualStyleBackColor = false;
			this->btnSalir->Click += gcnew System::EventHandler(this, &MyForm::btnSalir_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(381, 82);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(103, 13);
			this->label3->TabIndex = 22;
			this->label3->Text = L"Diagrama de Hasse:";
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(384, 98);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(469, 409);
			this->panel1->TabIndex = 21;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(185, 98);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(138, 407);
			this->listBox2->TabIndex = 20;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(182, 82);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(137, 13);
			this->label2->TabIndex = 19;
			this->label2->Text = L"Conjunto Pares Ordenados:";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(0, 100);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(138, 407);
			this->listBox1->TabIndex = 18;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(26, 82);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 13);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Conjunto D:";
			// 
			// btnOperar
			// 
			this->btnOperar->BackColor = System::Drawing::Color::Red;
			this->btnOperar->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnOperar->Location = System::Drawing::Point(241, 46);
			this->btnOperar->Name = L"btnOperar";
			this->btnOperar->Size = System::Drawing::Size(75, 23);
			this->btnOperar->TabIndex = 16;
			this->btnOperar->Text = L"Aceptar";
			this->btnOperar->UseVisualStyleBackColor = false;
			this->btnOperar->Click += gcnew System::EventHandler(this, &MyForm::btnOperar_Click);
			// 
			// Titulo
			// 
			this->Titulo->BackColor = System::Drawing::Color::Red;
			this->Titulo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Titulo->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Titulo->Location = System::Drawing::Point(-7, 0);
			this->Titulo->Name = L"Titulo";
			this->Titulo->Size = System::Drawing::Size(1033, 37);
			this->Titulo->TabIndex = 15;
			this->Titulo->Text = L"Matematica Discreta";
			this->Titulo->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txtNumero
			// 
			this->txtNumero->Location = System::Drawing::Point(117, 48);
			this->txtNumero->Name = L"txtNumero";
			this->txtNumero->Size = System::Drawing::Size(100, 20);
			this->txtNumero->TabIndex = 14;
			// 
			// lblNum
			// 
			this->lblNum->AutoSize = true;
			this->lblNum->Location = System::Drawing::Point(3, 51);
			this->lblNum->Name = L"lblNum";
			this->lblNum->Size = System::Drawing::Size(97, 13);
			this->lblNum->TabIndex = 13;
			this->lblNum->Text = L"Numero a Calcular:";
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(865, 519);
			this->Controls->Add(this->btnSalir);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnOperar);
			this->Controls->Add(this->Titulo);
			this->Controls->Add(this->txtNumero);
			this->Controls->Add(this->lblNum);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		cArreglo *Arreglo;
		cAgregar *Agregar;
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		Arreglo = new cArreglo();
		Agregar = new cAgregar();
		
	}
	private: System::Void btnOperar_Click(System::Object^  sender, System::EventArgs^  e) {
		
		
		int numero = Convert::ToInt64(txtNumero->Text);
		Agregar->SET_Contador(numero);
		Agregar->CrearArregloConjunto(numero);

		Agregar->SET_MCD(numero);
		Agregar->CrearArregloMCD(numero);

		Agregar->UsarAuxiliar();
		Agregar->AgregarNiveles();

		Agregar->ArregloCantidadNivel();
	

		Arreglo->Agregar(Agregar,Agregar->GET_Contador());
		
		btnOperar->Visible = false;

		for (int i = 0; i < Agregar->GET_Contador(); i++) {
			listBox1->Items->Add(Arreglo->GET_NumeroConjunto(i));
		}

		for (int i = 0; i < Agregar->GET_Contador(); i++) {
			for (int j = 0; j < Agregar->GET_Contador(); j++) {
				//listBox2->Items->Add("(" + Arreglo->GET_NumeroConjunto(i) + ", " + Arreglo->GET_NumeroConjunto(j) + ")");
				listBox2->Items->Add("(" + Agregar->GET_ArregloConjunto(i) + " , " + Agregar->GET_ArregloConjunto(j) + ")");
			}
		}		
		timer1->Enabled = true;
	}
	private: System::Void btnSalir_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		Graphics^g = panel1->CreateGraphics();
		BufferedGraphicsContext^espacioBuffer = BufferedGraphicsManager::Current;
		BufferedGraphics^buffer = espacioBuffer->Allocate(g, panel1->ClientRectangle);
		buffer->Graphics->Clear(Color::Azure);

		Arreglo->Hasse(buffer->Graphics);
		Arreglo->Linea(buffer->Graphics);



		buffer->Render(g);
		delete buffer;
		delete espacioBuffer;
		delete g;
	}
};
}
