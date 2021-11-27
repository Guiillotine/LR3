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
#include "building.cpp"
using namespace std;


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Food food; 
    //food.Add("Силос"); food.Add("Комбикорм"); food.Add("Солома"); food.Add("Свёкла");
    Building building;
    cin >> building;
    cout << building;
    Garage garage;
    garage = building;
    /*building.Set(60, 15, 8, 2);
    garage.Set(20, 10, 4, 1, 25);*/
    //building.Print();
    //cout << "\n";
    garage.Print();
    /*cout << "\n\n Площадь этажа здания равна " << building.GetFloorS();
    cout << "\n Площадь гаража равна " << garage.GetFloorS();*/


    cout << "\n";
}
