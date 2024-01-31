#include <bits/stdc++.h>
using namespace std;

// Everything in this code is for max heap ie every node shoulde be less than its parent node

class heap
{

public:
    int arr[100];
    int size;
    heap()
    {
        size = 0;
        arr[0] = -1;
    }

    void insert(int val)
    {
        size = size + 1;
        int index = size;
        arr[index] = val;
        while (index > 1)
        {
            int parent = index / 2;

            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
                return;
        }
    }

    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void deletefromheap()
    {
        if (size == 0)
        {
            cout << "Nothing to delete";
            return;
        }

        arr[1] = arr[size];
        size--;

        // take root node to its correct position

        int i = 1;
        while (i < size)
        {
            int child1 = i * 2;
            int child2 = 2 * i + 1;

            if (child1 < size && arr[i] < arr[child1])
            {
                swap(arr[i], arr[child1]);
                i = child1;
            }
            else if (child2 < size && arr[i] < arr[child2])
            {
                swap(arr[i], arr[child2]);
                i = child2;
            }
            else
            {
                return;
            }
        }
    }
};

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int leftchild = 2 * i;
    int rightchild = 2 * i + 1;

    if (leftchild <= n && arr[largest] < arr[leftchild])
    {
        largest = leftchild;
    }
    if (rightchild <= n && arr[largest] < arr[rightchild])
    {
        largest = rightchild;
    }

    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapsort(int arr[], int n)
{
    int size = n;

    while (size >= 1)
    {
        swap(arr[1], arr[size]);
        size--;
        heapify(arr, size, 1);
    }
}

int main()
{

    heap h;
    h.insert(55);
    h.insert(50);
    h.insert(53);
    h.insert(52);
    h.insert(54);

    h.print();

    h.deletefromheap();

    cout << endl
         << "After deletion" << endl;
    h.print();

    int arr[6] = {-1, 54, 53, 55, 52, 50};
    int n = 5;
    for (int i = n / 2; i > 0; i--)
    {
        heapify(arr, n, i);
    }
    cout << "Printing the array now" << endl;
    // For 0 baded indexing we use left=2*i+1 and right=2*i+2
    // We use left=2*i and 2*i+1 for 1 based indexing
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }

    heapsort(arr, n);

    cout << endl;
    cout << "Printing the array now" << endl;

    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << "Heap Uing priority queue" << endl;

    // Maxheap
    priority_queue<int> pq;

    pq.push(4);
    pq.push(2);
    pq.push(5);
    pq.push(3);
    cout << "Element at top " << pq.top() << endl;
    pq.pop();
    cout << "Element at top " << pq.top();

    cout << endl;
    // Min Heap
    priority_queue<int, vector<int>, greater<int>> minheap;

    minheap.push(4);
    minheap.push(2);
    minheap.push(5);
    minheap.push(3);

    cout << "Element at top " << minheap.top() << endl;
    minheap.pop();
    cout << "Element at top " << minheap.top();

    return 0;
}