#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include "cow.h"
#include "food.h"
#include "worker.h"
using namespace std;

int main()
{
    SetConsoleCP(1251); //задаем кодировку для вывода символов на экран
    SetConsoleOutputCP(1251); //задаем кодировку для ввода символов с клавиатуры в консоль
    cow cow1; list_cow sp_cow1;
    food food1; list_food sp_food1;
    worker worker1; list_worker sp_worker1;


    //СОТРУДНИКИ
    //Добавление нового сотрудника в список(3 новых сотрудника)
    for (int i = 0; i < 3; i++)
    {
        worker1.new_worker();
        sp_worker1.add(worker1);
    }
    sp_worker1.change_stat();
    sp_worker1.print_list(); //Печать списка с сотрудниками

    //КОРМА
    //Добавление нового корма в список(3 новых корма)
    for (int i = 0; i < 3; i++)
    {
        food1.new_food();
        sp_food1.add(food1);
    }
    sp_food1.print_list(); //Печать списка с кормами


    //КОРОВЫ
    //Добавление новой коровы в список(3 новых коровы)
    for (int i = 0; i < 3; i++)
    {
        cow1.new_cow(sp_food1);
        sp_cow1.add(cow1);
    }

    //sp_cow1.print_list(); //Печать списка с коровами
    sp_cow1.inc_age_sp(); //Увеличение возраста коровы на 1 год


    

    
}
