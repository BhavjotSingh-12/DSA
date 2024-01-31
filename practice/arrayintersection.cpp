#include <iostream>
#include<math.h>
using namespace std;
void arinter(int a[], int n, int b[], int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i] == b[j])
            {
                cout << a[i]<<" ";
                b[j]=pow(2,30);
                break;
            }
        }
    }
}
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int b[6] = {2, 5, 4, 8, 6, 7};
    arinter(a,5,b,6);
    return 0;
}
