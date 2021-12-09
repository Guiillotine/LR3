﻿#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <windows.h>
#include "cow.cpp"
#include "food.cpp"
#include "List_cow.cpp"
#include "cowshed.cpp"
#include "building.cpp"
#include "worker.cpp"
#include "compare.cpp"
using namespace std;


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Food food; 

    Cleaner cleaner1("Иванов", "Иван", 60, 'М', 22000);
    cout << "\n РАБОТНИК 1:\n";
    cleaner1.Print(); cout << "\n";
    Cleaner cleaner2("Бучнев", "Алексей", 42, 'М', 20000);
    cout << "\n РАБОТНИК 2:\n";
    cleaner2.Print(); cout << "\n";
    Compare<Cleaner> A;
    cout << "\n Работник с наибольшим окладом:\n";
    A.Max(cleaner1, cleaner2).Print();
    cout << "\n\n Работник с наименьшим окладом:\n";
    A.Min(cleaner1, cleaner2).Print();
    
    Garage garage1(20, 15, 3, 1, 15);
    cout << "\n\n\n ГАРАЖ 1:\n";
    garage1.Print();
    Garage garage2(25, 20, 3, 1, 20);
    cout << "\n\n ГАРАЖ 2:\n";
    garage2.Print(); cout << "\n";
    Compare<Garage> B;
    cout << "\n Гараж с наибольшей площадью:\n";
    B.Max(garage1, garage2).Print();
    cout << "\n\n Гараж с наименьшей площадью:\n";
    B.Min(garage1, garage2).Print();
    cout << "\n";

    /*Admin admin("Сидорова", "Ольга", 42, 'Ж', 25000);
    admin.Print();
    cout << "\n\n Зарплата администратора: " << admin.ZarPlat() << " р.\n\n";
    Director director("Бучнев", "Алексей", 42, 'М', 60000, 60);
    director.Print();
    cout << "\n\n Зарплата директора: " << director.ZarPlat() << " р.\n\n";*/
    

    //food.Add("Силос"); food.Add("Комбикорм"); food.Add("Солома"); food.Add("Свёкла");
    cout << "\n";
}
