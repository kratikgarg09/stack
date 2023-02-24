#include <bits/stdc++.h> 
// Implement class for minStack.
class minStack
{
	// Write your code here.
	
	public:
		stack<int> st;
		int mini;
		
		minStack() 
		{ 
			
		}
		
		
		void push(int num)
		{
			if(st.empty()){
				st.push(num);
				mini = num;
			}
			else{
				if(num < mini){
					st.push(2*num-mini);
					mini = num;
				}
				else{
					st.push(num);
				}
			}
			
		}
		
		
		int pop()
		{
			if(st.empty()){
				return -1;
			}
			int curr = st.top();
			st.pop();
			if(curr > mini){
				return curr;
			}
			else{
				int prevmin = mini;
				int val = 2*mini-curr;
				mini = val;
				return prevmin;
			}
			
		}
		
	
		int top()
		{
			if(st.empty()){
				return -1;
			}
			int curr = st.top();
			if(curr < mini){
				return mini;
			}
			else{
				return curr;
			}
			
		}
		
		
		int getMin()
		{
			if(st.empty()){return -1;}
			return mini;
		
		}
};