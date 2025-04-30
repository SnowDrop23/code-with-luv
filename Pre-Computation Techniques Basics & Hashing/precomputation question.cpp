
#include <iostream>
//#include <unordered_set>
using namespace std;

const int m = 1e9+7;
const int n = 1e5+10;
long long fact[n];


int main()
{
    fact[0] = fact[1] = 1;
    for(int i = 2; i < n; i++) fact[i] = (fact[i-1] * i) % m;
    
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        cout << fact[n] << endl;
    }
}
