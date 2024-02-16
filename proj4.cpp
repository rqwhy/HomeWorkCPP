#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    //1 задание - программа определяет, является ли введенное число — счастливым(Счастливым считается шестизначное число, у которого сумма первых 3 цифр равна сумме вотрых 3 цифр) {
    //    /*int numb , a, b, c, d, e, f;
    //    cout << "Введите 6-сти значное число: ";
    //    cin >> numb;
    //    f = numb % 10;
    //    e = numb % 100 / 10;
    //    d = numb % 1000 / 100;
    //    c = numb % 10000 / 1000;
    //    b = numb % 100000 / 10000;
    //    a = numb % 1000000 / 100000;

    //    if (numb <= 999999 and numb > 99999) {
    //        if (a + b + c == d + e + f) {
    //            cout << "счастливое число";
    //        }

    //        else {
    //            cout << "не счастливое число";
    //        }
    //    }

    //    else {
    //        cout << "не верное число";
    //    }*/
    //}

    //2 задание - поменять 1 и 2 . 3 и 4 цифры местами{
    //    /*int numb;
    //cout << "Введите 4-х значное число: ";
    //cin >> numb;

    //int a =  (numb % 10) * 10;
    //int b = (numb % 100) / 10;
    //int c = (numb % 1000 / 100) * 1000;
    //int d = (numb % 10000 / 1000) * 100;
    //if (numb <= 9999 and numb > 999) {
    //    cout << a + b + c + d;
    //}

    //else {
    //cout << "не верное число";
    //}*/
    //}

    /*3 задание- выбрать самое большое число из введенных{
        int num1, num2, num3, num4, num5, num6, num7;
        cout << "Введите 7 чисел число: ";
        cin >> num1 >> num2 >> num3 >> num4 >> num5 >> num6 >> num7;
        int max = num1;
        if (num1 > max) max = num1;
        if (num2 > max) max = num2;
        if (num3 > max)max = num3;
        if (num4 > max)max = num4;
        if (num5 > max)max = num5;
        if (num6 > max)max = num6;
        if (num7 > max)max = num7;

        cout << max;
    }*/

    int distance1, distance2, weight;
    cout << "Введите 1 и 2 расстояние: ";
    cin >> distance1 >> distance2;
    cout << "Введите вес: ";
    cin >> weight;
    if (weight <= 500) {
        cout << distance1 + distance2 << "1 литров/км";
    }
    else if (weight <= 1000 and weight > 500) {
        cout << (distance1 + distance2) / 4 << "4 литров/км";
    }
    else if (weight <= 1500 and weight > 1000) {
        cout << (distance1 + distance2) / 7 << "7 литров/км";
    }
    else if (weight <= 2000 and weight > 1500) {
        cout << (distance1 + distance2) / 9 << "9 литров/км";
    }
    else if (weight <= 2000) {
        cout << "самолет не поднимает";
    }
}