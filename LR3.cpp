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
    int illCow = 0; int meatCow = 0;
    List_cow list_cow; Food food;
    Warehouse warehouse; 

    Cowshed cowshed1;
    cout << "\n Количество коровников на ферме: " << Cowshed::GetKolVo();

    Cowshed cowshed2, cowshed3;
    cout << "\n\n *Добавлено два коровника*\n";
    cout << "\n Количество коровников на ферме: " << Cowshed::GetKolVo();

    cout << "\n";
    food.Set("Силос"); food.Set("Комбикорм"); food.Set("Солома"); food.Set("Свёкла");
    /*for (int i = 0; i < 3; i++)
    list_cow.Add(food);
    list_cow.Print_list();*/

}
