/********************************************************************************/
/* File Name         : 1406.cpp                                                 */
/* By                : MinGyu Jeong                            KK  KK   BBBBB   */
/* Algorithm         :                                         KK KK    BB  BB  */
/* Time Complexity   :                                         KKKKK    BBBBB   */
/* Space Complexity  :                                         KK KK    BB  BB  */
/* Note              :                                         KK  KK   BBBBB   */
/*                                                                              */
/********************************************************************************/
#include <iostream>
#include <vector>
#include <string>
#include <stack>
using namespace std;


// 문자열 1개에 insert, erase로 명령 수행 방식??<- 시간제한 걸릴 거 같음
// 커서 가만히 있고 양 사이드 값들을 스택 2개에 넣기 -> BOJ 2493 참고함
// 오른쪽 스택은 거꾸로 삽입하기
// 커서 : 오른쪽 끝에서 시작
int main()
{
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    string s;
    char cmd;
    cin >> s;
    // 명령 갯수
    int M;
    cin >> M;
    // 문제를 똑바로 읽고 코드 작성할 때는 정신을 차리자....!!
    // stack<int> left;
    // stack<int> right;
    stack<char> left;
    stack<char> right;
    // 처음 스택 시작 준비
    for (int i = 0; i < s.length(); i++)
    {
        left.push(s[i]);
    }
    // 명령부
    for (int i = 0; i < M; i++)
    {
        cin >> cmd;
        // 커서 왼쪽 한칸 이동 -> left 스택의 top을 right 스택으로 이동
        if (cmd == 'L')
        {
            if (!left.empty())
            {
                right.push(left.top());
                left.pop();                
            }
        }
        // right stack top -> left stack으로
        else if (cmd == 'D')
        {
            if (!right.empty())
            {
                left.push(right.top());
                right.pop();
            }
        }
        // 커서 왼쪽 문자 삭제
        else if (cmd == 'B')
        {
            if (!left.empty())
            {
                left.pop();
            }
        }
        // 커서 왼쪽에 문자 추가
        else if (cmd == 'P')
        {
            // 추가할 단어 입력받기
            char plus;
            cin >> plus;
            left.push(plus);
        } 
    }
    // 출력 left 스택 거꾸로 출력 + right 스택 그대로 - XXX
    // -> left 스택을 전부 right 스택으로 옮겨서 그대로 출력
    while (!left.empty())
    {
        right.push(left.top());
        left.pop();
    }
    while (!right.empty())
    {
        cout << right.top();
        right.pop();
    }
    
    return 0;
}

/*
파일 실행
g++ example.cpp -o example
./example.exe
*/