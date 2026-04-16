/********************************************************************************/
/* File Name         : task_B.cpp                                               */
/* By                : MinGyu Jeong                            KK  KK   BBBBB   */
/* Algorithm         : Implementation                          KK KK    BB  BB  */
/* Time Complexity   : O(T)                                    KKKKK    BBBBB   */
/* Space Complexity  :                                         KK KK    BB  BB  */
/* Note              :                                         KK  KK   BBBBB   */
/*                                                                              */
/********************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath> // abs 사용
using namespace std;



int main()
{
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T,X;
    // X: 차이값
    cin >> T >> X;
    // 센서 값 저장 벡터 - 배열 크기 주의
    vector<int> A(T+1);
    for (int i = 0; i < T+1; i++)
    {
        cin >> A[i];
    }
    // 처음 값 먼저 지정
    int latest_data = A[0];
    
    // 시간 0은 무조건 출력
    cout << 0 << " " << A[0] <<'\n';
    // 시간 1?부터 확인
    for (int i = 1; i < T+1; i++)
    {
        int temp = abs(A[i] - latest_data);
        if (temp >= X)
        {
            // 차이가 X 이상일 때만 최근 latest_data 갱신
            latest_data = A[i];
            cout << i << " " << A[i] << '\n';
        }
        
    }
    return 0;
}