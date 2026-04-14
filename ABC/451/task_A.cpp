#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main()
{
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    string S;
    cin >> S;
    if(S.size() % 5 ==0) {
        cout << "Yes";
    }
    else { 
        cout << "No";}

    return 0;
}