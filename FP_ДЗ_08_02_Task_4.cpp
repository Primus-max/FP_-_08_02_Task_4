// В одномерном массиве, состоящем из N вещественных чисел вычислить :
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


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    FillArray();
    CalcSumNegativesIntegers();
}
