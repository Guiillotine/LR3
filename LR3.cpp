#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include "cow.h"
#include "cow.cpp"
#include "food.h"
#include "food.cpp"
#include "worker.h"
#include "worker.cpp"
#include "warehouse.h"
#include "warehouse.cpp"
using namespace std;

int main()
{
    SetConsoleCP(1251); //задаем кодировку для вывода символов на экран
    SetConsoleOutputCP(1251); //задаем кодировку для ввода символов с клавиатуры в консоль
    cow cow1; list_cow sp_cow1;
    food food1; list_food sp_food1;
    worker worker1; list_worker sp_worker1;
    warehouse warehouse1; list_warehouse sp_warehouse1;

    //КОРМА
    //Добавление нового корма в список(3 новых корма)
    for (int i = 0; i < 3; i++)
    {
        food1.set_new_food();
        sp_food1.add(food1);
    }
    sp_food1.get_print_list(); //Печать списка с кормами


    //КОРОВЫ
    //Добавление новой коровы в список(3 новых коровы)
    for (int i = 0; i < 3; i++)
    {
        cow1.set_new_cow(sp_food1);
        sp_cow1.add(cow1);
    }

    //sp_cow1.get_print_list(); //Печать списка с коровами
    sp_cow1.inc_age_sp(); //Увеличение возраста коровы на 1 год
    
    //СОТРУДНИКИ
    //Добавление нового сотрудника в список(3 новых сотрудника)
    for (int i = 0; i < 3; i++)
    {
        worker1.set_new_worker();
        sp_worker1.add(worker1);
    }
    sp_worker1.change_stat();
    sp_worker1.get_print_list(); //Печать списка с сотрудниками

    //СКЛАДЫ
    //Добавление нового склада в список(3 новых склада)
    for (int i = 0; i < 3; i++)
    {
        warehouse1.set_new_warehouse();
        sp_warehouse1.add(warehouse1);
    }
    sp_warehouse1.get_print_list(); //Печать списка со складами
    sp_warehouse1.sell(); //Продажа склада
    sp_warehouse1.get_print_list();
}
