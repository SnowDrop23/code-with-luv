
#include <iostream>
//#include <algorithm>
using namespace std;

const int n = 1e5+10;
int hsh[n][26];


int main()
{
    int t;
    cout << "Enter the number of test cases: ";
    cin >> t;
    while(t--)
    {
        int n, q;
        cout << "Enter the length of the string and the number of queries: ";// For each query, you need to check whether that substring can be rearranged into a palindrome.
        cin >> n >> q;

        //// Reset hash table for the new test case
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < 26; j++)
            {
                hsh[i][j] = 0;
            }
        }


        string str;
        cout << "Enter the string: ";
        cin >> str;

        for(int i = 0; i < n; i++) 
            hsh[i+1][str[i] - 'a']++;
        
        for(int i = 0; i < 26; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                hsh[j][i] += hsh[j-1][i]; //Prefix sum
            }
        }
        while(q--)
        {

            int l, r;
            cout << "Enter the length of substring of str from index L to R: ";
            cin >> l >> r;;
            

            int oddCt = 0;
            for(int i = 0; i < 26; i++) 
            {
                int charCt = hsh[r][i] - hsh[l-1][i];
                if(charCt % 2 != 0) oddCt++;
            }

            if(oddCt > 1) cout << "NO\n";
            else cout << "YES\n";
        }
    }
    

    
}
