/*
크로아티아 알파벳 6개
'c=', 'c-', 'dz=', 'd-', 'lj', 'nj', 's=', 'z='
단어가 주어졌을 때, 몇 개의 크로아티아 알파벳으로 이루어져 있는지 출력한다.
주요 생각
find로 그 문자의 위치 인덱스를 받아들여서 ??
*/
// 풀이 1
#include<string>
#include<iostream>

using namespace std;
int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    string s;
    cin >> s;

    int idx; // 인덱스 표시해주는 변수
    string arr[8] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    for(int i =0; i < 8; i++)
    {
		idx = s.find(arr[i]);
		if(idx == string::npos){
		break;
		}
		s.replace(idx,arr[i].length(),"a");
    }

	cout << s.length();
    
}


// 풀이 2
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	cin >> str;
	int num = 0;

	int i = 0;
	while (i < str.length()) {
		if (str[i] == 'c') {
			if (str[i + 1] == '=')
				i++;
			else if (str[i + 1] == '-')
				i++;
		}
		else if (str[i] == 'd') {
			if (str[i + 1] == '-')
				i++;
			else if (str[i + 1] == 'z'&&str[i + 2] == '=')
				i += 2;
		}
		else if (str[i] == 'l') {
			if (str[i + 1] == 'j') 
				i++;
		}
		else if (str[i] == 'n') {
			if (str[i + 1] == 'j')
				i++;
		}
		else if (str[i] == 's') {
			if (str[i + 1] == '=') 
				i++;
		}
		else if (str[i] == 'z') {
			if (str[i + 1] == '=')
				i++;
		}
		num++;
		i++;
	}
	printf("%d\n", num);
}