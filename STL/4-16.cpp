#include <iostream>
using namespace std;

void for_each(int *begin, int *end, void (*pf)(int))
{
	while (begin != end)
	{
		pf(*begin++);
	}
}

void PrintInt(int n)
{
	cout << n << " ";
}

int main()
{
	int arr[5] = { 10, 20, 30, 40, 50 };
	for_each(arr, arr + 5, PrintInt);
	cout << endl;

	return 0;
}