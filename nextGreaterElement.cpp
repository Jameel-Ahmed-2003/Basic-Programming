//leetcode
#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main()
{
    int arr[] = {4, 12, 5, 3, 1, 2, 5, 3, 1, 2, 4, 6};
    int length = sizeof(arr) / sizeof(int);
    stack<int> st;
    vector<int> nge(length);
    int i;
    for (i = length - 1; i > -1; i--)
    {
        while (!st.empty() && st.top() <= arr[i])
            st.pop();
        nge[i] = (st.empty()) ? -1 : st.top();
        st.push(arr[i]);
    }
    for (i = 0; i < length; i++)
        cout << nge[i] << " ";
    return 0;
}
