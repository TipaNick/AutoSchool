#include "MyForm.h"

#include <Windows.h>
#include <string>

using namespace Project1; // Название проекта
using namespace System;
using namespace System::Windows::Forms;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew MyForm);
    return 0;
}

struct kursant {
    wchar_t fio[150];
    int age;
    wchar_t email[50];
    wchar_t phone[50];
    wchar_t category[50];
} ks[50];


///русский 



struct instructor {
    wchar_t fio[150];
    int age;
    wchar_t email[50];
    wchar_t phone[50];
    int exp;
} ins[50];

struct car
{
    wchar_t model[50];
    wchar_t num[50];
} cr[50];

struct record {
    instructor y;
    wchar_t fio_k[150];
    wchar_t fio_p[150];
    wchar_t type[50];
    wchar_t time[50];
    wchar_t car_num[50];
} rec[50];

struct GIBDD {
    wchar_t fio_s[150];
    wchar_t time[50];
} gd[50];

int n_k = 4;
int n_i = 2;
int n_c = 2;
int n_g = 1;
int n_z = 0;

System::Void Project1::MyForm::constr() {
    //Добавим курсантов
    wcscpy(ks[0].fio, L"В.А.Смирнов");
    ks[0].age = 16;
    wcscpy(ks[0].email, L"vas@mail.ru");
    wcscpy(ks[0].phone, L"+79135478586");
    wcscpy(ks[0].category, L"Б");
    dataGridView1->Rows->Add();
    for (int i = 0; i < wcslen(ks[0].fio); i++)
    {
        dataGridView1[0, 0]->Value += Convert::ToString(ks[0].fio[i]);
    }
    dataGridView1[1, 0]->Value = Convert::ToString(ks[0].age);
    for (int i = 0; i < wcslen(ks[0].email); i++)
    {
        dataGridView1[2, 0]->Value += Convert::ToString(ks[0].email[i]);
    }
    for (int i = 0; i < wcslen(ks[0].phone); i++)
    {
        dataGridView1[3, 0]->Value += Convert::ToString(ks[0].phone[i]);
    }
    for (int i = 0; i < wcslen(ks[0].category); i++)
    {
        dataGridView1[4, 0]->Value += Convert::ToString(ks[0].category[i]);
    }


    wcscpy(ks[1].fio, L"Б.Е.Ворунов");
    ks[1].age = 18;
    wcscpy(ks[1].email, L"bev@mail.ru");
    wcscpy(ks[1].phone, L"+79232135489");
    wcscpy(ks[1].category, L"Б");
    dataGridView1->Rows->Add();
    for (int i = 0; i < wcslen(ks[1].fio); i++)
    {
        dataGridView1[0, 1]->Value += Convert::ToString(ks[1].fio[i]);
    }
    dataGridView1[1, 1]->Value = Convert::ToString(ks[1].age);
    for (int i = 0; i < wcslen(ks[1].email); i++)
    {
        dataGridView1[2, 1]->Value += Convert::ToString(ks[1].email[i]);
    }
    for (int i = 0; i < wcslen(ks[1].phone); i++)
    {
        dataGridView1[3, 1]->Value += Convert::ToString(ks[1].phone[i]);
    }
    for (int i = 0; i < wcslen(ks[1].category); i++)
    {
        dataGridView1[4, 1]->Value += Convert::ToString(ks[1].category[i]);
    }


    wcscpy(ks[2].fio, L"Д.Е.Сонин");
    ks[2].age = 17;
    wcscpy(ks[2].email, L"des@mail.ru");
    wcscpy(ks[2].phone, L"+79235498476");
    wcscpy(ks[2].category, L"Б");
    dataGridView1->Rows->Add();
    for (int i = 0; i < wcslen(ks[2].fio); i++)
    {
        dataGridView1[0, 2]->Value += Convert::ToString(ks[2].fio[i]);
    }
    dataGridView1[1, 2]->Value = Convert::ToString(ks[2].age);
    for (int i = 0; i < wcslen(ks[2].email); i++)
    {
        dataGridView1[2, 2]->Value += Convert::ToString(ks[2].email[i]);
    }
    for (int i = 0; i < wcslen(ks[2].phone); i++)
    {
        dataGridView1[3, 2]->Value += Convert::ToString(ks[2].phone[i]);
    }
    for (int i = 0; i < wcslen(ks[2].category); i++)
    {
        dataGridView1[4, 2]->Value += Convert::ToString(ks[2].category[i]);
    }


    wcscpy(ks[3].fio, L"Г.У.Прытко");
    ks[3].age = 20;
    wcscpy(ks[3].email, L"gup@mail.ru");
    wcscpy(ks[3].phone, L"+79135487898");
    wcscpy(ks[3].category, L"Б");
    dataGridView1->Rows->Add();
    for (int i = 0; i < wcslen(ks[3].fio); i++)
    {
        dataGridView1[0, 3]->Value += Convert::ToString(ks[3].fio[i]);
    }
    dataGridView1[1, 3]->Value = Convert::ToString(ks[3].age);
    for (int i = 0; i < wcslen(ks[3].email); i++)
    {
        dataGridView1[2, 3]->Value += Convert::ToString(ks[3].email[i]);
    }
    for (int i = 0; i < wcslen(ks[3].phone); i++)
    {
        dataGridView1[3, 3]->Value += Convert::ToString(ks[3].phone[i]);
    }
    for (int i = 0; i < wcslen(ks[3].category); i++)
    {
        dataGridView1[4, 3]->Value += Convert::ToString(ks[3].category[i]);
    }

    //Добавим инструкторов
    wcscpy(ins[0].fio, L"П.Р.Воронков");
    ins[0].age = 40;
    wcscpy(ins[0].email, L"prv@mail.ru");
    wcscpy(ins[0].phone, L"+79135468564");
    ins[0].exp = 10;
    dataGridView2->Rows->Add();
    for (int i = 0; i < wcslen(ins[0].fio); i++)
    {
        dataGridView2[0, 0]->Value += Convert::ToString(ins[0].fio[i]);
    }
    dataGridView2[1, 0]->Value += Convert::ToString(ins[0].age);
    for (int i = 0; i < wcslen(ins[0].email); i++)
    {
        dataGridView2[2, 0]->Value += Convert::ToString(ins[0].email[i]);
    }
    for (int i = 0; i < wcslen(ins[0].phone); i++)
    {
        dataGridView2[3, 0]->Value += Convert::ToString(ins[0].phone[i]);
    }
    dataGridView2[4, 0]->Value += Convert::ToString(ins[0].exp);


    wcscpy(ins[1].fio, L"Н.О.Далеков");
    ins[1].age = 39;
    wcscpy(ins[1].email, L"nod@mail.ru");
    wcscpy(ins[1].phone, L"+79135489532");
    ins[1].exp = 7;
    dataGridView2->Rows->Add();
    for (int i = 0; i < wcslen(ins[1].fio); i++)
    {
        dataGridView2[0, 1]->Value += Convert::ToString(ins[1].fio[i]);
    }
    dataGridView2[1, 1]->Value += Convert::ToString(ins[1].age);
    for (int i = 0; i < wcslen(ins[1].email); i++)
    {
        dataGridView2[2, 1]->Value += Convert::ToString(ins[1].email[i]);
    }
    for (int i = 0; i < wcslen(ins[1].phone); i++)
    {
        dataGridView2[3, 1]->Value += Convert::ToString(ins[1].phone[i]);
    }
    dataGridView2[4, 1]->Value += Convert::ToString(ins[1].exp);

    //Добавим машины
    wcscpy(cr[0].num, L"П123ОН 122");
    wcscpy(cr[0].model, L"Subaru Legacy");
    dataGridView3->Rows->Add();
    for (int i = 0; i < wcslen(cr[0].num); i++)
    {
        dataGridView3[0, 0]->Value += Convert::ToString(cr[0].num[i]);
    }
    for (int i = 0; i < wcslen(cr[0].model); i++)
    {
        dataGridView3[1, 0]->Value += Convert::ToString(cr[0].model[i]);
    }


    wcscpy(cr[1].num, L"Р521НО 122");
    wcscpy(cr[1].model, L"Subaru Legacy");
    dataGridView3->Rows->Add();
    for (int i = 0; i < wcslen(cr[1].num); i++)
    {
        dataGridView3[0, 1]->Value += Convert::ToString(cr[1].num[i]);
    }
    for (int i = 0; i < wcslen(cr[1].model); i++)
    {
        dataGridView3[1, 1]->Value += Convert::ToString(cr[1].model[i]);
    }

    //Добавим ГИБДД
    wcscpy(gd[0].fio_s, L"П.Е.Порик");
    wcscpy(gd[0].time, L"12.09.2021");
    dataGridView4->Rows->Add();
    for (int i = 0; i < wcslen(gd[0].fio_s); i++)
    {
        dataGridView4[0, 0]->Value += Convert::ToString(gd[0].fio_s[i]);
    }
    for (int i = 0; i < wcslen(gd[0].time); i++)
    {
        dataGridView4[1, 0]->Value += Convert::ToString(gd[0].time[i]);
    }
    draw_combo();
};

System::Void Project1::MyForm::draw_combo() {
    //Очистим КомбоБоксы
    comboBox1->Items->Clear();
    comboBox2->Items->Clear();
    comboBox3->Items->Clear();
    comboBox4->Items->Clear();
    //Добавим в КомбоБоксы
    for (int i = 0; i < n_k; i++)
    {
        String^ temp;
        for (int j = 0; j < wcslen(ks[i].fio); j++)
        {
            temp += ks[i].fio[j];
        }
        comboBox1->Items->Add(temp);
    }
    for (int i = 0; i < n_i; i++)
    {
        String^ temp;
        for (int j = 0; j < wcslen(ins[i].fio); j++)
        {
            temp += ins[i].fio[j];
        }
        comboBox2->Items->Add(temp);
    }
    comboBox3->Items->Add("Практика");
    comboBox3->Items->Add("Экзамен");
    for (int i = 0; i < n_c; i++)
    {
        String^ temp;
        for (int j = 0; j < wcslen(cr[i].num); j++)
        {
            temp += cr[i].num[j];
        }
        comboBox4->Items->Add(temp);
    }
}

System::Void Project1::MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e)
{
    constr();
}

//Кнопка добавить в "Запись"
System::Void Project1::MyForm::button15_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (comboBox1->Text == "" || comboBox2->Text == "" || comboBox3->Text == "" || comboBox4->Text == "")
    {
        MessageBox::Show("Запоните все поля", "Ошибка");
    }
    else {
        String^ temp = comboBox1->Text;
        for (int i = 0; i < temp->Length; i++)
        {
            rec[n_z].fio_k[i] += temp[i];
        }
        temp = comboBox2->Text;
        for (int i = 0; i < temp->Length; i++)
        {
            rec[n_z].fio_p[i] += temp[i];
        }
        temp = comboBox3->Text;
        for (int i = 0; i < temp->Length; i++)
        {
            rec[n_z].type[i] += temp[i];
        }
        temp = dateTimePicker1->Value.ToShortDateString();
        for (int i = 0; i < temp->Length; i++)
        {
            rec[n_z].time[i] += temp[i];
        }
        temp = comboBox4->Text;
        for (int i = 0; i < temp->Length; i++)
        {
            rec[n_z].car_num[i] += temp[i];
        }

        dataGridView5->Rows->Add();
        dataGridView5[0, n_z]->Value = comboBox1->Text;
        dataGridView5[1, n_z]->Value = comboBox2->Text;
        dataGridView5[2, n_z]->Value = comboBox3->Text;
        dataGridView5[3, n_z]->Value = Convert::ToString(dateTimePicker1->Value.ToShortDateString());
        dataGridView5[4, n_z]->Value = comboBox4->Text;
        n_z++;
    }
}
//Кнопка добавить в "Курсант"
System::Void Project1::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (textBox1->Text == "" || textBox2->Text == "" || textBox3->Text == "" || textBox4->Text == "" || textBox5->Text == "")
    {
        MessageBox::Show("Запоните все поля", "Ошибка");
    }
    else {
        String^ temp = textBox1->Text;
        for (int i = 0; i < temp->Length; i++)
        {
            ks[n_k].fio[i] += temp[i];
        }
        
        ks[n_k].age = Convert::ToInt32(textBox2->Text);

        temp = textBox3->Text;
        for (int i = 0; i < temp->Length; i++)
        {
            ks[n_k].email[i] += temp[i];
        }
        temp = textBox4->Text;
        for (int i = 0; i < temp->Length; i++)
        {
            ks[n_k].phone[i] += temp[i];
        }
        temp = textBox5->Text;
        for (int i = 0; i < temp->Length; i++)
        {
            ks[n_k].category[i] += temp[i];
        }


        dataGridView1->Rows->Add();
        dataGridView1[0, n_k]->Value = textBox1->Text;
        dataGridView1[1, n_k]->Value = textBox2->Text;
        dataGridView1[2, n_k]->Value = textBox3->Text;
        dataGridView1[3, n_k]->Value = textBox4->Text;
        dataGridView1[4, n_k]->Value = textBox5->Text;
        n_k++;
        draw_combo();
    }
}
//Кнопка добавить в "Инструктор"
System::Void Project1::MyForm::button6_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (textBox10->Text == "" || textBox9->Text == "" || textBox8->Text == "" || textBox7->Text == "" || textBox6->Text == "")
    {
        MessageBox::Show("Запоните все поля", "Ошибка");
    }
    else {
        String^ temp = textBox10->Text;
        for (int i = 0; i < temp->Length; i++)
        {
            ins[n_i].fio[i] += temp[i];
        }

        ins[n_i].age = Convert::ToInt32(textBox9->Text);

        temp = textBox8->Text;
        for (int i = 0; i < temp->Length; i++)
        {
            ins[n_i].email[i] += temp[i];
        }
        temp = textBox7->Text;
        for (int i = 0; i < temp->Length; i++)
        {
            ins[n_i].phone[i] += temp[i];
        }
        ins[n_i].exp = Convert::ToInt32(textBox6->Text);


        dataGridView2->Rows->Add();
        dataGridView2[0, n_i]->Value = textBox10->Text;
        dataGridView2[1, n_i]->Value = textBox9->Text;
        dataGridView2[2, n_i]->Value = textBox8->Text;
        dataGridView2[3, n_i]->Value = textBox7->Text;
        dataGridView2[4, n_i]->Value = textBox6->Text;
        n_i++;
        draw_combo();
    }
}
//Кнопка добавить в "Машина"
System::Void Project1::MyForm::button9_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (textBox12->Text == "" || textBox13->Text == "")
    {
        MessageBox::Show("Введите все поля", "Ошибка");
    }
    else {
        String^ temp;
        temp = textBox12->Text;
        for (int i = 0; i < temp->Length; i++)
        {
            cr[n_c].num[i] += temp[i];
        }
        temp = textBox13->Text;
        for (int i = 0; i < temp->Length; i++)
        {
            cr[n_c].model[i] += temp[i];
        }
        dataGridView3[0, n_c]->Value = textBox12->Text;
        dataGridView3[1, n_c]->Value = textBox13->Text;
        n_c++;
        draw_combo();
    }
}
//Кнопка добавить в "ГИБДД"
System::Void Project1::MyForm::button12_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (textBox15->Text == "" || textBox14->Text == "")
    {
        MessageBox::Show("Введите все поля", "Ошибка");
    }
    else {
        String^ temp;
        temp = textBox15->Text;
        for (int i = 0; i < temp->Length; i++)
        {
            gd[n_g].fio_s[i] += temp[i];
        }
        temp = textBox14->Text;
        for (int i = 0; i < temp->Length; i++)
        {
            gd[n_g].time[i] += temp[i];
        }
        dataGridView3[0, n_g]->Value = textBox15->Text;
        dataGridView3[1, n_g]->Value = textBox14->Text;
        n_g++;
        draw_combo();
    }
}
//Кнопка удалить в "Записи"
System::Void Project1::MyForm::button13_Click(System::Object^ sender, System::EventArgs^ e)
{
    int num = dataGridView5->CurrentCell->RowIndex;
    for (int i = num; i <= n_z - 1; i++)
    {
        rec[i] = rec[i + 1];
    }
    n_z--;
    dataGridView5->Rows->Clear();
    for (int i = 0; i < n_z; i++)
    {
        dataGridView5->Rows->Add();
        for (int y = 0; y < wcslen(rec[i].fio_k); y++)
        {
            dataGridView5[0, i]->Value += Convert::ToString(rec[i].fio_k[y]);
        }
        for (int y = 0; y < wcslen(rec[i].fio_p); y++)
        {
            dataGridView5[1, i]->Value += Convert::ToString(rec[i].fio_p[y]);
        }
        for (int y = 0; y < wcslen(rec[i].type); y++)
        {
            dataGridView5[2, i]->Value += Convert::ToString(rec[i].type[y]);
        }
        for (int y = 0; y < wcslen(rec[i].time); y++)
        {
            dataGridView5[3, i]->Value += Convert::ToString(rec[i].time[y]);
        }
        for (int y = 0; y < wcslen(rec[i].car_num); y++)
        {
            dataGridView5[4, i]->Value += Convert::ToString(rec[i].car_num[y]);
        }
    }
}
//Кнопка удалить в "Курсант"
System::Void Project1::MyForm::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
    int num = dataGridView1->CurrentCell->RowIndex;
    for (int i = num; i <= n_k - 1; i++)
    {
        ks[i] = ks[i + 1];
    }
    n_k--;
    dataGridView1->Rows->Clear();
    for (int i = 0; i < n_k; i++)
    {
        dataGridView1->Rows->Add();
        for (int y = 0; y < wcslen(ks[i].fio); y++)
        {
            dataGridView1[0, i]->Value += Convert::ToString(ks[i].fio[y]);
        }
        dataGridView1[1, i]->Value = Convert::ToString(ks[i].age);
        for (int y = 0; y < wcslen(ks[i].email); y++)
        {
            dataGridView1[2, i]->Value += Convert::ToString(ks[i].email[y]);
        }
        for (int y = 0; y < wcslen(ks[i].phone); y++)
        {
            dataGridView1[3, i]->Value += Convert::ToString(ks[i].phone[y]);
        }
        for (int y = 0; y < wcslen(ks[i].category); y++)
        {
            dataGridView1[4, i]->Value += Convert::ToString(ks[i].category[y]);
        }
    }
    draw_combo();
}
//Кнопка удалить в "Инструктор"
System::Void Project1::MyForm::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
    int num = dataGridView2->CurrentCell->RowIndex;
    for (int i = num; i <= n_i - 1; i++)
    {
        ins[i] = ins[i + 1];
    }
    n_i--;
    dataGridView2->Rows->Clear();
    for (int i = 0; i < n_i; i++)
    {
        dataGridView2->Rows->Add();
        for (int y = 0; y < wcslen(ins[i].fio); y++)
        {
            dataGridView2[0, i]->Value += Convert::ToString(ins[i].fio[y]);
        }
        dataGridView2[1, i]->Value = Convert::ToString(ins[i].age);
        for (int y = 0; y < wcslen(ins[i].email); y++)
        {
            dataGridView2[2, i]->Value += Convert::ToString(ins[i].email[y]);
        }
        for (int y = 0; y < wcslen(ins[i].phone); y++)
        {
            dataGridView2[3, i]->Value += Convert::ToString(ins[i].phone[y]);
        }
        dataGridView2[3, i]->Value = Convert::ToString(ins[i].exp);
    }
    draw_combo();
}
//Кнопка удалить в "Машины"
System::Void Project1::MyForm::button7_Click(System::Object^ sender, System::EventArgs^ e)
{
    int num = dataGridView3->CurrentCell->RowIndex;
    for (int i = num; i <= n_c - 1; i++)
    {
        cr[i] = cr[i + 1];
    }
    n_c--;
    dataGridView3->Rows->Clear();
    for (int i = 0; i < n_c; i++)
    {
        dataGridView3->Rows->Add();
        for (int y = 0; y < wcslen(cr[i].num); y++)
        {
            dataGridView3[0, i]->Value += Convert::ToString(cr[i].num[y]);
        }
        for (int y = 0; y < wcslen(cr[i].model); y++)
        {
            dataGridView3[1, i]->Value += Convert::ToString(cr[i].model[y]);
        }
    }
    draw_combo();
}
//Кнопка удалить в "ГИБДД"
System::Void Project1::MyForm::button10_Click(System::Object^ sender, System::EventArgs^ e)
{
    int num = dataGridView4->CurrentCell->RowIndex;
    for (int i = num; i <= n_g - 1; i++)
    {
        gd[i] = gd[i + 1];
    }
    n_g--;
    dataGridView4->Rows->Clear();
    for (int i = 0; i < n_g; i++)
    {
        dataGridView4->Rows->Add();
        for (int y = 0; y < wcslen(gd[i].fio_s); y++)
        {
            dataGridView4[0, i]->Value += Convert::ToString(gd[i].fio_s[y]);
        }
        for (int y = 0; y < wcslen(gd[i].time); y++)
        {
            dataGridView4[1, i]->Value += Convert::ToString(gd[i].time[y]);
        }
    }
    draw_combo();
}


