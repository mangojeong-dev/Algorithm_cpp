#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main()
{
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int N,M;
    cin >> N >> M;
    int Ai,Bi;

    vector<int>arr(M+1,0); //숫자 맞추기
    for (int i = 0; i < N; i++)
    {
        cin >> Ai >> Bi;
        arr[Ai]--;
        arr[Bi]++;
    }
    
    for (int i = 0; i < M; i++)
    {
        cout << arr[i+1] << endl;
    }
    

    return 0;
}