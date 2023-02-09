#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class solution
{
private:
    void reverseStack(stack<int> &st)
    {
        vector<int> arr;
        while (!st.empty())
        {
            arr.push_back(st.top());
            st.pop();
        }
        for (int i = 0; i < arr.size(); i++)
        {
            st.push(arr[i]);
        }
    }

public:
    void sortStack(stack<int> &st)
    {
        vector<int> arr;

        while (!st.empty())
        {
            arr.push_back(st.top());
            st.pop();
        }
        sort(arr.begin(), arr.end());

        for (int i : arr)
        {
            cout << "all okay" << endl;
            st.push(i);
        }
        reverseStack(st);
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
};

int main()
{
    stack<int> st;
    st.push(2);
    st.push(5);
    st.push(1);
    st.push(0);
    st.push(-6);
    st.push(7);
    solution s;

    s.printStack(st);

    s.sortStack(st);

    s.printStack(st);

    return 0;
}
