#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

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

	std::sort(vec.begin(), vec.end());
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << endl;
	}
	return 0;
}