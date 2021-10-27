#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <string>
#include "Food.cpp"
using namespace std;


class Cow
{
public:
    void Set(string name, string breed, int age, double weight, int nadoi)
    {
        if (name != " ") this->name = name;
        if (breed != " ") this->breed = breed;
        if (age != 0) this->age = age;
        if (weight != 0) this->weight = weight;
        if (nadoi != 0) this->nadoi = nadoi;
    }
    void Set(Food food1) //Функция инициализации элементов данных
    //void Set()
    {
        int a;
        cout << "\n Добавление новой коровы \n";

        cout << "\n Введите кличку коровы: "; cin >> name;

        cout << "\n Введите породу коровы: "; cin >> breed;

        cout << "\n Выберите корм для коровы: ";
        for (int i = 0; i < food1.Num_sp(); i++)
        {
            cout << "\n " << (i + 1) << "->" << food1.Food_name(i);
        }
        cout << "\n ";
        cin >> a;
        for (int i = 0; i < food1.Num_sp(); i++)
            if ((i + 1) == a) food = food1.Food_name(i);

        cout << "\n\n Введите возраст коровы (лет): "; cin >> age;

        cout << "\n Введите вес коровы (кг): "; cin >> weight;

        cout << "\n Введите надой коровы (л/сут): "; cin >> nadoi;
    }
    void Print_cow()
    {
        cout << "\n ИМЯ: " << name << "\n ПОРОДА: " << breed << "\n КОРМ: " << food << "\n ВОЗРАСТ(лет): " << age << "\n ВЕС(кг): " << weight << "\n НАДОЙ(л / день): " << nadoi << "\n";
    }
    void Set_udder()
    {
        udder.Set_udder();
    }
    void Set_udder(double length, double width, double girth, double depth)
    {
        udder.set_udder(length, width, girth, depth);
    }
    double Volume_udder_b(int n)
    {
        return (udder.Volume_udder_a(n));
    }
    void Print_udder()
    {
        udder.Print_udder();
    }
private:
    class Udder
    {
    public:
        double length = 0.39;//длина
        double width = 0.43; //ширина
        double girth = 0.47; //обхват
        double depth = 0.56; //глубина
        void set_udder(double length, double width, double girth, double depth)
        {
            this->length = length;
            this->width = width;
            this->girth = girth;
            this->depth = depth;
        }
        void Set_udder()
        {
            cout << "\n Заполнение параметров вымени коровы\n";
            cout << "\n Введите длину вымени (м): "; cin >> length;
            cout << "\n Введите ширину вымени (м): "; cin >> width;
            cout << "\n Введите обхват вымени (м): "; cin >> girth;
            cout << "\n Введите глубину вымени (м): "; cin >> depth;
        }
        double Volume_udder_a(int n)
        {
            return (length * width * depth);
        }
        void Print_udder()
        {
            cout << "\n Параметры вымени для этой коровы:\n ДЛИНА: " << length << "М\n ШИРИНА: " << width << "М\n ОБХВАТ: " << girth << "М\n ГЛУБИНА: " << depth << "M\n";
        }
    };
    Udder udder;
    string name = "Буренка";
    string breed = "Черно-пестрая"; //порода
    string food = "Сено";
    int age = 4;
    double weight = 400;
    int nadoi = 15; //Надой
};
