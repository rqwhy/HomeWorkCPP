using namespace std;
#include <iostream>

int main()
{
	srand(time(NULL));
	const int n = 10;
	int array[n];
	int array1[n];
	int array2[20];
	int c = 0,min=0,max=10;
	for (int i = 0; i < n; i++) {
		array[i] = min + rand() % (max + 1 - min);
		cout << array[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		array1[i] = min + rand() % (max + 1 - min);
		cout << array1[i] << " ";
	}
	for (int i = 0, flag; i < n; i++) {
		flag = true;
		for (int j = 0; j < n; j++) {
			if (array[i] == array1[j]) {
				flag = false;
				break;
			}
		}
		if (flag == true) {
			for (int j = 0; j < i; j++) {
				if (array[j] == array[i]) {
					flag = false;
					break;
				}
			}
			if (flag == true) {
				for (int j = i + 1; j < n; j++) {
					if (array[j] == array[i]) {
						flag = false;
						break;
					}
				}
				if (flag == true) array2[c++] = array[i];
			}
		}
	}
	for (int i = 0, flag; i < n; i++) {
		flag = true;
		for (int j = 0; j < n; j++) {
			if (array1[i] == array[j]) {
				flag = false;
				break;
			}
		}
		if (flag == true) {
			for (int j = 0; j < i; j++) {
				if (array1[j] == array1[i]) {
					flag = false;
					break;
				}
			}
			if (flag == true) {
				for (int j = i + 1; j < n; j++) {
					if (array1[j] == array1[i]) {
						flag = false;
						break;
					}
				}
				if (flag == true)array2[c++] = array1[i];
			}
		}
	}
	cout << endl;
	for (int i = 0; i < c; i++) {
		cout << array2[i] << " ";
	}
}
