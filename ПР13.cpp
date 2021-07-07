#include <iostream>

using namespace std;

void print_number(int number, int d)
{
	if (d == 0) return;
	cout << number / d << endl;
	print_number(number % d, d / 10);
}

int min_value(const int* arr, const int n, int i, int mvalue)
{
	if (i >= n) return mvalue;
	int value = arr[i++];
	if (mvalue > value) mvalue = value;
	return min_value(arr, n, i, mvalue);
}

int main()
{
	print_number(1800, 1000);

	int a[] = { 3, 1, 6, 4, 4, -1, 10 };
	cout << min_value(a, 7, 0, a[0]);
}
