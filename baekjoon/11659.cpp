#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N,M;
    cin >> N >> M;
    int A[100001] ={};
    for (int i = 1; i <= N; i++)
    {
        int temp;
        /* code */
        cin >> temp;
        A[i] = A[i-1] + temp;  //합배열 만들기
    }

    for (int i = 0; i < M; i++)
    {
        /* code */
        int start, end;
        cin >> start >> end;
        cout << A[end] - A[start-1] << "\n"; 
    }
    return 0;
}
