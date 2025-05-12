//Problem Statement: https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-the-magical-candy-bags/?fbclid=IwAR2kDiVkEaxu9dkCTCUhzXLuIccNn0Gz3dSfkaSUjlDE6Nb9UHMzt8HNDo4
#include <iostream>
#include <set>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        multiset<long long> bags;

        for (int i = 0; i < n; i++)
        {
            long long candy_ct;
            cin >> candy_ct;

            bags.insert(candy_ct);
        }
        long long total_candies = 0;
        for(int i = 0; i < k; i++)
        {
            auto last_it = (--bags.end());
            long long candy_ct = *last_it;

            total_candies += candy_ct;
            bags.erase(last_it);
            bags.insert(candy_ct / 2);
        }
        cout << total_candies << endl;
    }
}
