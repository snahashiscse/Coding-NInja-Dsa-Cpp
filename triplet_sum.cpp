#include <iostream>
#include <algorithm>
using namespace std;
int tripletSum(int *arr, int n, int num)
{
	int count{};
	for (int i = 0; i < n; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			for (int k = j + 1; k < n; ++k)
			{
				if (arr[i] + arr[j] + arr[k] == num)
				{
					count++;
				}
			}
		}
	}
	return count;
}
int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int size;
		int x;
		cin >> size;

		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}
		cin >> x;

		cout << tripletSum(input, size, x) << endl;

		delete[] input;
	}

	return 0;
}
