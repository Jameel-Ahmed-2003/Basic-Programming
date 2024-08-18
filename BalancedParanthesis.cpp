//balancedParanthesis
#include <bits/stdc++.h>
using namespace std;
bool check(string pth)
{
    stack<char> charStack;
    for (size_t i = 0; i < pth.size(); i++)
    {
        switch (pth[i])
        {
        case '{':
        case '(':
        case '[':
            charStack.push(pth[i]);
            break;
        default:
            if (charStack.empty())
                return false;
            char ch = charStack.top();
            charStack.pop();
            if (!(pth[i] == ']' && ch == '[' || pth[i] == '}' && ch == '{' || pth[i] == ')' && ch == '('))
                return false;
        }
    }
    return charStack.empty();
}
int main()
{
    string pth;
    getline(cin, pth);
    if (check(pth))
        cout << "Balanced!";
    else
        cout << "Unbalanced";
}
