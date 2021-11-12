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
    food1.Set("Силос"); food1.Set("Комбикорм"); food1.Set("Солома"); food1.Set("Свёкла");
    cout << "\n СОДЕРЖИМОЕ СПИСКА КОРМОВ 1:";
    food1.Print();
    Food food2(food1);
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
    //cout << "\n";


    /*bool a[10];
    for (int i = 0; i < 10; i++) 
    {
        cout << "\n Место № " << (i + 1) << "\n Введите 1, чтобы обозначить, что место занято коровой\n 0 - если место свободно : "; cin >> a[i];
    }
    Cowshed cowshed(a);
    cowshed.PrintZanyatMest();*/

    /*Cowshed cowshed1;
    Cowshed cowshed2(100);
    Cowshed cowshed3(300, 300, 5);
    cout << "\n Количество коровников на ферме: " << Cowshed::GetKolVo();*/
    //List_cow list_cow1;
    //list_cow1.Print_list();
    //List_cow list_cow2(2); 
    //cout << " \n Количество больных коров на ферме = " << list_cow2.GetIllCow();
    //List_cow list_cow3(2, " ", "Черно-пёстрая", 6, 450, 6);
    //list_cow3.Print_list();

    /*for (int i = 0; i < 3; i++)
    list_cow.Add(food);
    list_cow.Print_list();*/


}
