#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int sumRow = 0;
    int sumCol = 0;
    int mid = floor(3 / 2);
    for (int i = 0; i < 3; i++)
    {
        sumRow = sumRow + arr[mid][i];
    }
    for (int i = 0; i < 3; i++)
    {
        sumCol = sumCol + arr[i][mid];
    }

    cout << sumRow << endl;
    cout << sumCol;
}