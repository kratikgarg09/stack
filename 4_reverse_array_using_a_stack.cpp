#include<iostream> 
#include<bits/stdc++.h>
using namespace std; 

int main() 
{   
    vector<int> arr;
    arr = {1,2,3,4,5,6,7};
    stack<int> st;
    for (int i = 0; i < arr.size(); i++)
    {
        st.push(arr[i]);
    }
    vector<int> ans;
    while(st.size() != 0){
        ans.push_back(st.top());
        st.pop();
    }
    
    for (int i = 0; i < arr.size(); i++)
    {
        cout << ans[i] << " ";
    }
    
    

    return 0;
}