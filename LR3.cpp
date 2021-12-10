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

bool SortS(Building *b1, Building *b2)
{
    if (b1->GetFloorS() < b2->GetFloorS()) return true;
    else return false;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    vector <Building*> BuildingList;
    vector<Building*>::iterator  ib;
    Garage *garage1 = new Garage(15, 15, 2, 1, 10), *garage2 = new Garage(20, 25, 3, 1, 20), *garage3 = new Garage(20, 15, 3, 1, 15);
    Building *building1 = new Building(50, 50, 6, 2), *building2 = new Building(30, 45, 9, 3);
    BuildingList.clear();
    BuildingList.push_back(garage1); BuildingList.push_back(building1);
    BuildingList.push_back(garage2); BuildingList.push_back(building2); BuildingList.push_back(garage3);
    cout << "\n СОРТИРОВКА ЗДАНИЙ ПО ВОЗРАСТАНИЮ ПЛОЩАДИ\n\n СПИСОК ЗДАНИЙ ДО СОРТИРОВКИ:\n";
    for (ib = BuildingList.begin(); ib != BuildingList.end(); ++ib) { (*ib)->Print(); cout << "\n"; }
    sort(BuildingList.begin(), BuildingList.end(), SortS);
    cout << "\n СПИСОК ЗДАНИЙ ПОСЛЕ СОРТИРОВКИ:\n";
    for (ib = BuildingList.begin(); ib != BuildingList.end(); ++ib) { (*ib)->Print(); cout << "\n"; }


    //Food food; food.Add("Силос"); food.Add("Комбикорм"); food.Add("Солома"); food.Add("Свёкла");
    cout << "\n";
}
