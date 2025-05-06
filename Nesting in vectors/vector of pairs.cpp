#include <iostream>
#include <vector>
using namespace std;

void printVec(vector<pair<int, int>> &v)
{
    cout << "Output: \n";
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
    cout << endl;
}

int main()
{
    vector<pair<int, int>> vec;
    int n;
    cout << "Enter number of pairs: ";
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x, y;
        cout << "Enter pair " << i + 1 << " (two integers): ";
        cin >> x >> y;
        vec.push_back({x, y});
      //another way: vec.push_back(make_pair((x, y));
    }
    printVec(vec);
}
