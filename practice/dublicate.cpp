#include <iostream>
using namespace std;
void unique(int a[], int n)
{
    int sum = 0;
    int s = n * (n + 1) / 2;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    int duplicate = n - (s - sum);
    cout << "Duplicate" << duplicate;
}
int main()
{
    int a[10] = {1, 2, 3, 4, 9, 5, 6, 7, 8, 9};
    unique(a, 10);
    return 0;
}
