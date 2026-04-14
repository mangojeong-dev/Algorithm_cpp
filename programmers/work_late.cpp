#include <vector>
#include <queue>

using namespace std;

long long solution(int n, vector<int> works) {
    long long total = 0;
    long long answer = 0; 
    //전체 작업량의 합 <- 예외처리 해야되서
    for (int w : works) {
        total += w;
    }
    
    // 모든 일을 n시간 안에 끝낼 수 있으면 피로도는 0
    if (total <= n) return 0;
    
    priority_queue<int> pq;
    //cpp에선 pq가 기본적으로 최대 힙
    // -> 가장 큰 값이 맨 뒤에 있음
    // -> top()하면 가장 큰 값 확인 가능


    for (int w : works) {
        pq.push(w);
    }
    
    //n시간 반복
    while (n--) {
        int cur = pq.top();
        pq.pop();
        //가장 큰 값 확인하고 뽑기 - 세트

        cur--;
        pq.push(cur);
        //1빼고 다시 넣어잇
    }
    

    
    while (!pq.empty()) {
        long long x = pq.top();
        pq.pop();
        
        answer += x * x;
    }
    
    return answer;
}