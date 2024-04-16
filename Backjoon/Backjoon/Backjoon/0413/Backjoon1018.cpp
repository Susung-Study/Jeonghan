#include <iostream>
#include <algorithm>

using namespace std;

char originArr[50][50];


string BW[8] = { "BWBWBWBW",
				 "WBWBWBWB",
				 "BWBWBWBW",
				 "WBWBWBWB",
				 "BWBWBWBW",
				 "WBWBWBWB",
				 "BWBWBWBW",
				 "WBWBWBWB" };

string WB[8] = { "WBWBWBWB",
				 "BWBWBWBW",
				 "WBWBWBWB",
				 "BWBWBWBW",
				 "WBWBWBWB",
				 "BWBWBWBW",
				 "WBWBWBWB",
				 "BWBWBWBW" };


int WF(int x, int y)
{
	int result = 0;

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (originArr[x + i][y + j] != BW[i][j])
			{
				result++;
			}
		}
	}
	return result;
}

int BF(int x, int y)
{
	int result = 0;

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (originArr[x + i][y + j] != WB[i][j])
			{
				result++;
			}
		}
	}

	return result;
}

int main()
{
	int M, N;
	cin >> M >> N;

	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> originArr[i][j];
		}
	}
	int minVal = 64;

	for (int i = 0; i + 8 <= M; i++)
	{
		for (int j = 0; j + 8 <= N; j++)
		{
			int temp = min(WF(i, j), BF(i, j));
			if (temp < minVal) minVal = temp;
		}
	}

	cout << minVal;

	return 0;
}