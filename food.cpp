#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <string>
using namespace std;


class Food
{
public:
    void Set(string name)
    {
        this->arr_food[num] = name;
        this->num++;
    }
    void Set() //Функция инициализации элементов данных
    {
        cout << "\n Добавление нового корма\n\n Введите название корма: ";
        cin >> arr_food[num];
        num++;
    }
    int Num_sp() //Возвращает количество кормов в списке
    {
        return (num);
    }
    string Food_name(int k) //Возвращает название корма
    {
        return (arr_food[k]);
    }
private:
    string* arr_food = new string[10];
    int num = 0;
};