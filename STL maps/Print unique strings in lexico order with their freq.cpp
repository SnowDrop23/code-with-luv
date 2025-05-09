#include <iostream>
#include <map>  // or #include <unordered_map> for faster lookup

using namespace std;

int main()
{
    map<string, int> m;  // map to store frequency of each string (lexicographically sorted)

    int n;
    cout << "Enter number of strings: ";
    cin >> n;  // number of strings to read

    cout << "Enter " << n << " strings (one per line):" << endl;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;  // read each string
        m[s]++;    // increment its frequency in the map
    }

    cout << "\nFrequencies of strings (sorted):" << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;  // print string and its frequency
    }

    return 0;
}
