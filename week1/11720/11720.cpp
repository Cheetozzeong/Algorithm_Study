/* ����
    N���� ���ڰ� ���� ���� �����ִ�. �� ���ڸ� ��� ���ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
    ù° �ٿ� ������ ���� N (1 �� N �� 100)�� �־�����. ��° �ٿ� ���� N���� ������� �־�����.
*/

#include <iostream>
#include <string>
#include <cstring>
#include <stdio.h>
using namespace std;

int main(){

    int count_num; // �޾Ƶ��̴� ������ ��
    cin >> count_num; // ù�ٿ� �� �ڸ����� �Է¹���

    int sum = 0; // �� ��
    char arr[count_num]; // ���ڴ� �迭�� ���� ���� 1�ڸ��� �Է� �޵��� ��
    cin >> arr;
    //cin.getline(input,count_num); 

    for(int i = 0; i < count_num; i++){
        sum += arr[i] - '0'; // �ƽ�Ű �ڵ� ���� ���ϴ� �Ŷ� 0�� ����� ��
      
    }
    cout << sum << endl;

    return 0;
}
