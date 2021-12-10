#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <windows.h>
#include <vector>
#include <algorithm>
#include "cow.cpp"
#include "food.cpp"
#include "List_cow.cpp"
#include "cowshed.cpp"
#include "building.cpp"
#include "worker.cpp"
#include "compare.cpp"

using namespace std;

bool cmd(Garage g1, Garage g2)
{
    if (g1.GetFloorS() < g2.GetFloorS()) return true;
    else return false;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);



    
    Garage garage1(20, 15, 3, 1, 15);
    cout << "\n\n\n ГАРАЖ 1:\n";
    garage1.Print();
    Garage garage2(25, 20, 3, 1, 20);
    cout << "\n\n ГАРАЖ 2:\n";
    garage2.Print(); cout << "\n";
    Compare<Garage> B;
    cout << "\n Гараж с большей площадью:\n";
    if (B.Max(garage1, garage2)) garage1.Print(); else garage2.Print();
    cout << "\n\n Гараж с меньшей площадью:\n";
    if (B.Min(garage1, garage2)) garage1.Print(); else garage2.Print();
    cout << "\n";
    

    //Food food; food.Add("Силос"); food.Add("Комбикорм"); food.Add("Солома"); food.Add("Свёкла");
    cout << "\n";
}
