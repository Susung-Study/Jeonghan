#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool compare(int x, int y)
{
	return x < y;
}


int main()
{
	int N;

	cin >> N;

	vector<int> vec;

	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		vec.push_back(num);
	}

	std::sort(vec.begin(), vec.end(), compare);
	
	for (int i = 0; i < N; i++)
	{
		cout << vec[i] << "\n";
	}

	return 0;
}