#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            s[i] = toupper(s[i]);
        }
        else if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] = tolower(s[i]);
        }
    }
    int result = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            result = result - s[i];
        }else if(s[i] >= 'A' && s[i] <= 'Z'){
            result = result + s[i];
        }
    }
    if(result < 0){
        result *= -1;
    }

    int flag = 0;
    for(int i = 2; i < result; ++i){
        if(result % i == 0){
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        cout << 1;
    }else{
        cout << 0;
    }

    return 0;
}
