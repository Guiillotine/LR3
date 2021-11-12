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
    Food food1;
    food1.Add("Силос"); food1.Add("Комбикорм"); food1.Add("Солома"); food1.Add("Свёкла");
    cout << "\n СОДЕРЖИМОЕ СПИСКА КОРМОВ 1:";
    food1.Print();
    Food food2;
    food2 = food1;
    cout << "\n *присвоение списка 1 списку 2*\n";
    cout << "\n СОДЕРЖИМОЕ СПИСКА КОРМОВ 1:";
    food1.Print();
    cout << "\n СОДЕРЖИМОЕ СПИСКА КОРМОВ 2:";
    food2.Print();
    food2.ChangeFood(1,"Морковь");
    cout << "\n *В списке 2 первый корм изменён*\n";
    cout << "\n СОДЕРЖИМОЕ СПИСКА КОРМОВ 1:";
    food1.Print();
    cout << "\n СОДЕРЖИМОЕ СПИСКА КОРМОВ 2:";
    food2.Print();

}
