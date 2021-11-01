#include <iostream>
#include <string>

using namespace std;

string coordsToString(int x);
const int SIZE = 8;
bool checkByQueen(int x, int y, int Qx, int Qy);

int main()
{
    setlocale(LC_ALL, "rus");
   
    int row[SIZE] = { 0 }; //ряды
    int col[SIZE] = { 0 }; //столбцы
    int vol = 0;
        for (int i = 0; i < 8; i++) {
                for (int j = 0; j < 8; j++) {
                   
                    int count = 0;
                    for (int k = 0; k < SIZE; k++) {
                       
                        if ((checkByQueen(row[k], col[k], i, j)) == false) {
                            count++;
                            if (count == SIZE) {
                                row[i] = i;
                                col[i] = j;
                                vol++;
                                break;
                            }
                        }
                    }
                }
            }

    for (int i = 0; i <= vol; i++) {
        cout << coordsToString(row[i]) <<col[i]+1<< endl;
    }
    return 0;
}

string coordsToString(int x)
{
    char c = 'A' + x;
    string s = "";
    s += c;
    return s;
}

bool checkByQueen(int x, int y, int Qx, int Qy)
{
    return (x == Qx || y == Qy || abs(Qy - y) == abs(Qx - x));
}

