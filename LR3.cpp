#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <windows.h>
#include "cow.cpp"
#include "Food.cpp"
#include "List_cow.cpp"
using namespace std;


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    List_cow list_cow; Food food;
    food.Set("Сочень"); food.Set("Бублик");
    food.Set();
    for (int i = 0; i < 3; i++)
        list_cow.Add(food);
    list_cow.Print_list();

}
