using namespace std;
#include <iostream>

int main()
{
    /*int numb = 0,min=100,max=999;
    while (min <= max) {
        int a = min / 100;
        int b = min / 10 % 10;
        int c = min % 10;
        if (a == b && a == c)min++;
        else if (a == b || a == c || b == c) {
            min++;
            numb++;
        }
        else min++;
    }
    cout << numb;*/

    /*int numb = 0, min = 100, max = 999;
    while (min <= max) {
        int a = min / 100;
        int b = min / 10 % 10;
        int c = min % 10;
        if (a == b || a == c || b == c)min++;
        else{
            min++;
            numb++;
        }
    }
    cout << numb;*/

    /*int numb1, numb2;
    cout << "Input number: ";
    cin >> numb1;
    while (numb1 > 0) {
        int a = numb1 % 10;
        if (a == 3 || a == 6) {
            numb1 = numb1 / 10;
        }
        else {
            int numb2 = 0;
            numb2 = numb2 + a;
            numb1 = numb1 / 10;
        }
    }
    cout << numb1;*/

    /*int numb1,numb2=1;
    cout << "Input number: ";
    cin >> numb1;
    while (numb1 > numb2) {
        if (numb1 % (numb2 * numb2) == 0 && numb1 % (numb2 * numb2 * numb2) != 0) cout << numb2;
        numb2++;
    }*/

    /*int numb1, summa = 0;
    cout << "Input number: ";
    cin >> numb1;
    int numb2 = numb1 * numb1;
    while (numb1 < 0)summa += (numb1 % 10);
    if (summa * summa * summa == numb2)cout << "=";
    else cout << "!=";*/

   /* int numb1, count=1;
    cout << "Input number: ";
    cin >> numb1;
    while (numb1 >= count) {
        if (numb1 % count == 0)cout << count << " ";
        count++;
    }*/


    int numb1, count=1, numb2;
    cout << "Input numbers: ";
    cin >> numb1 >> numb2;
    if (numb1 > numb2)swap(numb1, numb2);
    while (numb1 >= count) {
        if (numb1 % count == 0 && numb2 % count == 0) cout << count << " ";
        count++;
    }
}