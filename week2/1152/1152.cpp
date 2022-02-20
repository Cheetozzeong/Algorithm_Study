/*
영어 대소문자와 공백으로 이루어진 문자열이 주어진다. 이 문자열에는 몇 개의 단어가 있을까? 이를 구하는 프로그램을 작성하시오. 
단, 한 단어가 여러 번 등장하면 등장한 횟수만큼 모두 세어야 한다.
주요 생각
입력받은 문자열 중간에 나오는 공백들의 개수 == 단어의 개수
문자열에 연속된 공백은 없고, 문자열의 맨 앞과 맨 뒤가 공백일 경우엔 
새로운 단어가 아니므로 카운트를 줄인다
*/
#include<string>
#include<iostream>

using namespace std;
int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    string s;
    getline(cin,s); // 문자열 입력 받기(공백을 포함한)
                    // string 헤더파일에 들어있으며, getline함수를 통해 표준 입력 cin을 str에 저장하라는 의미이다.
    int count_s = 0;
    if(s.empty())
    {
        cout << "0";
        return 0;
    }
    count_s = 1;
    for(int i = 0; i < s.length(); i++){
        if(s[i]==' '){ // 받아들인 문자열이 공백 이라면 한 단어이므로 증가
            count_s++;
        }
    }
        if(s[0]==' ')
        {
            count_s--;
        }
        if(s[s.length()-1] == ' ')
        {
            count_s--;
        }

    cout << count_s << endl;
    return 0;
}
