#include<iostream>
#include<time.h>
#include <string>
#include<fstream>
#include<Windows.h>
#include<cctype>
#include<stdlib.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	srand(time(0));
	int otv = 0;
	do {
		SetConsoleCP(1251);
		SetConsoleOutputCP(1251);
		fstream f;
		f.open("static.txt", fstream::in | fstream::out | fstream::app);
		string name;
		cout << "\t\t\t#################################################\n\t\t\t#  Угадай число  # \t\t\t\t#\n\t\t\t################## Creator by Akzhigitov Olzhas #\n\t\t\t\t\t #\t\t\t\t#\n\t\t\t\t\t ################################\n";
		int n = 0, o = 0, t = 0, n1 = 0;
		cout << "Введите имя игрока: "; 
		cin >> name;
		f << "#######################################################################################" << "\n\n";
		f << "Статистика игока " << name  << endl;
		cout << "Загадать число от 0 до: "; 
		while (cin >> n1 && !(n1 > 0)) {
			if (n1 <= 0) {
				cout << "Загаданное число не может быть меньше нуля!!! \n";
			}
		}
		cout << "Отлично! Вводите числа в заданном диапазоне))" << endl;
		f << name << " угадывал(а) числа от 0 до " << n1 << endl;
		n = rand() % n1;
		f << "Числа которые вводил(а) " << name << ": ";
		do {
			t++;
			if (cin >> o && o > n) {
				cout << "Загаданое число меньше! " << endl;
			}
			else if (o < n) {
				cout << "Загаданое число больше! " << endl;
			}
			else if (o == n) {
				cout << "Поздравляю вы угадали загаданое число " << endl;
			}
			f << o << "; ";
		} while (!(n == o));
		f << endl;
		f << name << " использовал(а) " << t << " попыток угадать число. " << endl<<endl;
		cout << "Число попыток угадать число: " << t << endl;
		cout << "Введите 1 чтобы повторить или 0 чтобы выйти: ";
		cin >> otv;
		f.close();
		system("cls");
	} while (otv == 1);
	return 0;
}
