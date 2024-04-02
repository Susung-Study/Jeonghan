#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	int chess[6] = { 1, 1, 2, 2, 2, 8 };

	int arr[6];

	for (int i = 0; i < 6; i++)
	{
		int ch;
		cin >> ch;

		arr[i] = ch;
	}

	for (int i = 0; i < 6; i++)
	{
		cout << chess[i] - arr[i] << " ";
	}
}