#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;
	
	vector<int> vec;

	int sum = 0;
	int maxSet = 0;
	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;

		vec.push_back(num);
	}

	std::sort(vec.begin(), vec.end());

	for (int i = 0; i < vec.size() - 2; i++)
	{
		for (int j = i + 1; j < vec.size() - 1; j++)
		{
			for (int k = i + 2; k < vec.size(); k++)
			{
				sum = vec[i] + vec[j] + vec[k];

				if (sum == M)
				{
					maxSet = M;
					break;
				}
				if (sum <= M && maxSet < sum)
					maxSet = sum;
			}
		}
	}

	cout << maxSet;

	return 0;
}