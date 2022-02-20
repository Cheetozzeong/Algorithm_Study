/*
그룹 단어란 각 문자가 연속해서 나타나는 경우만을 말함
aabbccb 같이 같은 문자가 떨어져서 연속이면 그룹 단어가 아님
주요 생각
문자열을 받았을 때 각 문자열들을 배열에 넣은 뒤 바로 앞 문자열과 비교해
같은 값일 경우 지나가고 다른 값일 경우에 그 값과 그 배열에 있는 다른 문자들과
전부 비교해서 같은 값이 있는지를 체크 하는 과정을 거친다.
*/
#include<string>
#include<cstring>
#include<iostream>

using namespace std;

int main(){

    int N ;
    int count_g = 0; // 그룹 단어의 개수
    string s;
    cin >> N;

    for (int i = 0; i < N; i++)
	{
        cin >> s; //문자열 입력 받기
        bool sign = true;
        for(int j=0; j<s.length(); j++){
            for(int k=0; k<j; k++){
                if(s[j] != s[j-1] && s[j] == s[k]){ 
                    /* 그룹 단어인지 아닌지 체크하는 과정
                    배열에 집어 넣으면서 이 전 값과 현재 값이 다른지를 확인하고
                    만약 배열 전체와 그 값을 비교했을 때 같은 값이 존재하면 
                    그룹 단어가 아니라고 판단하여 sign을 false로 변경
                    */
                    sign=false;
                    break;
                }
            }
        }
        if(sign == true) count_g++;
    }
    cout << count_g;
   return 0;
}