/********************************************************************************/
/* File Name         : task_A.cpp                                               */
/* By                : MinGyu Jeong                            KK  KK   BBBBB   */
/* Algorithm         : String,Implementation                   KK KK    BB  BB  */
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



int main()
{
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int N;
    string S;
    cin >> N >> S;

    int idx = 0;

    // 앞에서부터 'o'가 아닌 첫 위치 찾기
    for (int i = 0; i < N; i++) {
        if (S[i] != 'o') {
            idx = i;
            break;
        }
        // 만약 끝까지 돌아서 전부 다 'o'면 idx는 N이 되어야 함
        if (i == N - 1) {
            idx = N;
        }
    }

    // idx부터 끝까지 출력
    for (int i = idx; i < N; i++) {
        cout << S[i];
    }
    cout << '\n';    
    return 0;
}

/*
파일 실행
g++ example.cpp -o example
./example.exe
*/