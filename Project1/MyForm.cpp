#include "MyForm.h"

#include <Windows.h>
#include <fstream>
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
};

System::Void Project1::MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e)
{
    constr();
}
