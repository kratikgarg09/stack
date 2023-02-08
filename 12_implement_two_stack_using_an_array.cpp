#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class twoStack
{
private:
    int *arr;
    int top1;
    int top2;
    int size;

public:
    twoStack(int size)
    {
        this->size = size;
        arr = new int[size];
        top1 = -1;
        top2 = size;
    }
    void push1(int element)
    {
        top1++;
        arr[top1] = element;
    }
    void push2(int element)
    {
        top2--;
        arr[top2] = element;
    }

    int pop1()
    {
        if (top1 >= 0)
        {
            int ans = arr[top1];
            top1--;
            return ans;
        }
        return -1;
    }
    int pop2()
    {
        if (top2 <= 0)
        {
            int ans = arr[top2];
            top2++;
            return ans;
        }
        return -1;
    }

    int peek1(){
        if(top1>=0){
            return arr[top1];
        }
        return -1;
    }
    int peek2(){
        if(top2>=0){
            return arr[top2];
        }
        return -1;
    }
};
int main()
{
    
    
    return 0;
}
