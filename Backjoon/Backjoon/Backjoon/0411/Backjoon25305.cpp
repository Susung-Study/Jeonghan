#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool compare(int x, int y)
{
	return x > y;
}


int main()
{
	int N, k;

	cin >> N >> k;

	vector<int> vec;

	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		vec.push_back(num);
	}

	std::sort(vec.begin(), vec.end(), compare);
	
	cout << vec[k - 1];

	return 0;
}