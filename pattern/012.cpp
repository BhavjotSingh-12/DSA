#include <iostream>
using namespace std;

int main()
{
    int i = 0, j = 0, k = 9;
    int a[] = {0, 2, 1, 0, 2, 2, 1, 0, 1, 2};
    while (j <= k)
    {
        if (a[j] == 0)
        {
            swap(a[i], a[j]);
            i++;
            j++;
        }

        else if (a[j] == 1)
        {
            j++;
        }
        else
        {
            swap(a[j], a[k]);
            k--;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
