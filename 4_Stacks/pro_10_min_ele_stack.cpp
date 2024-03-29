// used formula helps for backtracking
#include <bits/stdc++.h>
using namespace std;
#find minim element in stack
/*
    class MinStack {
public:
    stack<int>s;
    stack<int>min_stack;
    MinStack() {

    }

    void push(int val) {
        if(min_stack.size() == 0 || val<=min_stack.top())
        {
            min_stack.push(val);
        }
        s.push(val);
    }

    void pop() {
        if(min_stack.top() == s.top()) min_stack.pop();
        s.pop();
    }

    int top() {
        return s.top();
    }

    int getMin() {
        return min_stack.top();
    }
};
*/
class Stack
{
public:
    stack<int> s;
    int minEle;

    int get_min()
    {
        if (s.empty())
        {
            cout << "stack empty ";
        }
        else
            cout << " minimum element in stack is " << minEle;
    }

    void pop()
    {
        if (s.empty())
        {
            cout << "Stack is empty\n";
            return;
        }

        cout << "Top Most Element Removed: ";
        int t = s.top();
        s.pop();

        if (t < minEle)
        {
            cout << minEle << "\n";
            minEle = 2 * minEle - t;
        }

        else
            cout << t << "\n";
    }

    void push(int ele)
    {
        if (s.empty())
        {
            minEle = ele;
            s.push(ele);
            cout << "Number inserted : " << ele << endl;
            return;
        }

        if (ele < minEle)
        {
            s.push(2 * ele - minEle);
            minEle = ele;
            // s.push(2*ele-minEle); // wrong answer
            cout << "Number inserted : " << ele << endl;
        }
        else
            s.push(ele);
    }
    void top()
    {
        if (s.empty())
        {
            cout << "Stack is empty ";
            return;
        }

        int t = s.top();
        if (t < minEle)
        {
            cout << minEle;
        }
        else
        {
            cout << t;
        }
    }
};
int main()
{
    Stack s;
    s.push(5);
    s.push(3);
    s.push(0);
    s.pop();
    s.get_min();
    cout << endl;
    s.top();
}