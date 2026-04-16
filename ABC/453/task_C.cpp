/********************************************************************************/
/* File Name         : task_C.cpp                                               */
/* By                : MinGyu Jeong                            KK  KK   BBBBB   */
/* Algorithm         : Brute Force..완전탐색                   KK KK    BB  BB  */
/* Time Complexity   :                                         KKKKK    BBBBB   */
/* Space Complexity  :                                         KK KK    BB  BB  */
/* Note              :                                         KK  KK   BBBBB   */
/*                                                                              */
/********************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

// Time Limit: 2 sec
// Memory Limit: 1024 MiB

// 다카하시가 양수 or 음수에 있으면 다음 이동은 무조건 반대 방향
// 0에서 끝나는 경우 x -> 부호 확인만
// 0.5 시작 double로 전부 계산

// gpt hint
// 1. double 계산 때문에 복잡하니까 실수 -> 정수로 바꾸고 구현 진행 추천
// 2. 비트 연산으로 for문 실행 시 check < (1 << N);처럼 사용 -> 2^n만큼 반복하도록
// fix: 모든 값들 전부 2배 곱 -> 정수 계산 가능
int main()
{
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int N;
    int answer = 0;
    cin >> N;
    vector<long> L(N);
    for (int i = 0; i < N; i++)
    {
        cin >> L[i];
    }    
    return 0;
}
