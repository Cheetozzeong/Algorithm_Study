/*
각각의 알파벳에 대해서, a가 처음 등장하는 위치, b가 처음 등장하는 위치, ... z가 처음 등장하는 위치를 공백으로 구분해서 출력한다.

만약, 어떤 알파벳이 단어에 포함되어 있지 않다면 -1을 출력한다. 단어의 첫 번째 글자는 0번째 위치이고, 두 번째 글자는 1번째 위치이다.
*/
#include<string>
#include<iostream>

using namespace std;
int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    string alpha="abcdefghijklmnopqrstuvwxyz";
    string s;
    cin >> s;   
    for(int i = 0; i < alpha.length(); i++)
        cout << (int)s.find(alpha[i]) << " "; 
        /*find 변수는 string STL의 함수로써 문자열이 처음 등장하는 위치의 인덱스를 반환하는 함수임
        만약 find 변수로 문자열에 없는 문자를 찾으려고 하면 형태가 unsinged 형태로써 2의 보수로 표현할 수 있는 가장 큰 양수를 표현하므로 그것만 고쳐서 -1로 
        하려면 int로 캐스팅 하면 됨*/
    return 0;
}
