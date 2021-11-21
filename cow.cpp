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
    Cow()
    {
        name = "Корова";
        breed = "Черно-пестрая";
        food = "Сено";
        age = 4;
        weight = 400;
        nadoi = 15;
    }
    Cow(string name, string breed, int age, double weight, int nadoi)
    {
        this->name = name;
        this->breed = breed;
        this->age = age;
        this->weight = weight;
        this->nadoi = nadoi;
    }
    ~Cow()
    {
    }
    void Set(string name, string breed, int age, double weight, int nadoi)
    {
        if (name != " ") this->name = name;
        if (breed != " ") this->breed = breed;
        if (age != 0) this->age = age;
        if (weight != 0) this->weight = weight;
        if (nadoi != 0) this->nadoi = nadoi;
    }
    void Set(Food spisKorm)
    {
        int a;
        cout << "\n Добавление новой коровы \n";

        cout << "\n Введите кличку коровы: "; cin >> name;

        cout << "\n Введите породу коровы: "; cin >> breed;

        cout << "\n Выберите корм для коровы: ";
        for (int i = 0; i < spisKorm.GetKolVo(); i++)
        {
            cout << "\n " << (i + 1) << "->" << spisKorm.FoodName(i);
        }
        cout << "\n ";
        cin >> a;
        for (int i = 0; i < spisKorm.GetKolVo(); i++)
            if ((i + 1) == a) food = spisKorm.FoodName(i);

        cout << "\n\n Введите возраст коровы (лет): "; //cin >> age;
        if (!(scanf("%d", &age))) throw exception("\n Ошибка. Введены текстовые данные вместо числовых\n");

        cout << "\n Введите вес коровы (кг): "; //cin >> weight;
        if (!(scanf("%lf", &weight))) throw exception("\n Ошибка. Введены текстовые данные вместо числовых\n");

        cout << "\n Введите надой коровы (л/сут): "; //cin >> nadoi;
        if (!(scanf("%d", &nadoi))) throw exception("\n Ошибка. Введены текстовые данные вместо числовых\n");
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
    double VolumeUdderB(int numInList)
    {
        return (udder.VolumeUdderA(numInList));
    }
    void Print_udder()
    {
        udder.Print_udder();
    }
    string GetName()
    {
        return name;
        //cout << " бэ";
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
        double VolumeUdderA(int numInList)
        {
            return (length * width * depth);
        }
        void Print_udder()
        {
            cout << "\n Параметры вымени для этой коровы:\n ДЛИНА: " << length << "М\n ШИРИНА: " << width << "М\n ОБХВАТ: " << girth << "М\n ГЛУБИНА: " << depth << "M\n";
        }
    };
    Udder udder;
    string name;
    string breed;
    string food;
    int age;
    double weight;
    int nadoi;
};
