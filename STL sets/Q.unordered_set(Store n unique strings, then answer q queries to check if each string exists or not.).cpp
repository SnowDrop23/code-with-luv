// Problem Statement: Given N strings and Q queries. In each query, you are given a string. Print Yes, if string is present, else print No.
// Constraints: N <= 10^6, |s| <= 100, Q <= 10^6

#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<string> s;  // Set to store unique strings in sorted order

    int n;
    cout << "Enter number of strings to store: ";
    cin >> n;

    cout << "Enter " << n << " strings (one per line):" << endl;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        s.insert(str);  // Only unique strings will be stored
    }

    int q;
    cout << "\nEnter number of queries: ";
    cin >> q;

    cout << "Enter " << q << " query strings:" << endl;
    while (q--)
    {
        string str;
        cin >> str;

        if (s.find(str) == s.end()) 
            cout << "No\n";
        else 
            cout << "Yes.\n";
    }

    return 0;
}
