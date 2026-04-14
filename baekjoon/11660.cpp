#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    /*
    구간 합 문제
    이중배열로 된 구간 (x1,y1)에서 (x2,y2)까지의 합 구하기
    */
    /* code */
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int N,M,result;
    int x1,y1,x2,y2;
    cin >> N >> M;


    vector<vector<int>>A(N+1, vector<int>(N+1,0)); //원래 배열
    vector<vector<int>>D(N+1, vector<int>(N+1,0)); //합배열 정의
    for (int i = 1; i <= N; i++)
    {
        /* code */
        for (int j = 1; j <= N; j++)
        {
            cin >> A[i][j];
            // 변수 확인 잘하기..
            D[i][j] = A[i][j] + D[i][j-1] + D[i-1][j] -D[i-1][j-1];  //합배열 만들기
        }
    }
        for (int i = 1; i <= M; i++)
    {
        /* code */
        cin >> x1 >> y1 >> x2 >> y2;
        result = D[x2][y2] - D[x1-1][y2] - D[x2][y1-1] + D[x1-1][y1-1]; 
        cout << result << "\n";
    }

return 0;
}
