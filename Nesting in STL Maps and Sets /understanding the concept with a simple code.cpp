#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    // Create a map where:
    // key = pair of strings (first name, last name)
    // value = vector of integers
    map<pair<string, string>, vector<int>> m;

    int n;
    cin >> n;  // Read number of entries (how many people)

    for(int i = 0; i < n; i++)
    {
        string first_name, last_name;
        int count;
        cin >> first_name >> last_name >> count;  // Read the name and number of integers

        // Read 'count' number of integers for this person
        for(int j = 0; j < count; j++)
        {
            int x;
            cin >> x;

            // Access the vector associated with this name and push the number into it
            m[{first_name, last_name}].push_back(x);
        }
    }

    // Iterate through the map and print the contents
    for(auto &pr : m)
    {
        auto &full_name = pr.first;    // full_name is a pair<string, string>
        auto &list = pr.second;       // list is a vector<int>

        // Print the full name
        cout << full_name.first << " " << full_name.second << endl;

        // Print how many numbers are in the list
        cout << list.size() << endl;

        // Print each number
        for(auto &element : list)
            cout << element << " ";
        cout << endl;
    }

    return 0;
}
