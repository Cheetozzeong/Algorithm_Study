/*
���� ��ҹ��ڿ� �������� �̷���� ���ڿ��� �־�����. �� ���ڿ����� �� ���� �ܾ ������? �̸� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. 
��, �� �ܾ ���� �� �����ϸ� ������ Ƚ����ŭ ��� ����� �Ѵ�.
�ֿ� ����
�Է¹��� ���ڿ� �߰��� ������ ������� ���� == �ܾ��� ����
���ڿ��� ���ӵ� ������ ����, ���ڿ��� �� �հ� �� �ڰ� ������ ��쿣 
���ο� �ܾ �ƴϹǷ� ī��Ʈ�� ���δ�
*/
#include<string>
#include<iostream>

using namespace std;
int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    string s;
    getline(cin,s); // ���ڿ� �Է� �ޱ�(������ ������)
                    // string ������Ͽ� ���������, getline�Լ��� ���� ǥ�� �Է� cin�� str�� �����϶�� �ǹ��̴�.
    int count_s = 0;
    if(s.empty())
    {
        cout << "0";
        return 0;
    }
    count_s = 1;
    for(int i = 0; i < s.length(); i++){
        if(s[i]==' '){ // �޾Ƶ��� ���ڿ��� ���� �̶�� �� �ܾ��̹Ƿ� ����
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
