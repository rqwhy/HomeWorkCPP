using namespace std;
#include <iostream>

int main()
{
    int a;
    cout << "Print 1-8: ";
    cin >> a;
    switch (a) {
    case 1:

        int n;
        cout << "Print n: ";
        cin >> n;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) cout << " ";
            for (int j = 0; j < n - i; j++) cout << "*";
            cout << endl;
        }

        break;
    case 2:

        int n2;
        cout << "Print n: ";
        cin >> n2;
        for (int i = 0; i < n2; i++) {
            for (int j = n2 - i; j <= n2; j++) cout << "*";
            cout << endl;
        }

        break;
    case 3:

        int n3;
        cout << "Print n: ";
        cin >> n3;
        if (n3 % 2 == 0) {
            n3++;
        }
        for (int i = 0; i <= n3 / 2; i++) {
            for (int j = 0; j <= i; j++) cout << " ";
            for (int j = 0; j < n3 - (i * 2); j++) cout << "*";
            cout << endl;
        }

        break;
    case 4:

        int n4;
        cout << "Print n: ";
        cin >> n4;
        for (int i = 0; i <= n4 / 2; i++) {
            for (int j = 0; j <= (n4 / 2) - i; j++) cout << " ";
            for (int j = 0; j < (i * 2) + 1; j++) cout << "*";
            cout << endl;
        }

        break;
    case 5:

        int n5;
        cout << "Print n: ";
        cin >> n5;
        if (n5 % 2 == 0) {
            n5++;
        }
        for (int i = 0; i <= n5 / 2; i++) {
            for (int j = 0; j <= i; j++) cout << " ";
            for (int j = 0; j < n5 - (i * 2); j++) cout << "*";
            cout << endl;
        }
        for (int i = 0; i <= n5 / 2; i++) {
            for (int j = 0; j <= (n5 / 2) - i; j++) cout << " ";
            for (int j = 0; j < (i * 2) + 1; j++) cout << "*";
            cout << endl;
        }

        break;

    case 9:

        int n9;
        cout << "Print n: ";
        cin >> n9;
        for (int i = 0; i < n9; i++) {
            for (int j = 0; j < n9 - i; j++)cout << "*";
            cout << endl;
        }

        break;
    case 10:

        int n10;
        cout << "Print n: ";
        cin >> n10;
        for (int i = 0; i < n10; i++) {
            for (int j = i; j <= n10; j++) cout << " ";
            for (int j = n10 - i; j <= n10; j++) cout << "*";
            cout << endl;
        }

        break;
    default:
        cout << "no 1-8";
    }
}