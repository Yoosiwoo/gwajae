//2�� ����
/*#include <iostream>
#include <random>
using namespace std;
int answer;
int guess;
char r;
int main() {
	random_device rd;
	mt19937 x(rd());
	mt19937 y(rd());
	uniform_int_distribution<int> dis(0, 100);
	int a, b;
	a = dis(x);
	b = dis(y);
	cout << "��� ������ �ڵ����� �����մϴ�." << endl;
	cout << a << " ";
	cout << b << endl;
	cout << "������ �Է��ϱ�(+,-,*,/)" << endl;
	cin >> r;
	if (r == '+') {
		cout << "��� �Է��ϱ�" << endl;
		cin >> guess;
		answer = a + b;
	}

	else if (r == '-') {

		cout << "��� �Է��ϱ�" << endl;
		cin >> guess;
		answer = a - b;
	}

	else if (r == '*') {
		cout << "��� �Է��ϱ�" << endl;
		cin >> guess;
		answer = a * b;
	}
	else if (r == '/') {
		cout << "��� �Է��ϱ�" << endl;
		cin >> guess;
		answer = a / b;
	}

	if (answer == guess) {
		cout << "�¾ҽ��ϴ�" << endl;
	}
	else
		cout << "Ʋ�Ƚ��ϴ�." << endl;
}*/