#include <iostream>
using namespace std;

int main()
{
    srand(time(NULL));
    const int SIZE1 = 5;
    const int SIZE2 = 2;
    const int SIZE3 = 8;
    int array1[SIZE1][SIZE1];
    int array2[SIZE2][SIZE2];
    int array3[SIZE1][SIZE1]{};
    int n = 0,count=0;
    for (int i = 0; i < SIZE1; i++) {
        for (int j = 0; j < SIZE1; j++) {
            array1[i][j] = 10 + rand() % 90;
            cout << array1[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < SIZE3; i++) {
        cout << "print 1-5: ";
        for (int j = 0; j < SIZE2; j++) {
            cin >> array2[i][j];
        }

    }
    for (int i = 0; i < SIZE3; i++) {
        for (int j = 0; j < SIZE2; j++) {
            cout << array2[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < SIZE3; i++) {
        array1[array2[i][0]][array2[i][1]] = 0;
    }
    for (int i = 0; i < SIZE1; i++) {
        for (int j = 0; j < SIZE1; j++) {
            cout << array1[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < SIZE1; i++) {
        for (int j = 0; j < SIZE1; j++) {
            if (array1[i][j] != 0) {
                array2[n][count++] = array1[i][j];
                if (count == 5) {
                    count = 0;
                    n++;
                }
            }
        }
    }
    for (int i = 0; i < SIZE1; i++) {
        for (int j = 0; j < SIZE1; j++) {
            cout << array2[i][j] << " ";
        }
        cout << endl;
    }
}