#include <iostream>
using namespace std;
void reversestring(string s, int n)
{
    int b = 0;
    int e = n - 1;
    while (b <= e)
    {
        swap(s[b], s[e]);
        b++;
        e--;
    }
    for (int i = 0; i <n; i++)
        cout << s[i];
}
int main()
{
    string s = "Bhavjot hello";
    reversestring(s, s.length());
    return 0;
}
