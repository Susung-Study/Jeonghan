#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<int> vec;
	int average = 0;
	for (int i = 0; i < 5; i++)
	{
		int num;
		cin >> num;
		vec.push_back(num);
		average += num;
	}
	average /= 5;
	std::sort(vec.begin(), vec.end());

	cout << average << endl;
	cout << vec[vec.size() / 2] << endl;

	return 0;
}