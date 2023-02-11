#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    vector<int> prevSmaller(vector<int> &arr)
    {
        stack<int> st;
        st.push(-1);
        for (int i = 0; i <= arr.size(); i++)
        {
            int curr = arr[i];
        
            while (st.top() >= arr[i])
            {
                st.pop();
            }
            
            arr[i] = st.top();
            
            st.push(curr);
        }
        return arr;
    }
};

int main()
{

    vector<int> arr;
    arr = {2, 1, 3, 4};
    solution s;
    vector<int> ans = s.prevSmaller(arr);

    for (auto i : ans)
    {
        cout << i << " ";
    }

    return 0;
}