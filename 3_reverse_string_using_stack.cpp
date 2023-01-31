#include<iostream> 
#include<bits/stdc++.h>
using namespace std; 

int main() 
{   
    string str = "mohit";
    stack<char> st;
    for (int i = 0; i < str.length(); i++)
    {
        st.push(str[i]);
    }
    string ans;
    while(st.size() != 0){
        ans.push_back(st.top());
        st.pop();
    }
    cout << ans;
    

    return 0;
}