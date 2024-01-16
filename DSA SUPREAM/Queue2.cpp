#include <iostream>
#include <queue>
#include <stack>
#include <deque>
using namespace std;

// reverse Queue:

void reverseQueue(queue<int> &q)
{
    stack<int> s;

    // step 1: put all element of queue into stack

    while (!q.empty())
    {
        int element = q.front();
        q.pop();

        s.push(element);
    }

    // step2 : put all element from stack into queue
    while (!s.empty())
    {
        int element = s.top();
        s.pop();
        q.push(element);
    }
}

void reverseQueuerecursion(queue<int> &q)
{
    // base case;
    if (q.empty())
    {
        return;
    }
    /// step A;
    int temp = q.front();
    q.pop();

    // step B :
    reverseQueuerecursion(q);

    // step C:
    q.push(temp);
}

// reverse first k elemtnt of Queue:

void reverseKelement(queue<int> &q, int k)
{
    // step A : queue -> k elements ->stack :

    stack<int> s;
    int count = 0;
    int n = q.size();

    if (k == 0 || k >= n)
    {
        return;
    }

    while (!q.empty())
    {
        int temp = q.front();
        q.pop();
        s.push(temp);
        count++;

        if (count == k)
        {
            break;
        }
    }

    while (!s.empty())
    {
        int temp = s.top();
        s.pop();
        q.push(temp);
    }

    // step C : push n-k element from front to back :

    count = 0;
    while (!q.empty() && n - k != 0)
    {
        int temp = q.front();
        q.pop();
        q.push(temp);
        count++;

        if (count == n - k)
        {
            break;
        }
    }
}

// interleave

void interleaveQueue(queue<int> &q, int k)
{
    // step A :
    int n = q.size();
    if (q.empty())
    {
        cout << "q is empty : " << endl;
        return;
    }
    k = n / 2;
    int count = 0;
    queue<int> q2;

    while (!q.empty())

    {
        int temp = q.front();
        q.pop();
        q2.push(temp);
        count++;

        if (count == k)
        {
            break;
        }
    }

    // stepB: interleaving start kardo :
    while (!q.empty() && !q2.empty())
    {
        int first = q2.front();
        q2.pop();

        q.empty();

        q.push(first);

        int second = q.front();
        q.pop();

        q.push(second);
    }

    // odd wala case:

    if (n & 1)
    {
        int element = q.front();
        q.pop();
        q.push(element);
    }
}

// first -ve integer in every window of size K :

void solve(int arr[], int n, int k)
{
    deque<int> q;

    // process first window:
    for (int i = 0; i < k; i++)
    {
        if (arr[i] < 0)
        {
            q.push_back(i);
        }
    }
    // remaning window ko process karo :

    for (int i = k; i < n; i++)
    {
        // ans de do : purani window:
        if (q.empty())
        {
            cout << 0 << " ";
        }

        else
        {
            cout << arr[q.front()] << " ";
        }

        // remove out of  window :
        
        while ((!q.empty()) && (i - q.front() >= k))
        {
            q.pop_front();
        }

        if (arr[i] < 0)
        {
            q.push_back(i);
        }
    }

    if (q.empty())
    {
        cout << 0 << " ";
    }

    else
    {
        cout << arr[q.front()] << " ";
    }
}

int main()
{
    queue<int> q;
    q.push(3);
    q.push(6);
    q.push(9);
    q.push(2);
    q.push(8);

    reverseQueue(q);
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}

// int main(){
//     int arr[]= {12,-1,-7,8,-15,30,16,28};
//     int size = 8;

//     int k = 3;

//     queue<int>q;

// q.push(1);
// q.push(2);
// q.push(3);
// q.push(4);
// q.push(5);
// q.push(6);
// q.push(7);
// q.push(8);

// reverseQueue(q);

//     // solve(arr,size,k);

//     return 0;

// }

// int main(){

// queue<int>q;

// // q.push(1);
// // q.push(2);
// // q.push(3);
// // q.push(4);
// // q.push(5);
// // q.push(6);
// // q.push(7);
// // q.push(8);

// reverseQueue(q);
// // reverseQueuerecursion(q);
// // reverseKelement(q,5);

// interleaveQueue(q,3);

// while(!q.empty()){
//     cout<<q.front()<<" ";
//     q.pop();

// }
// cout<<endl;
//     return 0;
// }