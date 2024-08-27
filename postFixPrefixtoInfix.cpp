//postfix to infix conversion and prefix to infix conversion
#include<bits/stdc++.h>
using namespace std;
string postFixToInfix(string postfixExpression,int l)
{
    stack<string>operands;
    for(size_t i=0;i<l;i++)
    {
        if(isalpha(postfixExpression[i]))
        operands.push(string(1,postfixExpression[i]));
        else
        {
            string str1=operands.top();
            operands.pop();
            string str2=operands.top();
            operands.pop();
            string expr=')'+str1+postfixExpression[i]+str2+'(';
            // string expr="("+str1+postfixExpression[i]+str2+")";
            operands.push(expr);
        }
    }
    reverse(operands.top().begin(),operands.top().end());
    return operands.top();
}
string prefixToInfix(string prefixExpression,int l)
{
    reverse(prefixExpression.begin(),prefixExpression.end());
    string infixExpression=postFixToInfix(prefixExpression,prefixExpression.size());
    // reverse(prefixExpression.begin(),prefixExpression.end());
    return infixExpression;
}
int main()
{
    string postfixExpression,prefixExpression;
    cout<<"Enter postfix expression : ";
    getline(cin,postfixExpression);
    cout<<postFixToInfix(postfixExpression,postfixExpression.size())<<endl;
    cout<<"Enter prefix expression : ";
    getline(cin,prefixExpression);
    cout<<prefixToInfix(prefixExpression,prefixExpression.size());
    return 0;
}
