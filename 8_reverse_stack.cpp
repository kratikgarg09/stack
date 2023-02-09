#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve(stack<int> &st, int x)
{
    if (st.empty())
    {
        st.push(x);
        return;
    }
    int y = st.top();
    st.pop();
    solve(st, x);
    st.push(y);
}

stack<int> pushAtBottom(stack<int> &st, int x)
{
    // Write your code here.
    solve(st, x);
    return st;
}

void reverseStack(stack<int> &st)
{
    // Write your code here
    if (st.empty())
    {
        return;
    }
    int top = st.top();
    st.pop();
    reverseStack(st);
    pushAtBottom(st, top);
}

void reverseStack2(stack<int> &st){
    vector<int> arr;
    while(!st.empty()){
        arr.push_back(st.top());
        st.pop();
    }
    for (int i = 0; i < arr.size(); i++)
    {
        st.push(arr[i]);
    }    
}

void printStack(stack<int> st)
{

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main()
{
    stack<int> st;
    st.push(5);
    st.push(3);
    st.push(4);
    st.push(6);
    st.push(7);
    st.push(8);
    printStack(st);
    reverseStack2(st); 
    printStack(st);
    return 0;
}