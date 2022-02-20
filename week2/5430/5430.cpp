/*
함수 두가지 R(뒤집기), D(버리기)
비어있는데 버리면 ERROR
주요 생각
R을 받아들일때는 배열을 거꾸로 받아들이도록 하고
D할 때는 배열 번호를 이용해 삭제 하기.
*/

/*#include<string>
#include<iostream>

using namespace std;

int check_fun(string &s, int n){

    for(char &v : s)
    {
        if(v == 'R')
        {
            for(int j =0; j< s.size(); j++){
                int r1 = s[j];
                int r2 = s[(s.size()-1)-j];
                s[(s.size()-1)-j] == r1;
                s[j] == r2;
                // if () // for문 반복 되면 원래 대로 돌아오는 부분 해결 못함
            }    // R에 따라서 배열 뒤집기
        }
        else if(v == 'D')
        {
            for(int k =0; k< s.size(); k++){
                for(int l = 1; l> k; l++){
                s[k] == s[l];
                k == l;
                }
            }// D에 따라서 배열 앞에서부터 삭제하기
             
        }
        else 
        {
            break;
        }
    }

}
int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int T;
    cin >> T;
    string fun;
    cin >> fun;
    int n;
    cin >> n;   
    int arr[n];

    for(int i = 0; i < T; i++){
      
    }
    return 0;
}*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include<deque>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,t;

    cin >> t;
    while (t--) {
        string order,str;
        bool reverse=false, error=false;
        deque<int> dq;
        cin >> order;
        cin >> n;
        cin >> str;
        string s = "";
        for (int i = 0; i<str.length();i++) {

            if (isdigit(str[i])) {
                s += str[i];

            }
            else {
                if (!s.empty()) {
                    dq.push_back(stoi(s));
                    s = "";
                }
            }
        }
        for (auto o : order) {
            if (o == 'R') {
                if (reverse)
                    reverse = false;
                else
                    reverse = true;
            }
            else {
                if (dq.empty()) {
                    cout << "error" << '\n';
                    error = true;
                    break;
                }
                if (reverse)
                    dq.pop_back();
                else
                    dq.pop_front();
            }
        }
        if (!error) {
            cout << '[';
        }
        if (reverse && !dq.empty()) {
            for (auto o = dq.rbegin(); o != dq.rend(); o++) {
                if (o == dq.rend() - 1)
                    cout << *o;
                else
                cout << *o << ',';
            }
        }
        else if (!reverse&&!dq.empty()){
            for (auto o = dq.begin(); o != dq.end(); o++) {
                if (o == dq.end() - 1)
                    cout << *o;
                else
                cout << *o << ',';
            }
        }
        if(!error)
        cout <<"]\n";

    }
}