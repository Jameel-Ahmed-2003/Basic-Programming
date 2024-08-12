/*
C program to generate a spiral matrix
input 1: 4
1 2 3 4
12 13 14 5
11 16 15 6
10 9 8 7
*/
#include <iostream>
#include <vector>
#include <windows.h>
using namespace std;
vector<vector<int>> generateMatrix(int n)
{
    int startRow = 0;
    int startCol = 0;
    int endRow = n - 1;
    int endCol = n - 1;
    int data = 1;
    int end = n * n;
    int i;
    vector<vector<int>> matrix(n, vector<int>(n, 0));
    while (data <= end)
    {
        for (i = startCol; data <= end and i <= endCol; matrix[startRow][i] = data++, i++)
            ; // left to right
        startRow++;
        for (i = startRow; data <= end && i <= endRow; matrix[i][endCol] = data++, i++)
            ; // top to bottom
        endCol--;
        for (i = endCol; data <= end && i >= startCol; matrix[endRow][i] = data++, i--)
            ; // right to left
        endRow--;
        for (i = endRow; data <= end && i >= startRow; matrix[i][startCol] = data++, i--)
            ; // bottom to top
        startCol++;
    }
    return matrix;
}
void printMatrix(const vector<vector<int>> &matrix)
{
    for (const auto row : matrix)
    {
        for (int val : row)
            cout << val << " ";
        cout << endl;
    }
}
int main()
{
    system("cls");
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    cout << "Matrix :\n";
    vector<vector<int>> matrix = generateMatrix(n);
    printMatrix(matrix);
    return 0;
}
