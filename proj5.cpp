﻿using namespace std;
#include <iostream>

int main()
{
	char text;
	cout << "Print symbol please: ";
	cin >> text;
	int numb = int(text);

	if (numb >= 48 && numb <= 57) cout << "symbol is number";
	else if((numb >= 65 && numb <= 90) || (numb >= 97 && numb <= 122)) cout << "symbol is text";
	else cout << "another symbol";
}

	/*int company;
	int time;
	cout << "choose operator: 1-MTS(1rub/min), 2-Bilain(2rub/min), 3-Megaphone(3rub/min): ";
	cin >> company;
	cout << "choose quantity time(minutes): ";
	cin >> time;
	switch (company){
	case 1:
		cout << "Your call with mts worth is: " << time * 1 << " rub";
		break;
	case 2:
		cout << "Your call with bilain worth is: " << time * 2 << " rub";
		break;
	case 3:
		cout << "Your call with megaphone worth is: " << time * 3 << " rub";
		break;
	default:
		cout << "uncorect symbol,try again";
		break;
	}*/

	/*int late, line, income, action;
	cout << "input action:1-stroke, 2-late,3-income: ";
	cin >> action;
	switch (action){
	case 1:
		cout << "print income Vasiliy: "; cin >> income;
		cout << "print late Vasiliy: "; cin >> late;
		cout << "You'll get: " << (income + (late / 3 * 20)) / 50 * 100 << " line";
		break;
	case 2:
		cout << "print line Vasiliy: "; cin >> line;
		cout << "print income Vasiliy: "; cin >> income;
		cout << "He may be late: " << income - (line / 2 * 1) + 40;
		break;
	case 3:
		cout << "print line Vasiliy: "; cin >> line;
		cout << "print late Vasiliy: "; cin >> late;
		if ((line / 100 * 50) <= (late / 3 * 20)) cout << "vasa haven`t money";
		else cout << "vasa have: " << (line / 100 * 50) - (late / 3 * 20);
		break;
	default:
		cout << "uncorect symbol,try again";
		break;
	}*/

//}