#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main()
{
	int N, M;
	cin >> N >> M;
	int arr[100][100];
	int arr2[100][100];
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			int num;
			cin >> num;
			arr[i][j] = num;
		}
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			int num;
			cin >> num;
			arr2[i][j] = num;
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cout << arr[i][j] + arr2[i][j] << " ";
		}
		cout << endl;
	}

	

		return 0;
}