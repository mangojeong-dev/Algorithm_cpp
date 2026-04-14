#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> targets) {
    
    // 1. 끝점(targets[1]) 기준 오름차순 정렬
    sort(targets.begin(), targets.end(), [](vector<int> a, vector<int> b) {
        return a[1] < b[1];
    });
    
    int answer = 0;
    int intercept = 0;  // 마지막으로 쏜 위치
    
    for (auto t : targets) {
        int s = t[0];
        int e = t[1];
        
        // 현재 요격 위치가 이 구간에 포함 안되면 새로 쏨
        if (intercept <= s) {
            answer++;
            intercept = e;  // e 직전에 쐈다고 생각 -> 어차피 int형이기도 하고 소수까지 다루기는 귀찮으니까
        }
    }
    
    return answer;
}