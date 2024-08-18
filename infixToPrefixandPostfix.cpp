//INFIX TO POSTFIX CONVERSION AND PREFIX CONVERSION
#include<bits/stdc++.h>
using namespace std;
bool a;
int precedence(char op)
{
    switch(op)
    {
        case '^':
        return 3;
        case '*':
        case '/':
        return 2;
        case '+':
        case '-':
        return 1;
    }
    return 0;
}
string infixToPostfix(string infixExpression,int l)
{
    stack<char>operators;
    string pdmas="^/*+-";
    string postfixExpression;
    for(size_t i=0;i<l;i++)
    {
        if(isalpha(infixExpression[i]))
        postfixExpression+=infixExpression[i];
        else if(infixExpression[i]=='(')
        operators.push(infixExpression[i]);
        else if(infixExpression[i]==')')
        {
            for(;!operators.empty()&&operators.top()!='(';postfixExpression+=operators.top(),operators.pop());
            operators.pop();
        }
        else if(any_of(pdmas.begin(),pdmas.end(),[&](char operation){return infixExpression[i]==operation;}))
        {
            if(a==1)//check if infixtoprefix
            for(;!operators.empty()&&precedence(operators.top())>precedence(infixExpression[i]);postfixExpression+=operators.top(),operators.pop());
            else//check if infixtopostfix
            for(;!operators.empty()&&precedence(operators.top())>=precedence(infixExpression[i]);postfixExpression+=operators.top(),operators.pop());
            operators.push(infixExpression[i]);
        }
    }
    for(;!operators.empty();postfixExpression+=operators.top(),operators.pop());
    return postfixExpression;
}
string infixToPrefix(string infixExpression,int l)
{
    a=1;
    reverse(infixExpression.begin(),infixExpression.end());
    for(size_t i=0;i<l;i++)
    {
        if(infixExpression[i]=='(')
        infixExpression[i]=')';
        else if(infixExpression[i]==')')
        infixExpression[i]='(';
    }
    string prefixExpression=infixToPostfix(infixExpression,l);
    reverse(prefixExpression.begin(),prefixExpression.end());
    return prefixExpression;
}
int main()
{
    string infixExpression;
    cout<<"ENTER THE INFIX EXPRESSION : ";
    getline(cin,infixExpression);
    cout<<"POSTFIX EXPRESSION : "<<infixToPostfix(infixExpression,infixExpression.size())<<endl;
    cout<<"PREFIX EXPRESSION : "<<infixToPrefix(infixExpression,infixExpression.size())<<endl;
    return 0;
}
