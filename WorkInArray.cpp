#include <iostream>
using std::cout;
int main()
{
	const int SIZE = 8;
	int mass[SIZE];
	for (int i = 0 ; i < SIZE; i++) {
		mass[i] = SIZE - i;
	}
	for (int i = 0; i < SIZE; i++) {
		cout << mass[i] << ", ";
	}
	cout << (char)8 << (char)8;
}

