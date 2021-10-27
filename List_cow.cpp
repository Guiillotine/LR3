#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <string>
#include "cow.cpp"
using namespace std;


class List_cow
{
public:
    void Arr_inc() //Функция увеличения размера массива
    {
        Cow* arr_cow2 = new Cow[num + 1];
        for (int i = 0; i < num; i++) arr_cow2[i] = arr_cow[i];
        arr_cow = arr_cow2;
    }
    void Add(Food food1) //Функция инициализации элементов данных
    {
        if (num > 0) this->Arr_inc();
        Cow cow2;
        cow2.Set(food1);
        cow2.Set_udder();
        arr_cow[num] = cow2;
        num++; //Количество коров в списке
    }
    void Print_list()
    {
        for (int i = 0; i < num; i++)
        {
            cout << "\n № " << (i + 1);
            arr_cow[i].Print_cow();
            arr_cow[i].Print_udder();
        }
    }
    int Num_sp() //Возвращает количество коров в списке
    {
        return (num);
    }
    void Herd(int n) //Создание стада на n коров
    {
        for (int i = 0; i < n; i++)
        {
            if (num > 0) this->Arr_inc();
            Cow cow2;
            cow2.Set("Корова " + to_string(i + 1), "Черно-пестрая", 4, 450, 15);
            cow2.Set_udder(0.39, 0.43, 0.47, 0.56);
            arr_cow[i] = cow2;
            num++;
        }
    }
    double Volume_udder_c(int n)
    {
        return (arr_cow[n - 1].Volume_udder_b(n));
    }

private:
    int num = 0;
    Cow* arr_cow = new Cow[1];
};