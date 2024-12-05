#include <iostream>
using std::cout;

void show_array(int* m,int s)
{
	
	for (int i = 0; i < s; i++) {
		cout << m[i] << ", ";
	}
	cout << (char)8 << (char)8;
}

//fill array function
void fill_array(int* m, int sz ) 
{
	for (int i = 0; i < sz; i++) {
		if (i / 2 == (float)i / 2.0)
		{
			m[i] = rand() % 1000;
		}
	}
}
int main()     
{
	const int SIZE = 8;
	int mas[SIZE];

	show_array(mas, SIZE);
	fill_array(mas, SIZE);
}

