// 1962. Remove Stone to minimize the total:
// 767 . reorganize string
// 1405
// median in a stream :

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int signum(int a, int b)
{
    if (a == b)
    {
        return 0;
    }
    if (a > b)
    {
        return 1;
    }
    if (a < b)
    {
        return -1;
    }
}

void calMedian(int &median, priority_queue<int> &maxHeap, priority_queue<int, vector<int>, greater<int>> &minHeap, int element)
{

    if (minHeap.size() == maxHeap.size())
    {
        if (element > median)
        {
            minHeap.push(element);
            median = minHeap.top();
        }
        else
        {
            maxHeap.push(element);
            median = maxHeap.top();
        }
    }

    else if (maxHeap.size() > minHeap.size())
    {
        if (element > median)
        {
            minHeap.push(element);
            median = (minHeap.top() + maxHeap.top()) / 2;
        }
        else
        {
            int maxTop = maxHeap.top();
            maxHeap.pop();
            minHeap.push(maxTop);
            maxHeap.push(element);
            median = (minHeap.top() + maxHeap.top()) / 2;
        }
    }

    else
    {
        if (element > median)
        {
            int minTop = minHeap.top();
            minHeap.pop();
            maxHeap.push(minTop);
            minHeap.push(element);
            median = (minHeap.top() + maxHeap.top()) / 2;
        }
        else
        {
            maxHeap.push(element);
            median = (minHeap.top() + maxHeap.top()) / 2;
        }
    }
}

int main()
{

    int arr[12] = {5,15,1,3,2,8,7,9,10,6,11,4};
    int n = 12;

    int median = 0;
    priority_queue<int> maxHeap;
    priority_queue<int, vector<int>, greater<int>> minHeap;

    for (int i = 0; i < n; i++)
    {
        int element = arr[i];

        calMedian(median, maxHeap, minHeap, element);

        cout << "->" << median << " "<<endl;
    }

    cout << endl;

    return 0;
}