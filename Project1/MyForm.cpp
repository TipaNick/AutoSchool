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
    wchar_t car[50];
};

struct car
{
    wchar_t model[50];
    wchar_t num[50];
};

struct record {
    wchar_t fio_k[150];
    wchar_t fio_p[150];
    wchar_t type[50];
    wchar_t time[50];
    wchar_t car_num[50];
};

struct GIBDD {
    wchar_t fio_s[150];
    wchar_t time[50];
};

int n_k = 4;

System::Void Project1::MyForm::constr() {
    //Добавим курсантов
    wcscpy(ks[0].fio, L"В.А.Смирнов");
    ks[0].age = 18;
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


};

System::Void Project1::MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e)
{
    constr();
    
}
