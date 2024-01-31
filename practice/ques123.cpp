#include <iostream>
using namespace std;

int main()
{
    int i, j;
    int c=0;

    for (int i = 1; i <= 4; i++)
    {
        for (int j = 0; j < i; j++)
        {
            c++;
            cout << c;
        }
        cout << endl;
    }
    return 0;
}
