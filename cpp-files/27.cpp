/*
https://youtu.be/fSwaS3WFGAQ?si=M39JOzUWZbNuIHXF
*/
#include<iostream>
#include<windows.h>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"n: ";
    cin>>n;
    cout<<"Bricks required : "<<(3*pow(n,2)+n)/2;
    return 0;
}
