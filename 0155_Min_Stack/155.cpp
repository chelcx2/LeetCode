#include <bits/stdc++.h>
using namespace std;

class MinStack
{
private:
    vector<int> stk;

public:
    /** initialize your data structure here. */
    MinStack()
    {
        stk.clear();
    }

    void push(int val)
    {
        stk.push_back(val);
    }

    void pop()
    {
        stk.pop_back();
    }

    int top()
    {
        return stk[stk.size() - 1];
    }

    int getMin()
    {
        return *min_element(stk.begin(), stk.end());
        // int m = stk[0];
        // for (int i = 1; i < stk.size(); i++)
        // {
        //     if (stk[i] < m)
        //         m = stk[i];
        // }
        // return m;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */