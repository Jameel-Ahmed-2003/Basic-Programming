//leetcode problem similar to maximum subarray sum
#include <iostream>
#include <algorithm>
using namespace std;
int minimumSubArraySum(int arr[], int n)
{
    int i, sum = 0;
    int minEl = *min_element(arr, arr + n);
    for (i = 0; i < n; i++)
    {
        sum += arr[i];
        minEl = min(sum, minEl);
        if (sum > 0)
            sum = 0;
    }
    return minEl;
}
int main()
{
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    cout << minimumSubArraySum(arr, sizeof(arr) / sizeof(arr[0]));
    return 0;
}
