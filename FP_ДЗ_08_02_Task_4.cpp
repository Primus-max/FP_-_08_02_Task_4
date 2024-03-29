﻿// В одномерном массиве, состоящем из N вещественных чисел вычислить :
// ■ Сумму отрицательных элементов.
// ■ Произведение элементов, находящихся между min и max элементами.
// ■ Произведение элементов с четными номерами.
// ■ Сумму элементов, находящихся между первым и последним отрицательными элементами.

#include <iostream>
#include <windows.h>
#include <random>
using namespace std;

const int sizeArr = 50;
double Array[sizeArr];

/// <summary>
/// Метод заполнения массива
/// </summary>
void FillArray() 
{
    random_device random;

    cout << " Массив элементов " << endl;

    for (int i = 0; i < sizeArr; i++)
    {
        Array[i] = (rand() % 100 - 50) + (rand() % 100) / 100.0;

        cout << " " << Array[i];
    }
    cout << endl;
    cout << "----------------------------------------------------------" << endl;

}

/// <summary>
/// Метод вычисления суммы отрицательных элементов в массиве
/// </summary>
void CalcSumNegativesIntegers() 
{
    double sum = 0;
    for (int i = 0; i < sizeArr; i++)
    {
        if (Array[i] < 0)
            sum += Array[i];
    }

    cout << "Сумма отрицательных элементов в массиве = " << sum << endl;
    cout << "----------------------------------------------------------" << endl;
}

/// <summary>
/// Метод нахождения произведения элементов между min и max
/// </summary>
void CalcProductMinMax() 
{
    int startIndex = 0, finishIndex = 0;
    double maxIntegers = Array[0], minIntegers = Array[0], result = 1;

    for (int i = 0; i < sizeArr; i++)
    {
        if (Array[i] > maxIntegers)
            startIndex = i;
        else if (Array[i] < minIntegers)
            finishIndex = i;
    }
    
    int tempIndex = 0;
    if (startIndex > finishIndex)
    {
        tempIndex = startIndex;
        startIndex = finishIndex;
        finishIndex = tempIndex;
    }
        
    for (int i = startIndex; i < finishIndex; i++)
    {
        result *= Array[i];
    }

    cout << "Произведение элементов, находящихся между min и max элементами = " << result << endl;
    cout << "----------------------------------------------------------" << endl;
}

void ProductOfElementsWithEvenNumbers() 
{
   long double result = 1.0;

    for (int i = 0; i < sizeArr; i++)
    {
        if (i % 2 == 0)
            result *= Array[i];
    }

    cout << "Произведение элементов c чётными номерами: " << result << endl;
    cout << "----------------------------------------------------------" << endl;
}

void SumOfNegativeElements()
{
    double result = 0, min = Array[0], max = Array[0];
    int startIndex = 0, finishIndex = 0;
    
    for (int i = 0; i < sizeArr; i++)
    {
        if (Array[i] >= 0) continue;
        if (Array[i] < min)
            startIndex = i;
        else if (Array[i] > max)
            finishIndex = i;
    }

    int tempIndex = 0;
    if (startIndex > finishIndex)
    {
        tempIndex = startIndex;
        startIndex = finishIndex;
        finishIndex = tempIndex;
    }

    for (int i = startIndex; i < finishIndex; i++)
    {
        result += Array[i];
    }

    cout << "Сумма элементов, находящихся между первым и последним отрицательными элементами = " << result << endl;
    cout << "----------------------------------------------------------" << endl;
}


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    FillArray();
    CalcSumNegativesIntegers();
    CalcProductMinMax();
    ProductOfElementsWithEvenNumbers();
    SumOfNegativeElements();
}
