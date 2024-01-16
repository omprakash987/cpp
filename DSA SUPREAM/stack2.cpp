#include <iostream>
#include <stack>
using namespace std;

// INSERT AT BOTTOM

void insertAtBottom(stack<int> &s, int target)
{
    if (s.empty())
    {
        s.push(target);
        return;
    }
    int topElement = s.top();
    s.pop();
    //  rec call
    insertAtBottom(s, target);

    // BT
    s.push(topElement);
}

// REVERSE THE STACK
void reverseStack(stack<int> &s)
{
    // base case
    if (s.empty())
    {
        return;
    }

    int target = s.top();
    s.pop();

    // reverse stack;
    reverseStack(s);

    // insert at bottom target ko
    insertAtBottom(s, target);
}

// sort a stack :
void insertSorted(stack<int> &s, int target)
{
    // base case
    if (s.empty())
    {
        s.push(target);
        return;
    }

    if (s.top() >= target)
    {
        s.push(target);
        return;
    }

    int topElement = s.top();
    s.pop();

    insertSorted(s, target);

    // backtrack
    s.push(topElement);
}

void sortStack(stack<int> &s)
{
    // base case:
    if (s.empty())
    {
        return;
    }
    int topElement = s.top();
    s.pop();

    sortStack(s);

    insertSorted(s, topElement);
}

/// Remove redundent bracket:

int main()
{

    //   stack<int>s;
    //   s.push(10);
    //   s.push(20);
    //   s.push(30);
    //   s.push(40);
    //   s.push(50);

    //     if(s.empty()) {
    //         cout << "stack is empty, cant insert at bottom" << endl;
    //         return 0;
    //   }

    //   int target = s.top();
    //   s.pop();
    //   insertAtBottom(s, target);

    //    reverseStack(s);

    //   cout<<"printing : ";

    stack<int> s;
    s.push(7);
    s.push(11);
    s.push(3);
    s.push(5);
    s.push(9);

    sortStack(s);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}