#include <iostream>

using namespace std;

const int SIZE = 8;

void traektoriyQeen(int Q[SIZE][SIZE], int a, int b)
{
	for (int i = 0; i < SIZE; i++)
		for (int j = 0; j < SIZE; j++)
			if (abs(i - a) == abs(j - b) || i == a || j == b)
				Q[i][j]++;
}

void traektoriyQeen2(int Q[SIZE][SIZE], int i, int j)
{
	for (int k = 0; k < SIZE; k++) {
		for (int n = 0; n < SIZE; n++)
			if (abs(k - i) == abs(n - j) || k == i || n == j)
				Q[k][n]++;
	}
}

void printMatr(int Q[SIZE][SIZE])
{
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++)
			cout << Q[i][j] << " ";
		cout << endl;
	}

}

int main()
{
	int Q[SIZE][SIZE] = { 0 };

	int a, b;
	cin >> a >> b;

	traektoriyQeen(Q, a, b);

	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			if (Q[i][j] == 0)
				traektoriyQeen2(Q, i, j);
		}
	}
	printMatr(Q);
	return 0;
}

