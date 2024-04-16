#include <iostream>

using namespace std;


int main()
{
	int N;

	cin >> N;

	int total = 0;
	int temp = 0;

	for (int i = 1; i <= N; i++)
	{
		total = i;
		temp = i;

		while (temp != 0)
		{
			total += temp % 10;
			temp /= 10;
		}

		if (total == N)
		{
			cout << i << endl;
			return 0;
		}
	}

	cout << "0" << endl;

	return 0;
}