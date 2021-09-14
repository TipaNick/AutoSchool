#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ fio_k;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ age_k;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ email_k;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ phone_k;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ category;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ fio_i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ age_i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ email_i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ phone_i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ exp_i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ car_i;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ fio_z_k;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ fio_z_i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ type;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ car;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ num_car;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ model_car;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::DataGridView^ dataGridView4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ fio_g;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ time_g;






	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->fio_k = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->age_k = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->email_k = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->phone_k = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->category = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->fio_i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->age_i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->email_i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->phone_i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->exp_i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->car_i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->num_car = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->model_car = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->fio_g = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->time_g = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->fio_z_k = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->fio_z_i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->type = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->car = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->tabPage5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(697, 447);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->textBox5);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(689, 421);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Курсанты";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->textBox11);
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Controls->Add(this->button5);
			this->tabPage2->Controls->Add(this->button6);
			this->tabPage2->Controls->Add(this->textBox6);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->textBox7);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->textBox8);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->textBox9);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->textBox10);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->dataGridView2);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(689, 421);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Инструктора";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->textBox13);
			this->tabPage3->Controls->Add(this->label13);
			this->tabPage3->Controls->Add(this->textBox12);
			this->tabPage3->Controls->Add(this->label12);
			this->tabPage3->Controls->Add(this->button7);
			this->tabPage3->Controls->Add(this->button8);
			this->tabPage3->Controls->Add(this->button9);
			this->tabPage3->Controls->Add(this->dataGridView3);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(689, 421);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Машины";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->button13);
			this->tabPage4->Controls->Add(this->button14);
			this->tabPage4->Controls->Add(this->button15);
			this->tabPage4->Controls->Add(this->label19);
			this->tabPage4->Controls->Add(this->comboBox4);
			this->tabPage4->Controls->Add(this->label18);
			this->tabPage4->Controls->Add(this->comboBox3);
			this->tabPage4->Controls->Add(this->label17);
			this->tabPage4->Controls->Add(this->comboBox2);
			this->tabPage4->Controls->Add(this->label16);
			this->tabPage4->Controls->Add(this->comboBox1);
			this->tabPage4->Controls->Add(this->dataGridView5);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(689, 421);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Запись";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->textBox14);
			this->tabPage5->Controls->Add(this->label14);
			this->tabPage5->Controls->Add(this->textBox15);
			this->tabPage5->Controls->Add(this->label15);
			this->tabPage5->Controls->Add(this->button10);
			this->tabPage5->Controls->Add(this->button11);
			this->tabPage5->Controls->Add(this->button12);
			this->tabPage5->Controls->Add(this->dataGridView4);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Size = System::Drawing::Size(689, 421);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"ГИБДД";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->fio_k,
					this->age_k, this->email_k, this->phone_k, this->category
			});
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(689, 211);
			this->dataGridView1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(139, 229);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"ФИО";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(142, 245);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(142, 288);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(139, 272);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Возраст";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(292, 245);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(289, 229);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(32, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Email";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(292, 288);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(289, 272);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(52, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Телефон";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(436, 245);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 11;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(433, 229);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(60, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Категория";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(142, 358);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 46);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Добавить";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(292, 358);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 46);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Изменить";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(436, 358);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 46);
			this->button3->TabIndex = 14;
			this->button3->Text = L"Удалить";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->fio_i,
					this->age_i, this->email_i, this->phone_i, this->exp_i, this->car_i
			});
			this->dataGridView2->Location = System::Drawing::Point(0, 0);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->Size = System::Drawing::Size(689, 211);
			this->dataGridView2->TabIndex = 0;
			// 
			// fio_k
			// 
			this->fio_k->HeaderText = L"ФИО";
			this->fio_k->Name = L"fio_k";
			this->fio_k->ReadOnly = true;
			// 
			// age_k
			// 
			this->age_k->HeaderText = L"Возраст";
			this->age_k->Name = L"age_k";
			this->age_k->ReadOnly = true;
			// 
			// email_k
			// 
			this->email_k->HeaderText = L"Email";
			this->email_k->Name = L"email_k";
			this->email_k->ReadOnly = true;
			// 
			// phone_k
			// 
			this->phone_k->HeaderText = L"Телефон";
			this->phone_k->Name = L"phone_k";
			this->phone_k->ReadOnly = true;
			// 
			// category
			// 
			this->category->HeaderText = L"Категория";
			this->category->Name = L"category";
			this->category->ReadOnly = true;
			// 
			// fio_i
			// 
			this->fio_i->HeaderText = L"ФИО";
			this->fio_i->Name = L"fio_i";
			this->fio_i->ReadOnly = true;
			// 
			// age_i
			// 
			this->age_i->HeaderText = L"Возраст";
			this->age_i->Name = L"age_i";
			this->age_i->ReadOnly = true;
			// 
			// email_i
			// 
			this->email_i->HeaderText = L"Email";
			this->email_i->Name = L"email_i";
			this->email_i->ReadOnly = true;
			// 
			// phone_i
			// 
			this->phone_i->HeaderText = L"Телефон";
			this->phone_i->Name = L"phone_i";
			this->phone_i->ReadOnly = true;
			// 
			// exp_i
			// 
			this->exp_i->HeaderText = L"Стаж";
			this->exp_i->Name = L"exp_i";
			this->exp_i->ReadOnly = true;
			// 
			// car_i
			// 
			this->car_i->HeaderText = L"Машина";
			this->car_i->Name = L"car_i";
			this->car_i->ReadOnly = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(436, 358);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 46);
			this->button4->TabIndex = 27;
			this->button4->Text = L"Удалить";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(292, 358);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 46);
			this->button5->TabIndex = 26;
			this->button5->Text = L"Изменить";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(142, 358);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(100, 46);
			this->button6->TabIndex = 25;
			this->button6->Text = L"Добавить";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(436, 245);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 24;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(433, 229);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(33, 13);
			this->label6->TabIndex = 23;
			this->label6->Text = L"Стаж";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(292, 288);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 22;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(289, 272);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(52, 13);
			this->label7->TabIndex = 21;
			this->label7->Text = L"Телефон";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(292, 245);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 20;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(289, 229);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(32, 13);
			this->label8->TabIndex = 19;
			this->label8->Text = L"Email";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(142, 288);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 20);
			this->textBox9->TabIndex = 18;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(139, 272);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(49, 13);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Возраст";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(142, 245);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 20);
			this->textBox10->TabIndex = 16;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(139, 229);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(34, 13);
			this->label10->TabIndex = 15;
			this->label10->Text = L"ФИО";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(436, 288);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 20);
			this->textBox11->TabIndex = 29;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(433, 272);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(48, 13);
			this->label11->TabIndex = 28;
			this->label11->Text = L"Машина";
			// 
			// dataGridView3
			// 
			this->dataGridView3->AllowUserToAddRows = false;
			this->dataGridView3->AllowUserToDeleteRows = false;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->num_car,
					this->model_car
			});
			this->dataGridView3->Location = System::Drawing::Point(0, 0);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->ReadOnly = true;
			this->dataGridView3->Size = System::Drawing::Size(689, 211);
			this->dataGridView3->TabIndex = 0;
			// 
			// num_car
			// 
			this->num_car->HeaderText = L"Номер";
			this->num_car->Name = L"num_car";
			this->num_car->ReadOnly = true;
			this->num_car->Width = 200;
			// 
			// model_car
			// 
			this->model_car->HeaderText = L"Модель";
			this->model_car->Name = L"model_car";
			this->model_car->ReadOnly = true;
			this->model_car->Width = 200;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(436, 358);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(100, 46);
			this->button7->TabIndex = 30;
			this->button7->Text = L"Удалить";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(292, 358);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(100, 46);
			this->button8->TabIndex = 29;
			this->button8->Text = L"Изменить";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(142, 358);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(100, 46);
			this->button9->TabIndex = 28;
			this->button9->Text = L"Добавить";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(210, 275);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(41, 13);
			this->label12->TabIndex = 31;
			this->label12->Text = L"Номер";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(213, 291);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(100, 20);
			this->textBox12->TabIndex = 32;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(352, 291);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(100, 20);
			this->textBox13->TabIndex = 34;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(349, 275);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(46, 13);
			this->label13->TabIndex = 33;
			this->label13->Text = L"Модель";
			// 
			// dataGridView4
			// 
			this->dataGridView4->AllowUserToAddRows = false;
			this->dataGridView4->AllowUserToDeleteRows = false;
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->fio_g,
					this->time_g
			});
			this->dataGridView4->Location = System::Drawing::Point(0, 0);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->ReadOnly = true;
			this->dataGridView4->Size = System::Drawing::Size(689, 211);
			this->dataGridView4->TabIndex = 0;
			// 
			// fio_g
			// 
			this->fio_g->HeaderText = L"ФИО";
			this->fio_g->Name = L"fio_g";
			this->fio_g->ReadOnly = true;
			this->fio_g->Width = 200;
			// 
			// time_g
			// 
			this->time_g->HeaderText = L"Время экзамена";
			this->time_g->Name = L"time_g";
			this->time_g->ReadOnly = true;
			this->time_g->Width = 200;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(352, 291);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(100, 20);
			this->textBox14->TabIndex = 41;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(349, 275);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(46, 13);
			this->label14->TabIndex = 40;
			this->label14->Text = L"Модель";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(213, 291);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(100, 20);
			this->textBox15->TabIndex = 39;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(210, 275);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(41, 13);
			this->label15->TabIndex = 38;
			this->label15->Text = L"Номер";
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(436, 358);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(100, 46);
			this->button10->TabIndex = 37;
			this->button10->Text = L"Удалить";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(292, 358);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(100, 46);
			this->button11->TabIndex = 36;
			this->button11->Text = L"Изменить";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(142, 358);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(100, 46);
			this->button12->TabIndex = 35;
			this->button12->Text = L"Добавить";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// dataGridView5
			// 
			this->dataGridView5->AllowUserToAddRows = false;
			this->dataGridView5->AllowUserToDeleteRows = false;
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->fio_z_k,
					this->fio_z_i, this->type, this->car
			});
			this->dataGridView5->Location = System::Drawing::Point(0, 0);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->ReadOnly = true;
			this->dataGridView5->Size = System::Drawing::Size(689, 211);
			this->dataGridView5->TabIndex = 0;
			// 
			// fio_z_k
			// 
			this->fio_z_k->HeaderText = L"ФИО курсанта";
			this->fio_z_k->Name = L"fio_z_k";
			this->fio_z_k->ReadOnly = true;
			this->fio_z_k->Width = 200;
			// 
			// fio_z_i
			// 
			this->fio_z_i->HeaderText = L"ФИО инструктора";
			this->fio_z_i->Name = L"fio_z_i";
			this->fio_z_i->ReadOnly = true;
			this->fio_z_i->Width = 200;
			// 
			// type
			// 
			this->type->HeaderText = L"Тип занятия";
			this->type->Name = L"type";
			this->type->ReadOnly = true;
			// 
			// car
			// 
			this->car->HeaderText = L"Машина";
			this->car->Name = L"car";
			this->car->ReadOnly = true;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(169, 258);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 1;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(166, 242);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(83, 13);
			this->label16->TabIndex = 2;
			this->label16->Text = L"ФИО курсанта";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(166, 288);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(100, 13);
			this->label17->TabIndex = 4;
			this->label17->Text = L"ФИО инструктора";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(169, 304);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 3;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(361, 242);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(70, 13);
			this->label18->TabIndex = 6;
			this->label18->Text = L"Тип занятия";
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(364, 258);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(121, 21);
			this->comboBox3->TabIndex = 5;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(361, 288);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(48, 13);
			this->label19->TabIndex = 8;
			this->label19->Text = L"Машина";
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(364, 304);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(121, 21);
			this->comboBox4->TabIndex = 7;
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(436, 358);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(100, 46);
			this->button13->TabIndex = 17;
			this->button13->Text = L"Удалить";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(292, 358);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(100, 46);
			this->button14->TabIndex = 16;
			this->button14->Text = L"Изменить";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(142, 358);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(100, 46);
			this->button15->TabIndex = 15;
			this->button15->Text = L"Добавить";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(697, 447);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
