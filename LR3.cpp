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
    Food food; Warehouse warehouse;
    List_cow list_cow1;
    //List_cow list_cow2(2); 
    //cout << " \n Количество больных коров на ферме = " << list_cow2.GetIllCow();
    //List_cow list_cow3(2, " ", "Черно-пёстрая", 6, 450, 6);
    //list_cow3.Print_list();


    cout << "\n";
    food.Set("Силос"); food.Set("Комбикорм"); food.Set("Солома"); food.Set("Свёкла");
    /*for (int i = 0; i < 3; i++)
    list_cow.Add(food);
    list_cow.Print_list();*/

}
