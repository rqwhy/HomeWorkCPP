using namespace std;
#include <iostream>

int main()
{
    const int size1 = 5;
    const int size2 = 5;
    int array[size1][size2];
    int num;
    cout << "Print numb: ";
    cin >> num;
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++, num *= 2) {
            array[i][j] = num;
            cout << array[i][j] << "  ";
        }
        cout << endl;
    }

    cout << "Print numb: ";
    cin >> num;
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++, num++) {
            array[i][j] = num;
            cout << array[i][j] << "  ";
        }
        cout << endl;
    }
}