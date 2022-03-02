/* 
N개의 수가 주어졌을 때, 
이를 오름차순으로 정렬하는 프로그램을 작성하시오.
주요 생각
배열에 각 값을 집어 넣은 다음 전 값과 다음 값을 비교해서 temp라는
임시 저장할 수 있는 변수에 집어넣은 다음 값을 바꾸어 주는 형태로
오름 차순으로 배열을 만든다. 선택정렬을 활용한다.
*/
#include<iostream>

using namespace std;
int main(){

    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n; //숫자의 개수
    int temp; //비교를 위해서 숫자를 담아놓은 변수
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
        } // 값이 중복되었을 때 두 번 출력하지 않도록 하기 위해서
            cout << arr[l] << endl;

    }
}