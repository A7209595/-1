#include <iostream>
#include <vector>
using namespace std;

int min(const vector<vector<int>>& matrix) {
	int min = matrix[0][0];
	for (unsigned row = 0; row < matrix.size(); row++)
	{
		for (unsigned column = 0; column < matrix[row].size(); column++)
		{
			if (matrix[row][column] < min)
				min = matrix[row][column];
		}
	}
	return min;
}

int main()
{
	vector<vector<int>> matrix(4);
	int a;
	for (unsigned i = 0; i < 4; i++)
		matrix[i] = vector<int>(3);

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> a;
			matrix[i][j] = a;
		}
	}
	
	cout << "min:" << min(matrix);

	system("pause");
	return 0;
}