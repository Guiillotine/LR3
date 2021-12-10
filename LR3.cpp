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

bool SortS(Garage g1, Garage g2)
{
    if (g1.GetFloorS() < g2.GetFloorS()) return true;
    else return false;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    vector <Garage> GarageList;
    Garage garage1(15, 15, 2, 1, 10), garage2(20, 25, 3, 1, 20);
    Garage garage3(10, 15, 3, 1, 12), garage4(20, 15, 3, 1, 15), garage5(10, 10, 2, 1, 5);
    GarageList.clear();
    GarageList.push_back(garage1); GarageList.push_back(garage2);
    GarageList.push_back(garage3); GarageList.push_back(garage4); GarageList.push_back(garage5);
    cout << "\n СОРТИРОВКА ГАРАЖЕЙ ПО ВОЗРАСТАНИЮ ПЛОЩАДИ\n\n СПИСОК ГАРАЖЕЙ ДО СОРТИРОВКИ:\n";
    for (int i = 0; i < 5; i++) { GarageList[i].Print(); cout << "\n"; }
    sort(GarageList.begin(), GarageList.end(), SortS);
    cout << "\n СПИСОК ГАРАЖЕЙ ПОСЛЕ СОРТИРОВКИ:\n";
    for (int i = 0; i < 5; i++) { GarageList[i].Print(); cout << "\n"; }

    //Food food; food.Add("Силос"); food.Add("Комбикорм"); food.Add("Солома"); food.Add("Свёкла");
    cout << "\n";
}
