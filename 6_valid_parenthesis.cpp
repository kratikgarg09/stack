#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isValid(string s)
    {
        // create a stack
        stack<char> st;

        for (int i = 0; i < s.length(); i++)
        {

            char ch = s[i];

            // if ch is opening bracket then push it into stack
            //  else compare the top of stack with char

            if (ch == '(' || ch == '{' || ch == '[')
            {
                st.push(ch);
            }
            else
            {
                if (!st.empty())
                {
                    char top = st.top();
                    if ((ch == ')' && top == '(') || (ch == '}' && top == '{') || (ch == ']' && top == '['))
                    {
                        st.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
                else
                {
                    return false;
                }
            }
        }
        if (st.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    string s = "(){}[](){}[]";
    
    return 0;
}