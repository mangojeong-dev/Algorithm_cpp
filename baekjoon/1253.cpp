#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    
    int N;
    int cnt = 0;
    cin >> N;

    vector<long long> arr(N);
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    for (int p = 0; p < N; p++)
    {
        long long find = arr[p];
        int start_index = 0;
        int end_index = N - 1;
        
        while (start_index < end_index)
        {
            if (start_index == p) //arr[start_index] == find 로 조건 설정하면 해당 값일 경우 다 스킵해버리는 문제 생겨서 틀림
            {
                start_index++;
                continue;
            }
            if (end_index == p)
            {
                end_index--;
                continue;
            }

            long long sum = arr[start_index] + arr[end_index];

            if (sum > find)
            {
                end_index--;
            }
            else if (sum < find)
            {
                start_index++;
            }
            else
            {
                cnt++;
                break;
            }
        }
    }

    cout << cnt;
    return 0;
}