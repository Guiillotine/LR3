#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <windows.h>
#include "cow.cpp"
#include "food.cpp"
#include "List_cow.cpp"
#include "cowshed.cpp"
using namespace std;


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Food food; 
    food.Add("Силос"); food.Add("Комбикорм"); food.Add("Солома"); food.Add("Свёкла");
    List_cow list_cow;
    for (int i = 0; i < 3; i++) list_cow.Add(food);
    list_cow.Print_list();
 /* for (int i = 0; i < 3; i++) list_cow.Add(food);
    list_cow.PrintArrKorovnik();
    cout << "\n Информация о корове, находящейся в стоиле во 2 ряду на 3 месте:\n";
    list_cow.GetCow(2,3).Print_cow();*/
    cout << "\n";
}
