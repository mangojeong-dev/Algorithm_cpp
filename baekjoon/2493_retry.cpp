/********************************************************************************/
/* File Name         : 2493_retry.cpp                                           */
/* By                : MinGyu Jeong                            KK  KK   BBBBB   */
/* Algorithm         : Stack                                   KK KK    BB  BB  */
/* Time Complexity   : O(N)                                    KKKKK    BBBBB   */
/* Space Complexity  : O(N)                                    KK KK    BB  BB  */
/* Note              : 유의미한 후보군 스택 2개에 정리         KK  KK   BBBBB   */
/*                                                                              */
/********************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int N;
    cin >> N;
    // 탑 높이 저장 벡테
    vector<int> height(N);
    // 출력 저장 벡터 - 0 초기화
    vector<int> answer(N,0);
    for (int i = 0; i < N; i++)
    {
        cin >> height[i];
    }
    // 탑 높이, 번호 저장 스택
    stack<int> towerindex;
    stack<int> towerheight;
    for (int i = 0; i < N; i++)
    {
        //왼쪽에 존재하는 현재 탑보다 작은 탑 제거
        while (!towerheight.empty() && towerheight.top() < height[i])
        {
            towerheight.pop();
            towerindex.pop();
        }
        // 스택이 안 비어있으면 top 부분이 신호받을 탑
        if (!towerindex.empty())
        {
            answer[i] = towerindex.top();
        }

        //스택 업데이트
        towerheight.push(height[i]);
        towerindex.push(i+1); // i+1.... 주의
        
        
        
    }
    for (int i = 0; i < N; i++)
    {
        cout << answer[i] << " ";
    }
    
    return 0;
}

/*
파일 실행
g++ example.cpp -o example
./example.exe
*/