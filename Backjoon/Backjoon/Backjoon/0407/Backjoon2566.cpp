#include <iostream>

using namespace std;

int main()
{
	int arr[9][9];
	
	int num = 0;

	int x = 0;
	int y = 0;

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cin >> arr[i][j];
			if (arr[i][j] > num)
				num = arr[i][j];
		}
	}

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (num == arr[i][j])
			{
				x = i + 1;
				y = j + 1;
			}
		}
	}

	cout << num << endl;
	cout << x << " " << y;
	return 0;
}