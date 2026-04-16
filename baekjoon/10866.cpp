/********************************************************************************/
/* File Name         : 10866.cpp                                                */
/* By                : MinGyu Jeong                            KK  KK   BBBBB   */
/* Algorithm         : deque                                   KK KK    BB  BB  */
/* Time Complexity   :                                         KKKKK    BBBBB   */
/* Space Complexity  :                                         KK KK    BB  BB  */
/* Note              : 덱 구현해보기                           KK  KK   BBBBB   */
/*                                                                              */
/********************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <deque> // 추가
using namespace std;



int main()
{
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    deque<int> dq;
    int N;
    string cmd;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> cmd;
        if (cmd == "push_front")
        {
            int x;
            cin >> x;
            dq.push_front(x);
        }
        else if (cmd == "push_back")
        {
            int x;
            cin >> x;
            dq.push_back(x);
        }
        else if (cmd == "pop_front")
        {
            if (!dq.empty())
            {
                cout << dq.front() << endl;
                dq.pop_front();
            }
            else {
                cout << -1 << endl;
            }
        }
        else if (cmd == "pop_back")
        {
            if (!dq.empty())
            {
                cout << dq.back() << endl;
                dq.pop_back();
            }            
            else {
                cout << -1 << endl;
            }
        }
        else if (cmd == "size")
        {
            cout << dq.size() << endl;
        }
        else if (cmd == "empty")
        {
            // 비어있으면 1
            if (dq.empty())
            {
                cout << 1 << endl;
            }
            // 아니면 0
            else {
                cout << 0 << endl;
            }
        }
        else if (cmd == "front")
        {
            if (dq.empty())
            {
                cout << -1 << endl;
            }
            else {
                cout << dq.front() << endl;
            }
            
        }
        else if (cmd == "back")
        {
            if (dq.empty())
            {
                cout << -1 << endl;
            }
            else {
                cout << dq.back() << endl;
            }
        }

    }
    return 0;
}

/*
파일 실행
g++ example.cpp -o example
./example.exe
*/