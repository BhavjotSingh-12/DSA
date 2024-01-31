#include <iostream>
using namespace std;
void altswap(int a[], int n)
{
    for (int i = 0; i < n - 1; i=i + 2)
    {
        swap(a[i], a[i + 1]);
    }
}
int main()
{
    int a[5] = {1, 3, 4, 5, 6};
    altswap(a, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << a[i]<<" ";
    }
    return 0;
}
