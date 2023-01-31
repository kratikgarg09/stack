#include<iostream> 
#include<bits/stdc++.h>
using namespace std; 

void solve(stack<int> &st, int N, int count)
{
    if (count == N / 2)
    {
        st.pop();
        return;
    }
    int num = st.top();
    st.pop();
    solve(st, N, count + 1);
    st.push(num);
}
void deleteMiddle(stack<int> &st, int N)
{
    // Write your code here
    int count = 0;
    solve(st, N, count);
}

int main()
{
    stack<int> st;
    st.push(5);
    st.push(6);
    st.push(7);
    st.push(8);
    st.push(9);
    
    deleteMiddle(st,4);
    return 0;
}