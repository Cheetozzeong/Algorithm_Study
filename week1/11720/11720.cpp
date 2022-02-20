/* 조건
    N개의 숫자가 공백 없이 쓰여있다. 이 숫자를 모두 합해서 출력하는 프로그램을 작성하시오.
    첫째 줄에 숫자의 개수 N (1 ≤ N ≤ 100)이 주어진다. 둘째 줄에 숫자 N개가 공백없이 주어진다.
*/

#include <iostream>
#include <string>
#include <cstring>
#include <stdio.h>
using namespace std;

int main(){

    int count_num; // 받아들이는 숫자의 수
    cin >> count_num; // 첫줄에 몇 자리인지 입력받음

    int sum = 0; // 총 합
    char arr[count_num]; // 숫자는 배열로 만들어서 각각 1자리씩 입력 받도록 함
    cin >> arr;
    //cin.getline(input,count_num); 

    for(int i = 0; i < count_num; i++){
        sum += arr[i] - '0'; // 아스키 코드 값을 더하는 거라 0을 빼줘야 함
      
    }
    cout << sum << endl;

    return 0;
}
