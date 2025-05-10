#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<string> s;  // Set to store unique strings in sorted order
    int n;

    cout << "Enter number of strings: ";
    cin >> n;

    cout << "Enter " << n << " strings (one per line):" << endl;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        s.insert(str);  // Automatically ignores duplicates
    }

    cout << "\nUnique strings in lexicographical order:" << endl;
    for (auto i : s)
        cout << i << endl;

    return 0;
}
