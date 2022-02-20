/*
��ȣ ���ڿ��� () ������ �����Ǿ��ִ� ���ڿ�
() �� ���� vps��� �θ���.
x�� vps�� (x)�� vps�̴�. vps ���� ������ xy�� vps��.
vps���� �ƴ��� �Ǵ��Ͽ� yes or no �� ��Ÿ���ÿ�
�ֿ� ����
������ Ȱ���� �� ó���� ( ������ ���� Ȯ�� + (�� ���� �Է� �� ���� ������ 
)�� ���� ������ �ϳ��� �����鼭 stack�� ����ִ����� Ȯ���Ͽ�
��������� ¦�� ��� ���� ���̴� vps�� �´�. 
*/
#include <iostream>
#include <vector>
#include <stack>
#include <string>

using namespace std;

int main()
{
	int T; // �� � ���� �˷��ִ� ����
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		stack<char> st; //()�� ��Ƴ��� ���� stack
		string s;
		cin >> s;

		for (int j = 0; j < s.length(); j++)
		{
			if (st.empty() || s[j] == '(') st.push(s[j]); // (�϶��� push 
			else if (st.top() == '(') st.pop(); // ���� �� ���� ���� )�϶��� pop�� �Ѵ�.
		}

		if (st.empty()) cout << "YES" << endl;
		else cout << "NO" << endl; // ��� ���ڸ� �Է��� �Ŀ� ������ ��������� yes �ƴϸ� no
	}
    
	return 0;
}