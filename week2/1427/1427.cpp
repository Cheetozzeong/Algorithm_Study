/*
ù° �ٿ� �����Ϸ��� �ϴ� �� N�� �־�����. 
ù° �ٿ� �ڸ����� ������������ ������ ���� ����Ѵ�.
*/

#include <string>
#include <iostream>
#include <vector>
#include <algorithm> //sort ��� 
#include <functional> //greater ���

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
    sort(v.begin(), v.end(), greater<char>()); // ���� �������� ����(sort(������,����,greater<�ڷ���>))
    for (char elem : v)
        cout << elem ;
}
