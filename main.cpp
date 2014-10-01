#include <iostream>
#include "quick_sort.h"

using namespace std;

int main()
{
	cout << "some visual tests:" << endl;

	int a[] = { 1, 4, 3, 5, 2, 56, 34, 23, 34, 0, -2 };
	int n = sizeof(a) / sizeof(int);

	cout << "Initial array: " << endl;
	for (int i = 0; i < n; ++i)
		cout << a[i] << "; ";

	my_qsort(a, n);


	cout << endl << "Sorted array: " << endl;
	for (int i = 0; i < n; ++i)
		cout << a[i] << "; ";

	cout << endl;
	system("pause");

	return 0;
}