#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool Com(int x, int y)
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
	std::sort(vec.begin(), vec.end(), Com);

	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << "\n";
	}
	return 0;
}