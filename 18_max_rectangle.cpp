//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000


// } Driver Code Ends
/*You are required to complete this method*/

class Solution{
  private:
    vector<int> nextSmallerIndex(int *arr,int n){
        stack<int> st;
        st.push(-1);
        vector<int> ans(n);
        for(int i = n-1; i >= 0; i--){
            int curr = arr[i];
            while(st.top() != -1 && arr[st.top()] >= curr){
                st.pop();
            }
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }

    vector<int> prevSmallerIndex(int*arr,int n){
        stack<int> st;
        st.push(-1);
        vector<int>ans(n);
        for(int i = 0; i < n; i++){
            int curr = arr[i];
            while(st.top() != -1 && arr[st.top()] >= curr){
                st.pop();
            }
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }

    int largestRectangleArea(int *heights,int n){

        vector<int> next;
        next = nextSmallerIndex(heights,n);

        vector<int>prev;
        prev = prevSmallerIndex(heights,n);

        int area = INT_MIN;
        for(int i = 0; i < n; i++){
            int l = heights[i];
            if(next[i] == -1){
                next[i] = n;
            }
            int b = next[i] - prev[i] - 1;
            int newArea = l * b;
            area = max(area,newArea);
        }
        return area;
    }
  public:
    int maxArea(int M[MAX][MAX], int n, int m) {
        // Your code here
       int area = largestRectangleArea(M[0],m);

        for(int i = 1; i < n; i++){
            for(int j = 0; j < m; j++){
                if(M[i][j] != 0){
                    M[i][j] += M[i-1][j];
                }
                else{
                    M[i][j] = 0;
                }
            }
            area = max(area, largestRectangleArea(M[i],m));
        }
        return area;
        
    }
};


//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;

    int M[MAX][MAX];

    while (T--) {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> M[i][j];
            }
        }
        Solution obj;
        cout << obj.maxArea(M, n, m) << endl;
    }
}

// } Driver Code Ends