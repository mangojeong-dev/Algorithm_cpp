#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    // 크기 n+1인 int vector 만들고 모든 값 1로 초기화
    vector<int> clothes(n + 1, 1);  // 모든 학생은 기본적으로 1벌이니까
    
    // 도난당한 학생
    for (int x : lost) {
        clothes[x]--;  //해당 학생 체육복 1벌씩 빼기
    }
    
    // 여벌 가져온 학생
    for (int x : reserve) {
        clothes[x]++;
    }
    //상태
    // 0 -> 없음 / 1 -> 정상 / 2 -> 여벌 O
    // 앞번호 -> 뒷번호 순으로 빌려주기
    for (int i = 1; i <= n; i++) { //clothes[0] 은 버리는 칸임
        if (clothes[i] == 0) {
            if (i - 1 >= 1 && clothes[i - 1] == 2) {    //앞쪽 학생이 2벌 가지고 있으면 주고
                clothes[i - 1]--;
                clothes[i]++;
            } else if (i + 1 <= n && clothes[i + 1] == 2) {     //그렇지 않고 뒤쪽 학생이 2벌 가지고 있으면 준다
                clothes[i + 1]--;
                clothes[i]++;
            }
        }
    }
    
    int answer = 0;
    for (int i = 1; i <= n; i++) {
        if (clothes[i] >= 1) answer++;
    }
    
    return answer;
}