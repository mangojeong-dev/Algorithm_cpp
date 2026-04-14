#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;



int main()
{
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    stack<int> stk;

    stk.push(10);
    stk.push(20);
    stk.push(30);

    cout << stk.top() << '\n';  //30
    stk.pop();
    return 0;
}

/*
Stack
선입후출(or 후입선출)
쌓는 과정 : push
빼내는 과정 : pop
단점: low level(먼저 들어온 데이터)의 데이터를 가져가려면 
high level(나중에 들어온 데이터)의 데이터를 빼야한다
LIFO => Last In First Out(후입선출)

ex)
push(10)
push(20)
push(30)

현재 스택: 
top -> 30
       20
       10
pop()하면 30이 빠져나간다
그 다음 top은 20

------------------------------------------------------
알고리즘에서 Stack이 필요한 경우
1. 가장 최근 상태를 기억해야 할 때
- 뒤로 가기
- 실행 취소(undo)
- 괄호 검사

2. 순서 거꾸로 처리
- 문자열 뒤집기
- 나중에 들어온 데이터를 먼저 써야할 때

3. "현재 기준에서 직전의 중요한 정보"를 유지해야 할 때!!!
ex)
- 왼쪽에 있는 값들 중 특정 조건을 만족하는 것 찾기
- 이전 원소들과 비교하며 의미없는 것 버리기
- 지금 보는 값보다 작거나 큰 애들 정리하기

------------------------------------------------------
vector VS stack
# vector
- index 접근 가능: v[3]
- 중간 원소도 볼 수 있음
- 더 자유롭다

# stack
- 맨 위만 볼 수 있음
- 일부러 제한을 걸어놓은 자료구조
- 문제의 구조가 “맨 위만 중요하다”면 더 직관적


*/