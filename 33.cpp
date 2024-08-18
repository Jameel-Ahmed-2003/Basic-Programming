// remove digit from a given integer
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter an integer : ";
    cin >> num;
    int target;
    cout << "Enter digit to remove :";
    cin>>target;
    int result = 0;
    int multiplier = 1;

    while (num != 0)
    {
        int rem = num % 10;
        if (rem != target)
        {
            result += rem * multiplier;
            multiplier *= 10;
        }
        num /= 10;
    }

    printf("%d", result);
    return 0;
}
