//2번 문제
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
	cout << "산수 문제를 자동으로 출제합니다." << endl;
	cout << a << " ";
	cout << b << endl;
	cout << "연산자 입력하기(+,-,*,/)" << endl;
	cin >> r;
	if (r == '+') {
		cout << "결과 입력하기" << endl;
		cin >> guess;
		answer = a + b;
	}

	else if (r == '-') {

		cout << "결과 입력하기" << endl;
		cin >> guess;
		answer = a - b;
	}

	else if (r == '*') {
		cout << "결과 입력하기" << endl;
		cin >> guess;
		answer = a * b;
	}
	else if (r == '/') {
		cout << "결과 입력하기" << endl;
		cin >> guess;
		answer = a / b;
	}

	if (answer == guess) {
		cout << "맞았습니다" << endl;
	}
	else
		cout << "틀렸습니다." << endl;
}*/