//LeetCode: https://leetcode.com/problems/valid-parentheses/description/
// HackerEarth: https://www.hackerrank.com/challenges/balanced-brackets/problem

#include <iostream>
#include <unordered_map>
#include <stack>
using namespace std;


// Map to represent bracket types with unique values for matching
// Opening brackets have negative values, closing have positive values
unordered_map<char, int> symbols = {{'[', -1}, {'{', -2}, {'(', -3}, {']', 1}, {'}', 2}, {')', 3}};

bool isBalanced(string s)
{
    stack<char> st;
    for(char &bracket : s)
    {

        // If opening bracket, push onto the stack
        if(symbols[bracket] < 0) st.push(bracket);

        else
        {

            if(st.empty()) return false;

            // Pop top element from the stack
            char top = st.top();
            st.pop();

            // Check if the popped opening bracket matches the closing bracket
            if(symbols[top] + symbols[bracket] != 0) return false;
        }
    }
    // If stack is empty, all brackets matched
    if(st.empty()) return true;
    return false;

}


int main ()
{
    int t;
    cout << "Enter number of test cases: ";
    cin >> t;
    while(t--)
    {
        string str;
        cout << "Enter bracket string: ";
        cin >> str;

        // Output result based on whether the string is balanced
        if(isBalanced(str)) cout << "YES\n";
        else cout << "NO\n";
    }
}
