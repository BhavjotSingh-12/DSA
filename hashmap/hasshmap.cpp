#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> m;

    // Insertion

    // Method 1
    pair<string, int> p = make_pair("babbar", 2);
    m.insert(p);

    // Method 2
    pair<string, int> p2 = make_pair("love", 3);
    m.insert(p2);

    // Method 3
    m["mera"] = 1;

    // Search
    cout << m["mera"] << endl;

    cout << m.at("babbar") << endl;

    // m.at() searches the value at a particular entry
    // cout<<m.at("unknown")<<endl;

    // This create the new entry corresponding to "unknowm"
    cout << m["unknown"] << endl;
    cout << m.at("unknown") << endl;

    // Size
    cout << "Size of map " << m.size() << endl;

    // To check presence
    cout << m.count("love") << endl;

    // Erase
    m.erase("love");
    cout << "Size of map " << m.size() << endl;

    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    map<string, int>::iterator it = m.begin();
    while (it != m.end())
    {
        cout << it->first << " " << it->second << endl;
        it++;
    }
    return 0;
}