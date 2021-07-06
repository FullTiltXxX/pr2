#include <iostream>

using namespace std;

void print_array(int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << ' ';
	}
}

void print_array(int** arr, int n, int l)
{
	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j < l; j++)
		{
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}
}

int main()
{
	int a[] = { 1, 2, 3, 4, 5 };
	int** b = new int*[3]{ new int[]{1, 2, 3}, 
		new int[]{ 4, 5, 6 }, 
		new int[]{ 2, 4, 4 } 
	};
	print_array(a, 5);
	cout << endl;
	print_array(b, 3, 3);
}