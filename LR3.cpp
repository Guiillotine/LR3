#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <windows.h>
#include "cow.cpp"
#include "Food.cpp"
#include "List_cow.cpp"
#include "cowshed.cpp"
using namespace std;


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    List_cow list_cow; Food food; 
    Warehouse warehouse1, warehouse2, warehouse3; Cowshed cowshed1, cowshed2;
    food.Set("Силос"); food.Set("Комбикорм"); food.Set("Солома"); food.Set("Свёкла");
    food.Set();
    /*for (int i = 0; i < 3; i++)
    list_cow.Add(food);
    list_cow.Print_list();*/







    //Демонстрация перегруженного оператора '++' (постфиксный вариант)
    /*cowshed1.Set(450, 500, 3);
    cout << "\n\n Коровник 1 до постфиксного инкремента: ";
    cowshed1.Print();
    cowshed2 = cowshed1++;
    cout << "\n\n Коровник 1 после постфиксного инкремента: ";
    cowshed1.Print();
    cout << "\n\n Коровник 2: ";
    cowshed2.Print();*/


    //Демонстрация перегруженного оператора '++' (префиксный вариант)
    /*cowshed1.Set(450, 500, 3);
    cout << "\n\n Коровник 1 до префиксного инкремента:";
    cowshed1.Print();
    ++cowshed1;
    cowshed2 = cowshed1;

    cout << "\n\n Коровник 1 после префиксного инкремента:";
    cowshed1.Print();
    cout << "\n\n Коровник 2:";
    cowshed2.Print();*/

    //Демонстрация перегруженного оператора '+'
    /*cout << "\n\n ДОБАВЛЕНИЕ КОРМОВ НА СКЛАД 1:";
    warehouse1.AddKorm(food);
    cout << "\n\n ДОБАВЛЕНИЕ КОРМОВ НА СКЛАД 2:";
    warehouse2.AddKorm(food); warehouse2.AddKorm(food);
    warehouse3 = warehouse1 + warehouse2;
    cout << "\n ИТОГО:\n\n СКЛАД 1";
    warehouse1.print();
    cout << "\n\n СКЛАД 2";
    warehouse2.print();
    cout << "\n\n СКЛАД 3";
    warehouse3.print();
    cout << "\n";*/
}
