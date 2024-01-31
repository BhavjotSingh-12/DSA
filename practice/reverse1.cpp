#include <iostream>
using namespace std;
void reversestring(string s, int b, int n)
{
    int st=b;
    int e = n - 1;
    while (b <= e)
    {
        swap(s[b], s[e]);
        b++;
        e--;
    }
    for (int i = st; i < n; i++)
        cout << s[i];
        cout<<" ";
}
int main()
{
    string s = "My name is Bhavjot";
    int p = 0;
    int c = 0;
    for (int i = 0; i < s.length(); i++)
    {

        if (s[i] == ' ')
        {
            c = i;

            reversestring(s, p, c);

            p = c + 1;
        }
        if (i == s.length() - 1)
        {

            c = i + 1;

            reversestring(s, p, c);
        }
    }
   
    return 0;
}
