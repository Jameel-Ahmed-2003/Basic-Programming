//lemonade problem leetcode
#include<iostream>
using namespace std;
bool solve(int bills[],int n)
{
    int fives=0,tens=0;
    for(size_t i=0;i<n;i++)
    {
        if(bills[i]==5)
        fives++;
        else if(bills[i]==10)
        tens++;
        else
        {
            if(tens>0)
            {
                tens++;
                fives--;
            }
            else
            fives-=3;
        }
        if(fives<0)
        return false;
    }
    return true;
}
int main()
{
    int bills[]={5,5,10,20};
    cout<<solve(bills,sizeof(bills)/sizeof(bills[0]));
    return 0;
}
