#include <bits/stdc++.h>
using namespace std;
int main()
{
    string operators = "^/*+-";
    string expression = "5+5=10/";
    for (int j = 0; j < expression.size(); j++)
    {
        if (any_of(expression.begin(), expression.end(), [&](char i)
                   { return i == operators[j]; }))
        {
            cout << "found\n";
        }
    }
    return 0;
}
