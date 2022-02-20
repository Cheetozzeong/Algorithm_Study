/*
첫째 줄에 정렬하려고 하는 수 N이 주어진다. 
첫째 줄에 자리수를 내림차순으로 정렬한 수를 출력한다.
*/

#include <string>
#include <iostream>
#include <vector>
#include <algorithm> //sort 사용 
#include <functional> //greater 사용

using namespace std;
int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    string s; 
    vector<char> v;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        v.push_back(s[i]);
    }
    sort(v.begin(), v.end(), greater<char>()); // 벡터 내림차순 정렬(sort(시작점,끝점,greater<자료형>))
    for (char elem : v)
        cout << elem ;
}
