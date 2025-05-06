#include <iostream>
#include <vector>
using namespace std;

void printVec(vector<int> &v)
{
    cout << "Size: " << v.size() << endl;
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl << endl;
}

int main()
{
    int N;
    cout << "Enter the number of vectors: ";
    cin >> N;

    vector<int> vec[N];

    for(int i = 0; i < N; i++)
    {
        int n;
        cout << "Enter the size of vector " << i+1 << ": ";
        cin >> n;

        cout << "Enter " << n << " elements: ";
        for(int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            vec[i].push_back(x);
        }
    }

    cout << "---Printing Vectors---\n";
    for(int i = 0; i < N; i++) 
    {
        cout << "Vector " << i+1 << ":\n";
        printVec(vec[i]);
    }
}
