#include <iostream>

using namespace std;

const int SIZE = 8;

void traektoriyQueen(int Q[SIZE][SIZE], int a, int b)
{
	for (int i = 0; i < SIZE; i++)
		for (int j = 0; j < SIZE; j++)
			if (abs(i - a) == abs(j - b) || i == a || j == b)
				Q[i][j]++;
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
	setlocale(LC_ALL, "rus");
	int Q[SIZE][SIZE] = { 0 };
	cout << "Введите координаты первого ферзя: ";
	int a, b;
	cin >> a >> b;
	cout << "Координаты 1 ферзя: " << a << " " << b << endl;
	traektoriyQueen(Q, a, b);

	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			if (Q[i][j] == 0) {
				traektoriyQueen(Q, i, j);
				cout << "Координаты " << i + 1 << " ферзя: " << i << " " << j << endl;
			}
		}
		if (i != 7) {

		}
	}
	cout << endl;
	printMatr(Q);
	return 0;
}

