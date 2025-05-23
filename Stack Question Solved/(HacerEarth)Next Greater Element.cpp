//Question: https://www.hackerrank.com/contests/second/challenges/next-greater-element/submissions/code/1392401382
#include <iostream>
#include <vector>
#include <stack>

using namespace std;

// Function to find the next greater element for each element in the array
vector<int> nextGreaterElement(vector<int> &arr)
{
    // Vector to store the index of the next greater element for each element
    vector<int> nge(arr.size());
    
    // Stack to store the indices of elements in the array
    stack<int> st;

    // Loop through all elements of the array
    for(int i = 0; i < arr.size(); ++i)
    {
        // While the stack is not empty and the current element is greater than the element 
        // at the index stored at the top of the stack
        while(!st.empty() && arr[i] > arr[st.top()])
        {
            // Set the next greater element for the index at the top of the stack
            nge[st.top()] = i;
            // Pop the index from the stack
            st.pop();
        }
        // Push the current index to the stack
        st.push(i);
    }

    // For any remaining elements in the stack, there is no greater element, so we set it to -1
    while(!st.empty())
    {
        nge[st.top()] = -1;
        st.pop();
    }

    // Return the vector containing the indices of the next greater elements
    return nge;
}

int main()
{
    // Prompt user to input the number of elements in the array
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    // Declare a vector to store the input elements
    vector<int> v(n);

    // Prompt the user to enter the elements of the array
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) 
    {
        cin >> v[i];
    }

    // Get the indices of the next greater element for each element in the array
    vector<int> nge = nextGreaterElement(v);

    // Print the original element and its corresponding next greater element
    cout << "Original element and its next greater element: \n";
    for(int i = 0; i < n; ++i)
    {
        // If there is no next greater element, print -1
        cout << v[i] << " " << (nge[i] == -1 ? -1 : v[nge[i]]) << endl;
    }

    return 0;
}
