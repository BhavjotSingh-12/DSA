#include <iostream>
using namespace std;

int main()
{
    char c;
    // Pattren 1 A>AB>ABC
    cout<<"Pattern1"<<endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            c = 'A' + j;
            cout << c;
        }
        cout << endl;
    }
    // Pattren 2 A>BC>DEF
    cout<<"Pattern2"<<endl;
    int a=0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            c = 'A' + a;
            cout << c;
            a++;
        }
        cout << endl;
    }
        // Pattren 3 A>AA>AAA
    cout<<"Pattern3"<<endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            c = 'A';
            cout << c;
        }
        cout << endl;
    }
    // Pattren 4 A>BB>CCC
    cout<<"Pattern4"<<endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            c = 'A'+i-1;
            cout << c;
        }
        cout << endl;
    }

    return 0;
}
