
#include <bits/stdc++.h> 
void solve(stack<int>& st, int x){
     if(st.empty()){
        st.push(x);
         return;
    }
    int y = st.top();
    st.pop();
    solve(st,x);
    st.push(y);
}
stack<int> pushAtBottom(stack<int>& st, int x) 
{
    // Write your code here.
    solve(st,x);
    return st;
}
