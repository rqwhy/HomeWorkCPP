#include <iostream>
using namespace std;

void showNum1(int n) {
    if (n < 0) {
        for (int i = n; i <= 0; i++) {
            cout << i << " ";
        }
    }
    else {
        for (int i = 0; i <= n; i++) {
            cout << i << " ";
        }
    }

}

void showRec(int n, int k) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void showt(int num) {
    int a = 1;
    for (int i = 1; i <= num; i++) {
        a *= i;
    }
    cout << a << endl;
}

void showNum2(int num) {
    for (int i = 2, flag; i <= num; i++) {
        flag = false;
        if (num % i == 0) {
            flag = true;
        }
        if (flag) {
            cout << "prostoe";
            break;
        }
    }
}

void showMax(int num1, int num2, int num3, int num4, int num5) {
    int max = num1;
    if (num2 > max) max = num2;
    if (num3 > max) max = num3;
    if (num4 > max) max = num4;
    if (num5 > max) max = num5;
    cout << max;
}

int showTwo(int num1, int num2) {
    return((num1 > num2) ? num1 : num2);
}

bool showNum3(int num) {
    for (int i = 2; i <= num; i++) {
        if (num % i == 0) {
            return true;
        }
    }
    return false;
}

int showNumCube(int num) {
    return num * num * num;
}

bool showNum4(int num) {
    return ((num >= 0) ? true : false);
}

void mySwap(int& a, int& b) {
    a = a + b;
    b = a - b;
    a = a - b;
}

void mySwap(float& a, float& b) {
    a = a + b;
    b = a - b;
    a = a - b;
}

void mySwap(char& a, char& b) {
    a = a + b;
    b = a - b;
    a = a - b;
}

void showCross(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j || i == n - 1 - j) cout << "* ";
            else cout << " ";
        }
    }
}

int main()
{
    showNum1(10);
    showRec(5, 8);
    showt(5);
    showNum2(10);
    showMax(1, 2, 3, 4, 5);
    showTwo(5, 1);
    showNum3(13);
    showNumCube(3);
    showNum4(3);

    int a = 1, b = 2;
    float a = 1.2, b = 1.5;
    double a = 3, b = 4;
    char a = 'dsdf', b = 'qwer';
    cout << endl << a << " " << b << endl;
    mySwap(a, b);
    cout << a << " " << b << endl;
}
