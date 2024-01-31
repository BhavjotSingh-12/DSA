#include <bits/stdc++.h>
using namespace std;

class kqueue
{
public:
    int n, k, *front, *rear;
    int *arr;
    int free;
    int *next;

    kqueue(int n, int k)
    {
        this->n = n;
        this->k = k;

        front = new int[k];
        rear = new int[k];
        next = new int[n];
        arr = new int[n];
        free = 0;
        for (int i = 0; i < k; i++)
        {
            front[i] = -1;
            rear[i] = -1;
        }
        for (int i = 0; i < n; i++)
        {
            next[i] = i + 1;
        }
        next[n - 1] = -1;
    }

    // Insert in queue n in array
    void enqueue(int data, int qn)
    {
        if (free == -1)
        {
            cout << "No empty space";
            return;
        }

        // find free index
        int index = free;

        // update free
        free = next[index];

        // check whether first element
        if (front[qn - 1] == -1)
        {
            front[qn - 1] = index;
        }
        else
        {
            // link new element to prev element
            next[rear[qn - 1]] == index;
        }

        // update next
        next[index] = -1;

        // update rear
        rear[qn - 1] = index;

        // push element
        arr[index] = data;
    }
    int deque(int qn)
    {
        //   underflow
        if (front[qn - 1] == -1)
        {
            cout << "Queue unerflow";
            return -1;
        }

        // find index to pop
        int index = front[qn - 1];

        // update front
        front[qn - 1] = next[index];

        // update free
        next[index] = free;
        free = index;

        return arr[index];
    }
};

int main()
{
    kqueue q(10, 3);
    q.enqueue(10, 1);
    q.enqueue(15, 1);
    q.enqueue(20, 2);
    q.enqueue(25, 1);

    cout<<q.deque(1)<<endl;
    cout<<q.deque(2)<<endl;
    cout<<q.deque(1)<<endl;
    cout<<q.deque(1)<<endl;

    return 0;
}