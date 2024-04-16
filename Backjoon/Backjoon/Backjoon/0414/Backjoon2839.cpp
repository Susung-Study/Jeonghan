#include <iostream>

using namespace std;

int main()
{
	int N;

	cin >> N;

	int temp = N;
	int cnt = 0;

	while (temp > 0)
	{
		if (temp < 3 && temp > 0)
		{
			cnt = -1;
			cout << cnt;
			return 0;
		}

		if (temp % 5 == 0)
		{
			temp -= 5;
			cnt++;
		}
		else
		{
			temp -= 3;
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}