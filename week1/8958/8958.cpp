/*
����
"OOXXOXXOOO"�� ���� OX������ ����� �ִ�. O�� ������ ���� ���̰�, 
X�� ������ Ʋ�� ���̴�. ������ ���� ��� 
�� ������ ������ �� �������� ���ӵ� O�� ������ �ȴ�. ���� ���, 10�� ������ ������ 3�� �ȴ�.
ù° �ٿ� �׽�Ʈ ���̽��� ������ �־�����. �� �׽�Ʈ ���̽��� �� �ٷ� �̷���� �ְ�, ���̰� 0���� ũ�� 80���� ���� ���ڿ��� �־�����. 
���ڿ��� O�� X������ �̷���� �ִ�.
�ֿ� ����
O�϶��� �����ϰ� X�϶��� 0�� �Ǵ� �Լ��� �����ϰ� 
�� ���� ��� �����ִ� ������ ���� �̿�
*/
#include <iostream>
#include <string>
 
using namespace std;

int Scoring_OX(string& s){ // 

    int score = 0; // O�� �󸶳� ���� �Ǿ������� ǥ�����ִ� ����
    int sum = 0;
    
    for(char &v : s){
        if(v=='O'){ // �޾Ƶ��� ���ڿ��� 0�϶� ������ 1 ������Ų��.
            score++;
            sum += score;
        }
        else{ // �޾Ƶ��� ���ڿ��� O�� �ƴҶ� ������ 0���� �ʱ�ȭ ��Ų��.
            score = 0;
        }

    }
        return sum;    
}

int main(int argc, const char * argv[]){

    int count_case; // ���̽��� ��
    cin >> count_case;

    for(int i = 0; i < count_case; i++){
        string s;
        cin >> s;

        cout << Scoring_OX(s)<<"\n";
    }
    return 0;


}
