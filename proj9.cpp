﻿using namespace std;
#include <iostream>

int main()
{
    /*srand(time(NULL));
    int const size = 10;
    int array[size];
    int min = array[0], max = array[0];
    for (int i = 0; i < size; i++) {
        array[i] = 10 + rand() % (20 - 10);
        cout << array[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < size; i++) {
        if (array[i] > max) array[i] = max;
        if (array[i] < min) array[i] = min;
    }
    cout << max << " " << min;*/

    /*srand(time(NULL));
    int const size = 10;
    int array[size];
    int d1, d2,summa=0,n;
    cout << "Print diapazon 1 and 2: ";
    cin >> d1 >> d2;
    cout << "Print n: ";
    cin >> n;
    if (d1 > d2) swap(d1, d2);
    for (int i = 0; i < size; i++) {
        array[i] = d1 + rand() % (d2 - d1);
        cout << array[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < size; i++) {
        if (array[i] < n) summa = summa + array[i];
    }
    cout << summa;*/

    /*int const size = 12;
    int array[size];
    int money;
    int d1, d2;
    cout << "Print diapazon 1 and 2: ";
    cin >> d1 >> d2;
    int maxMoney = d1 + 1;
    int minMoney = d1 - 1;
    for (int i = 0; i < size; i++)cin >> array[i];
    for (int i = d1; i <= d2 - 1; i++) {
        if (array[i] < array[minMoney])minMoney = i;
        if (array[i] > array[maxMoney])maxMoney = i;
    }
    cout << "min-" << minMoney + 1 << " " << "max-" << maxMoney + 1;*/

    /*srand(time(NULL));
    int const size = 10;
    int array[size];
    int min, max,summa=1,minSum=0, maxSum = 0,summa2=0;
    cout << "Input min max: ";
    cin >> min >> max;
    for (int i = 0; i < size; i++) {
        array[i] = min + rand() % (max - min);
        cout << array[i] << " ";
    }
    cout << endl;
    int a;
    cout << "1-negativ summa,2-proizv min max,3-even summa,summa min to max: ";
    cin >> a;
    switch (a)
    {
    case 1:
        for (int i = 0; i < min; i++) {
            if (array[i] < 0) summa += array[i];
        }
        cout << summa;
        break;
    case 2:

        break;
    case 3:
        for (int i = minSum; i < maxSum; i++) {
            summa *= array[i];
            if (array[i] % 2 == 0) summa2 += array[i];
        }
        cout << summa2;
        break;
    case 4:
        break;
    default:
        cout << " another number";
        break;
    }*/

    const int k = 5;
    int arr4[k];
    int minesS = 0, minUser = 0, maxUser = 0, summ = 1, evenS = 0, minesNumFirts = 0, minesNumSecond = 0, evenSummAll = 0;
    for (int i = 0, flag = false; i <= 10 - 1; i++) {
        arr4[i] = 0 + rand() % (11);
        cout << arr4[i] << " ";
        if (arr4[i] < 0) {
            if (flag) {
                minesS += arr4[i];
                minesNumSecond = i;
            }
            else {
                minesS += arr4[i];
                minesNumFirts = i;
                flag = true;
            }
        }
    }
    for (int i = minUser; i < maxUser; i++) {
        summ *= arr4[i];
        if (arr4[i] % 2 == 0) evenS += arr4[i];
    }

    for (int i = minesNumFirts; i < minesNumSecond; i++) {
        evenSummAll += arr4[i];
    }
}