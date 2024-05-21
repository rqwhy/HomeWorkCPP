#include <iostream>
using namespace std;

int main()
{
    srand(time(NULL));
    int** array = new int* [4] {};
    int* array = new int[4] {1, 2, 3, 4};
    int** arrBuf1 = new int* [4] {};

    for (int i = 0; i < 4; i++) {
        array[i] = new int[4];
        for (int j = 0; j < 4; j++) {
            array[i][j] = 1 + rand() & 10;
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < 4; i++) {
        arrBuf1[i] = new int[5];
        arrBuf1[i] = array[i];
    }
    for (int i = 0; i <= 4; i++) {
        arrBuf1[i][4] = array[i][4];
    }
    delete[] array;
    array = arrBuf1;
    cout << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << arrBuf1[i][j] << " ";
        }
        cout << endl;
    }
    /*int** arrBuf2 = new int* [4] {};
    for (int i = 0; i < 4; i++) {
        arrBuf2[i] = new int[4];
        for (int j = 0; j < 3; j++) {
            arrBuf2[i][j] = array[i][j];
        }
    }
    delete[] array;
    array = arrBuf2;
    cout << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    int** arrayBuf = new int* [4] {};
    for (int i = 0; i < 3; i++) {
        arrayBuf[i] = array[i];
    }
    delete[] array;
    array = arrayBuf;
    */
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
}