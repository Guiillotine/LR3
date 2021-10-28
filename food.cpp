﻿#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <string>
using namespace std;

class Warehouse;
class Food;

class Warehouse
{
public:
    void AddKorm(Food& spisKorm);

private:
    int kolVo = 0;
    string KormSklad[100];
};

class Food
{
public:
    void Set(string name)
    {
        this->arr_food[kolVoKorm] = name;
        this->kolVoKorm++;
    }
    void Set() //Функция инициализации элементов данных
    {
        cout << "\n Добавление нового корма\n\n Введите название корма: ";
        cin >> arr_food[kolVoKorm];
        kolVoKorm++;
    }
    int GetKolVo() //Возвращает количество кормов в списке
    {
        return (kolVoKorm);
    }
    string FoodName(int k) //Возвращает название корма
    {
        return (arr_food[k]);
    }
    friend void Warehouse::AddKorm(Food& food);
private:
    string* arr_food = new string[10];
    int kolVoKorm = 0;
};

void Warehouse::AddKorm(Food& spisKorm)
{
    int num;
    cout << "\n Список кормов:\n";
    for (int i = 0; i < spisKorm.kolVoKorm; i++) cout << "\n " << i + 1 << "->" << spisKorm.arr_food[i];
    cout << "\n Введите номер корма из списка для помещения его на склад: "; cin >> num;
    KormSklad[kolVo] = spisKorm.arr_food[num-1];
    cout << "\n Корм " << spisKorm.arr_food[num - 1] << " помещён на склад.\n";
    kolVo++;
}
