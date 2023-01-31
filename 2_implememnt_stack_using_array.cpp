#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Stack
{
public:
    //properties
    int* arr;
    int top;
    int size;

    // behaviour
    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int val){
        if(size - top > 1){
            top++;
            arr[top] = val;
        }
        else{
            cout << "stack overflow" << endl;
        }
    }

    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout << "stack underflow" << endl;
        }
    }

    int peek(){
        if(top >= 0){
            return arr[top];
        }
        else{
            cout << "stack is empty" << endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main()
{
    Stack st(6);
    st.push(5);   
    st.push(4);
    st.push(3);
    st.push(8);
    st.push(2);
    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    (st.isEmpty()) ? cout<<"stack is empty" << endl : cout << "stack is not  empty"<<endl;
    return 0;
}