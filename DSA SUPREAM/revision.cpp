#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
using namespace std;

class Heap
{
  int vlaue; 
  int arr[100];

  int size;

  Heap()
  {
    size = 0;
  }

  void insertIndex()
  {
    int size = size + 1;
    int index = size;
    arr[index] = value;

    // right place par leke ja ;
    while (index > 1)
    {
      int parentIndex = index / 2;
      if (arr[index] > arr[parentIndex])
      {
        swap(arr[index], arr[parentIndex]);
        index = parentIndex;
      }

      else
      {
        break;
      }
    }
  }

  int delete()
  {
    arr[1] = arr[size];
    size--;

    int index = 1;
    while (index < size)
    {
      int left = 2 * index;
      int right = 2 * index + 1;

      int largest = index;

      if (left < size && arr[left] < arr[largest])
      {
        largest = left;
      }
      if (right < size && arr[right] < arr[largest])
      {
        largest = right;
      }

      if (largest == index)
      {
        return;
      }

      else
      {
        swap(arr[index], arr[largest]);
        index = largest;
      }
    }
  }
};

int main()
{
  cout<<hello ; 
  return 0 ;

}