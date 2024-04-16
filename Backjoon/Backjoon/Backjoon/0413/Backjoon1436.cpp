#include<iostream>

using namespace std;

int main(void)
{
	int n;
	cin >> n;
	int cnt = 0;
	int num = 665;

	while (true)
	{
		num++;
		int comp = num;
		while (comp >= 666)
		{
			if (comp % 1000 == 666)
			{
				cnt++;
				break;
			}
			comp /= 10;
		}
		if (cnt == n)
		{
			cout << num << endl;
			break;
		}
	}

	return 0;
}