#include <bits/stdc++.h>
#include <iostream>

using namespace std;

class NStack
{
    int *arr, *top, *next;
    int n, s, freeSpot;

public:
    // Initialize your data structure.
    NStack(int N, int S)
    {
        s = S;
        n = N;
        arr = new int[s];
        top = new int[n];
        next = new int[s];

        // assign top with -1;
        for (int i = 0; i < n; i++)
        {
            top[i] = -1;
        }

        // assign next with next free spaceof that index
        for (int i = 0; i < s; i++)
        {
            next[i] = i + 1;
        }

        // update last index with -1;'
        next[s - 1] = -1;

        // initialise freespot
        freeSpot = 0;
    }

    // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the stack, and false otherwise.
    bool push(int x, int m)
    {
        // check stack overflow;
        if (freeSpot == -1)
        {
            return 0;
        }

        // Write your code here.
        // find index
        int index = freeSpot;

        // insert element at free spot/index
        arr[index] = x;

        // update freeSpot
        freeSpot = next[index];

        // update next
        next[index] = top[m - 1];

        // upddate top
        top[m - 1] = index;
        return true;
    }

    // Pops top element from Mth Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
    int pop(int m)
    {
        // Write your code here.
        // checkin is stack underflow or not
        if (top[m - 1] == -1)
            return -1;

        int index = top[m - 1];
        top[m - 1] = next[index];
        next[index] = freeSpot;
        freeSpot = index;
        return arr[index];
    }
};

int main()
{
    return 0;
}