/*
괄호 문자열은 () 만으로 구성되어있는 문자열
() 한 쌍을 vps라고 부른다.
x가 vps면 (x)도 vps이다. vps 끼리 결합한 xy도 vps다.
vps인지 아닌지 판단하여 yes or no 로 나타내시오
주요 생각
스택을 활용해 맨 처음이 ( 인지를 먼저 확인 + (가 먼저 입력 된 것이 맞으면 
)를 받을 때마다 하나씩 빼가면서 stack이 비어있는지를 확인하여
비어있으면 짝이 모두 맞은 것이니 vps가 맞다. 
*/
#include <iostream>
#include <vector>
#include <stack>
#include <string>

using namespace std;

int main()
{
	int T; // 총 몇개 인지 알려주는 변수
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		stack<char> st; //()를 담아놓기 위한 stack
		string s;
		cin >> s;

		for (int j = 0; j < s.length(); j++)
		{
			if (st.empty() || s[j] == '(') st.push(s[j]); // (일때는 push 
			else if (st.top() == '(') st.pop(); // 스택 맨 위의 값이 )일때는 pop을 한다.
		}

		if (st.empty()) cout << "YES" << endl;
		else cout << "NO" << endl; // 모든 문자를 입력한 후에 스택이 비어있으면 yes 아니면 no
	}
    
	return 0;
}