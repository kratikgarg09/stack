#include<iostream> 
#include<bits/stdc++.h>
using namespace std; 

int main() 
{ 
    stack<int> st;

    // Push function is used for push the value in a stack
    st.push(23);
    st.push(24);
    st.push(25);
    st.push(26);
    st.push(27);
    st.push(28);
    

    //pop function is used for pop the topmost value of the stack
    st.pop();

    // top function used for finding the topmost value of the stack
    st.top();

    // empty function is for identify the stack is empty or not
    if(st.empty()){
        cout << "stack is empty" << endl;
    }
    else{
        cout << "stack is Not empty" << endl;
    }
    
    return 0;
}