//LeetCode: https://leetcode.com/problems/valid-parentheses/description/
// HackerEarth: https://www.hackerrank.com/challenges/balanced-brackets/problem

#include <iostream>
#include <unordered_map>
#include <stack>
using namespace std;

unordered_map<char, int> symbols = {{'[', -1}, {'{', -2}, {'(', -3}, {']', 1}, {'}', 2}, {')', 3}};

bool isBalanced(string s)
{
    stack<char> st;
    for(char &bracket : s)
    {
        if(symbols[bracket] < 0) st.push(bracket);

        else
        {
            if(st.empty()) return false;
            
            char top = st.top();
            st.pop();
            if(symbols[top] + symbols[bracket] != 0) return false;
        }
    }
    if(st.empty()) return true;
    return false;

}


int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;

        
        if(isBalanced(str)) cout << "YES\n";
        else cout << "NO\n";
    }
}
