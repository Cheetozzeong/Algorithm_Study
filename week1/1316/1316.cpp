/*
�׷� �ܾ�� �� ���ڰ� �����ؼ� ��Ÿ���� ��츸�� ����
aabbccb ���� ���� ���ڰ� �������� �����̸� �׷� �ܾ �ƴ�
�ֿ� ����
���ڿ��� �޾��� �� �� ���ڿ����� �迭�� ���� �� �ٷ� �� ���ڿ��� ����
���� ���� ��� �������� �ٸ� ���� ��쿡 �� ���� �� �迭�� �ִ� �ٸ� ���ڵ��
���� ���ؼ� ���� ���� �ִ����� üũ �ϴ� ������ ��ģ��.
*/
#include<string>
#include<cstring>
#include<iostream>

using namespace std;

int main(){

    int N ;
    int count_g = 0; // �׷� �ܾ��� ����
    string s;
    cin >> N;

    for (int i = 0; i < N; i++)
	{
        cin >> s; //���ڿ� �Է� �ޱ�
        bool sign = true;
        for(int j=0; j<s.length(); j++){
            for(int k=0; k<j; k++){
                if(s[j] != s[j-1] && s[j] == s[k]){ 
                    /* �׷� �ܾ����� �ƴ��� üũ�ϴ� ����
                    �迭�� ���� �����鼭 �� �� ���� ���� ���� �ٸ����� Ȯ���ϰ�
                    ���� �迭 ��ü�� �� ���� ������ �� ���� ���� �����ϸ� 
                    �׷� �ܾ �ƴ϶�� �Ǵ��Ͽ� sign�� false�� ����
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