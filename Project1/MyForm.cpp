#include "MyForm.h"

#include <Windows.h>
#include <fstream>
#include <string>

using namespace Project1; // Название проекта

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
};

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