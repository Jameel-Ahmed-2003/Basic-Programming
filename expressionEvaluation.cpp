//evaluating the expression zoho 2025 batch
#include<bits/stdc++.h>
using namespace std;
int i,val2,val1,val;
char op;
stack<int>values;
stack<char>operators;
int precedence(char op)
{
    switch(op)
    {
        case '+':
        case '-':
        return 1;
        case '*':
        case '/':
        return 2;
    }
    return 0;
}
int applyOperation(int a,int b,char op)
{
    switch(op)
    {
        case '+':
        return a+b;
        case '-':
        return a-b;
        case '*':
        return a*b;
        case '/':
        if(b==0)
        throw invalid_argument("Zero Division Error!\n");
        return a/b;
    }
    return  0;
}
void performOperation(stack<int>&values,stack<char>&operators)
{
    val2=values.top();
    values.pop();
    val1=values.top();
    values.pop();
    op=operators.top();
    operators.pop();
    values.push(applyOperation(val1,val2,op));
}
int evaluate(string expression)
{
    
    for(i=0;i<expression.length();i++)
    {
        if(expression[i]=='(')// if open paranthesis detected
        operators.push(expression[i]);
        else if(expression[i]==')')//if close paranthesis detected 
        {
            for(;!operators.empty()&&operators.top()!='(';)//perform operation within the paranthesis
            performOperation(values,operators);
            if(!operators.empty())// if open paranthesis followed by close paranthesis detected ()
            operators.pop();
        }
        else if(isdigit(expression[i]))
        {
            for(val=0;isdigit(expression[i])&&i<expression.length();val=val*10+expression[i++]-'0');
            values.push(val);
            i--;
        }
        else
        {
            for(;!operators.empty() && precedence(operators.top())>=precedence(expression[i]);)//if operator is detected  more than once
            performOperation(values,operators);
            operators.push(expression[i]);
        }
    }
    for(;!operators.empty();)
    performOperation(values,operators);
    return values.top();
}
int main()
{
    string expression;
    cout<<"Enter the expression : ";
    getline(cin,expression);
    try
    {
        cout<<evaluate(expression);
    }
    catch(const invalid_argument&e) 
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}
