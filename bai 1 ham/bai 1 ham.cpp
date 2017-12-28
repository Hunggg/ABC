#include<iostream>
#include<string>
using namespace std;
int Tong(int n, int m);

void main() {
	int m, n;
	Tong(11, 27);
	system("pause");
}

int Tong(int n, int m) {
	cout << "Tong cua hai so la : " << m + n << endl;
}