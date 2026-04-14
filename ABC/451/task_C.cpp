#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;



int main()
{
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int Q;
    int query;
    long long h;
    cin >> Q;
    multiset<int>mts;
    for (int i = 0; i < Q; i++)
    {
        cin >> query >> h;
        if (query == 1)
        {
            mts.insert(h);
        }
        else {
            mts.erase(mts.begin(), mts.upper_bound(h));
        }
        cout << mts.size() << endl;
    }
    
    return 0;
}