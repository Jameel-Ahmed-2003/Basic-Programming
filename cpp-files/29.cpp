#include <bits/stdc++.h>
using namespace std;
void pushOperation(stack<int> &arr, int &val, int &minimum)
{
    if (arr.empty())
    {
        minimum = val;
        arr.push(val);
    }
    else
    {
        if (val > minimum)
            arr.push(val);
        else
        {
            arr.push(2 * val - minimum);
            minimum = val;
        }
    }
}
int popOperation(stack<int> &arr, int &n, int &minimum)
{
    if (arr.empty())
        return 0;
    n = arr.top();
    arr.pop();
    if (n < minimum)
        minimum = 2 * minimum - n;
}
int topOperation(stack<int> &arr, int &n, int &minimum)
{
    if (arr.empty())
        return 0;
    n = arr.top();
    if (minimum < n)
        return n;
    return minimum;
}
int getMin(stack<int>&arr,int&minimum)
{
    if(!arr.empty())
    return minimum;
    else
    return 0;
}
int main()
{
    stack<int> arr;
    int choice, val, prevmin, minimum = 10000000, n;
    cout << "1.PUSH\t2.POP\t3.TOP\t4.MINIMUM\t5.EXIT\n";
    do
    {
        cout << "ENTER YOUR CHOICE : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter value to push : ";
            cin >> val;
            pushOperation(arr, val, minimum);
            break;
        case 2:
            popOperation(arr, n, minimum);
            break;
        case 3:
            cout<<topOperation(arr, n, minimum)<<endl;
            break;
        case 4:
        cout<<getMin(arr,minimum)<<endl;
        break;
        case 5:
            exit(0);
        }
    } while (choice != 5);
    return 0;
}
