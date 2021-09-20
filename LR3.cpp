#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include "cow.h"
#include "food.h"
using namespace std;

int main()
{
    SetConsoleCP(1251); //задаем кодировку для вывода символов на экран
    SetConsoleOutputCP(1251); //задаем кодировку для ввода символов с клавиатуры в консоль
    cow cow1;
    food food1;
    list_cow sp_cow1;

    food1.new_food();
    food1.print_food();

    //Добавление новой коровы в список(4 новых коровы)
    for (int i = 0; i < 4; i++)
    {
        cow1.new_cow();
        sp_cow1.add(cow1);
    }

    //sp_cow1.print_list(); 
    //Увеличение возраста коровы на 1 год
    sp_cow1.inc_age_sp();
}
