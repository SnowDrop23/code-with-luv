#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<string, int> m;
    int n;

    cout << "Enter number of words: ";
    cin >> n;

    cout << "Enter " << n << " words:" << endl;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        m[s]++;  // Increment frequency count
    }

    int q;
    cout << "Enter number of queries: ";
    cin >> q;

    cout << "Enter " << q << " words to query their frequencies:" << endl;
    while (q--)
    {
        string s;
        cin >> s;
        cout << "Frequency of \"" << s << "\": " << m[s] << endl;
    }

    return 0;
}
