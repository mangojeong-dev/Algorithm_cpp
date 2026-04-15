/********************************************************************************/
/* File Name         : 2493.cpp                                                 */
/* By                : MinGyu Jeong                            KK  KK   BBBBB   */
/* Algorithm         : Array                                   KK KK    BB  BB  */
/* Time Complexity   : O(N^2)                                  KKKKK    BBBBB   */
/* Space Complexity  : O(N)                                    KK KK    BB  BB  */
/* Note              : 시간 제한 걸린 풀이(배열 방식)          KK  KK   BBBBB   */
/*                                                                              */
/********************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;



int main()
{
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int N;
    cin >> N;
    // 공간복잡도 : O(N)
    // 탑 높이 저장 벡테
    vector<int> height(N);
    // 출력 저장 벡터 - 0 초기화
    vector<int> answer(N,0);
    for (int i = 0; i < N; i++)
    {
        cin >> height[i];
    }
    for (int i = 0; i < N; i++)
    {
        
        //본인의 왼쪽을 보면서 본인보다 큰 탑에 닿으면 해당 탑 번호를 anwser[i] = (탑 번호)
        // 바로 옆(i-1)부터 0까지 체크
        for (int j = i-1; j >=0; j--)
        {
            //왼쪽이 큰 경우
            if (height[i] < height[j])
            {
                //답 배열에 탑 번호 넣고 종료
                answer[i] = j+1;break;
            }
            
        }        
    }
    for (int i = 0; i < N; i++)
    {
        cout << answer[i] << " ";
    }
    
    return 0;
}