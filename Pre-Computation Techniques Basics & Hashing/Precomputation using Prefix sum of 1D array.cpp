
#include <iostream>
using namespace std;

const int n = 1e5+10;
int arr[n];
int pfSum[n];


int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        pfSum[i] = pfSum[i-1] + arr[i];
    }
    int q;
    cin >> q;
    while(q--)
    {
        int l, r;
        cin >> l >> r;
        long long sum = 0;
        sum = pfSum[r] - pfSum[l-1];
        
        cout << sum << endl;
    }
}
