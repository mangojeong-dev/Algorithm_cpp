#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int N;
    int cnt = 0;
    string s;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> s;
        bool alphabet[26] = {false}; // 단어에서 알파벳 출현유무 파악(아직 안 나왔으면 false)
        alphabet[s[0] - 'a'] = true;
        for (int j = 1; j < s.size(); j++)
        {
            if (s[j] == s[j-1])
            {
                continue;
            }
            else if (s[j] != s[j-1] && alphabet[s[j]-'a'])
            {
                cnt++;
                break;
            }
            else {
                alphabet[s[j] - 'a'] = true;
            }
            
        }    
    }
    cout << N - cnt;
    
    return 0;
}
