#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{

	string s;
	cin >> s;


	vector<char> cVec;
	vector<char> cVec2;

	int correct = 0;

	if (s.size() % 2 == 0)
	{
		for (int i = 0; i < s.size() / 2; i++)
		{
			cVec.push_back(s[i]);
		}

		for (int i = s.size() - 1; i >= s.size() / 2; i--)
		{
			cVec2.push_back(s[i]);
		}

		for (int i = 0; i < cVec.size(); i++)
		{
			if (cVec[i] == cVec2[i])
				correct = 1;
			else
			{
				correct = 0;
				break;
			}
		}

	}
	else
	{
		if (s.size() == 1)
		{
			cout << 1;
			return 0;
		}


		for (int i = 0; i < s.size() / 2; i++)
		{
			cVec.push_back(s[i]);
		}

		for (int i = s.size() - 1; i >= s.size() / 2 + 1; i--)
		{
			cVec2.push_back(s[i]);
		}

		for (int i = 0; i < cVec.size(); i++)
		{
			if (cVec[i] == cVec2[i])
				correct = 1;
			else
			{
				correct = 0;
				break;
			}
		}
	}

	cout << correct;

	return 0;
}