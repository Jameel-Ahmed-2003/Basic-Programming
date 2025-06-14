//check if number is perfect square or not
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"n: ";
    cin>>n;
    if(ceil((double)sqrt(n))==floor((double)sqrt(n)))
    cout<<"Perfect square";
    else
    cout<<"Not a perfect square";
    return 0;
}
