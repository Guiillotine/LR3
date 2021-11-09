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
    void ArrResize() //Функция увеличения размера массива
    {
        Cow* arr_cow2 = new Cow[kolVoKorov + 1];
        for (int i = 0; i < kolVoKorov; i++) arr_cow2[i] = arr_cow[i];
        arr_cow = arr_cow2;
    }
    void Add(Food food1) //Функция инициализации элементов данных
    {
        if (kolVoKorov > 0) ArrResize();
        Cow cow2;
        cow2.Set(food1);
        cow2.Set_udder();
        arr_cow[kolVoKorov] = cow2;
        kolVoKorov++;
    }
    void Print_list()
    {
        for (int i = 0; i < kolVoKorov; i++)
        {
            cout << "\n № " << (i + 1);
            arr_cow[i].Print_cow();
            arr_cow[i].Print_udder();
        }
    }
    int kolVoKorov_sp() //Возвращает количество коров в списке
    {
        return (kolVoKorov);
    }
    void Herd(int n) //Создание стада на n коров
    {
        for (int i = 0; i < n; i++)
        {
            if (kolVoKorov > 0) this->ArrResize();
            Cow cow2;
            cow2.Set("Корова " + to_string(i + 1), "Черно-пестрая", 4, 450, 15);
            cow2.Set_udder(0.39, 0.43, 0.47, 0.56);
            arr_cow[i] = cow2;
            kolVoKorov++;
        }
    }
    double VolumeUdderC(int numInList)
    {
        return (arr_cow[numInList - 1].VolumeUdderB(numInList));
    }
    void CountIllCow(int &illCow)
    {
        illCow += this->illCow;
    }
    void CountMeatCow(int *meatCow)
    {
        (*meatCow) += this->meatCow;
    }

private:
    int kolVoKorov = 0;
    int illCow = 3;
    int meatCow = 4;
    Cow* arr_cow = new Cow[1];
};