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
		fstream f;
		f.open("static.txt", fstream::in | fstream::out | fstream::app);
		string name;
		cout << "\t\t\t#################################################\n\t\t\t#  ������ �����  # \t\t\t\t#\n\t\t\t################## Creator by Akzhigitov Olzhas #\n\t\t\t\t\t #\t\t\t\t#\n\t\t\t\t\t ################################\n";
		int n = 0, o = 0, t = 0, n1 = 0;
		cout << "������� ��� ������: "; 
		cin >> name;
		f << "#######################################################################################" << "\n\n";
		f << "���������� ����� " << name  << endl;
		cout << "�������� ����� �� 0 ��: "; 
		while (cin >> n1 && !(n1 > 0)) {
			if (n1 <= 0) {
				cout << "���������� ����� �� ����� ���� ������ ����!!! \n";
			}
		}
		cout << "�������! ������� ����� � �������� ���������))" << endl;
		f << name << " ��������(�) ����� �� 0 �� " << n1 << endl;
		n = rand() % n1;
		f << "����� ������� ������(�) " << name << ": ";
		do {
			t++;
			if (cin >> o && o > n) {
				cout << "��������� ����� ������! " << endl;
			}
			else if (o < n) {
				cout << "��������� ����� ������! " << endl;
			}
			else if (o == n) {
				cout << "���������� �� ������� ��������� ����� " << endl;
			}
			f << o << "; ";
		} while (!(n == o));
		f << endl;
		f << name << " �����������(�) " << t << " ������� ������� �����. " << endl<<endl;
		cout << "����� ������� ������� �����: " << t << endl;
		cout << "������� 1 ����� ��������� ��� 0 ����� �����: ";
		cin >> otv;
		f.close();
		system("cls");
	} while (otv == 1);
	return 0;
}