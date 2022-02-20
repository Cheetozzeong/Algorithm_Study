/*
조건
"OOXXOXXOOO"와 같은 OX퀴즈의 결과가 있다. O는 문제를 맞은 것이고, 
X는 문제를 틀린 것이다. 문제를 맞은 경우 
그 문제의 점수는 그 문제까지 연속된 O의 개수가 된다. 예를 들어, 10번 문제의 점수는 3이 된다.
첫째 줄에 테스트 케이스의 개수가 주어진다. 각 테스트 케이스는 한 줄로 이루어져 있고, 길이가 0보다 크고 80보다 작은 문자열이 주어진다. 
문자열은 O와 X만으로 이루어져 있다.
주요 생각
O일때는 증가하고 X일때는 0이 되는 함수를 설정하고 
그 값을 계속 더해주는 형태의 변수 이용
*/
#include <iostream>
#include <string>
 
using namespace std;

int Scoring_OX(string& s){ // 

    int score = 0; // O가 얼마나 누적 되었는지를 표현해주는 변수
    int sum = 0;
    
    for(char &v : s){
        if(v=='O'){ // 받아들인 문자열이 0일때 누적을 1 증가시킨다.
            score++;
            sum += score;
        }
        else{ // 받아들인 문자열이 O가 아닐때 누적을 0으로 초기화 시킨다.
            score = 0;
        }

    }
        return sum;    
}

int main(int argc, const char * argv[]){

    int count_case; // 케이스의 수
    cin >> count_case;

    for(int i = 0; i < count_case; i++){
        string s;
        cin >> s;

        cout << Scoring_OX(s)<<"\n";
    }
    return 0;


}
