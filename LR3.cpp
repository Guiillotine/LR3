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
#include "worker.cpp"
using namespace std;


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Food food; 

    Cleaner cleaner("Иванов", "Иван", 60, 'М', 20000);
 
    

//food.Add("Силос"); food.Add("Комбикорм"); food.Add("Солома"); food.Add("Свёкла");
//Building building;
//cout << building;
//cout << garage;
//Building building(60, 15, 8, 2);
//Garage garage(20, 10, 4, 1, 25);

    /*cout << "\n\n Площадь этажа здания равна " << building.GetFloorS();
    cout << "\n Площадь гаража равна " << garage.GetFloorS();*/


    cout << "\n";
}
