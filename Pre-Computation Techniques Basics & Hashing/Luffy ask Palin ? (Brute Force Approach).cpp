//This question doesn't exist in any online judge now. For the problem statement, check my khata.
#include <iostream>
using namespace std;


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

        string str;
        cout << "Enter the string: ";
        cin >> str;
        while(q--)
        {
            int l, r;
            cout << "Enter the length of substring of str from index L to R: ";
            cin >> l >> r;

            int hsh[26] = {0};
            l--; r--;
            for(int i = l; i <= r; i++) hsh[str[i] - 'a']++;

            int oddCt = 0;
            for(int i = 0; i < 26; i++) 
            {
                if(hsh[i] % 2 != 0) oddCt++;
            }

            if(oddCt > 1) cout << "NO\n";
            else cout << "YES\n";
        }
    }
    

    
}
