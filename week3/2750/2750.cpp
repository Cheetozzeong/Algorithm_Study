/* 
N���� ���� �־����� ��, 
�̸� ������������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�ֿ� ����
�迭�� �� ���� ���� ���� ���� �� ���� ���� ���� ���ؼ� temp���
�ӽ� ������ �� �ִ� ������ ������� ���� ���� �ٲپ� �ִ� ���·�
���� �������� �迭�� �����. ���������� Ȱ���Ѵ�.
*/
#include<iostream>

using namespace std;
int main(){

    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n; //������ ����
    int temp; //�񱳸� ���ؼ� ���ڸ� ��Ƴ��� ����
    cin >> n;
    int arr[n];

    for(int i=0; i< n; i++)
    {
        cin>>arr[i];
    }

    for(int j=0; j<n-1; j++){
        for(int k= j+1; k< n; k++){
            if(arr[j]>arr[k])
            {
                temp = arr[k];
                arr[k] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int l =0; l<n; l++){
        if(l+1 < n && arr[l] == arr[l+1]){
            continue;
        } // ���� �ߺ��Ǿ��� �� �� �� ������� �ʵ��� �ϱ� ���ؼ�
            cout << arr[l] << endl;

    }
}