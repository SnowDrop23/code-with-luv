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
    cout << "Enter number of vectors: ";
    cin >> N;

    //Declare a 2D vector (vector of vector)
    vector<vector<int>> vec;

    //Loop through the each vector (row)
    for(int i = 0; i < N; i++)
    {
        int n;
        cout << "Enter size of vector: " << i+1 << ": ";
        cin >> n;

        vector<int> temp;

        cout << "Enter " << n << " elements: ";
        for(int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x); //store each element in temporary vector
        }

        //Add the filled vector to the main 2D vector
        vec.push_back(temp);
    }

    cout << "\n---Displaying Vectors---\n";
    for(int i = 0; i < vec.size(); i++) 
    {
        cout << "Vector " << i+1 << ":\n";
        printVec(vec[i]);
    }
}
