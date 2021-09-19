#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include "LR3.h"
using namespace std;

int main()
{
    SetConsoleCP(1251); //задаем кодировку для вывода символов на экран
    SetConsoleOutputCP(1251); //задаем кодировку для ввода символов с клавиатуры в консоль
    cow cow1;
    list_cow sp_cow1;

    for (int i = 0; i < 4; i++)
    {
        cow1.new_cow();
        sp_cow1.add(cow1);
    }

    //sp_cow1.print_list(); 
    sp_cow1.inc_age_sp();
}
