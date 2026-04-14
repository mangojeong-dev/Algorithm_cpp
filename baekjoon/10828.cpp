//Time Limit: 초
//Memory Limit: MB

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
using namespace std;



int main()
{
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    stack<int> stk;
    int input;
    int N;
    int err = -1;
    string cmd;
    cin >> N;
    
    for (int i = 0; i < N; i++)
    {
        cin >> cmd;
        
        // push 명령
        if (cmd == "push")
        {
            cin >> input;
            stk.push(input);
        }
        // pop 명령
        if (cmd == "pop")
        {
            if (stk.empty())
            {
                cout << -1 << endl;
            }
            else {
                // pop하기 전에 변수 x에 top 데이터 할당해놓기
                cout << stk.top() << endl;
                stk.pop();
            }
        }
        // size 명령
        if (cmd == "size")
        {
            cout << stk.size() << endl;
        }
        // empty 명령
        if (cmd == "empty")
        {
            if (stk.empty())
            {
                cout << 1 << endl;
            }
            else {
                cout << 0 << endl;
            }
            
        }
        // top 명령
        if (cmd == "top")
        {
            if (!stk.empty())
            {
                cout << stk.top() << endl;
            }
            else {
                cout << -1 << endl;
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