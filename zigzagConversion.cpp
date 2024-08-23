//leetcode problem zig-zag conversion
#include <bits/stdc++.h>
using namespace std;
string convert(string s, int numRows)
{
    int row = numRows;
    int col = s.size();
    vector<vector<char>> v(row, vector<char>(col, '0'));
    int k = 0, j = 0;
    while (k < s.size())
    {
        for (int i = 0; i < row && k != s.size(); i++)
            v[i][j] = s[k++];
        j++;
        for (int i = row - 2; i >= 1 && k != s.size(); v[i][j++] = s[k++], i--)
            ;
    }
    string answer;
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            if (v[i][j] != '0')
                answer += v[i][j];
        }
    }
    return answer;
}
int main()
{
    string s = "LEETCODEISHIRING";
    int numRows = 3;
    cout << convert(s, numRows) << endl; // Output: LCIRETOESIIGEDHN
    return 0;
}
