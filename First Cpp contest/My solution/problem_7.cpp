#include <bits/stdc++.h>
using namespace std;
int main(){
    string line;
    cout << "Enter a string: ";
    cin >> line;
    
    // calculation
    long long total = 0;
    for(char c: line){
        if(int(c) >= 97){
            total += int(toupper(c));
        }else{
            total -= int(tolower(c));
        }
    }

    // checks if its negative or not
    if(total < 0){
        total = abs(total);
    }

    // checks if its a prime number
    int check = 0;
    for(int i = 2; i*i <= total; i++){
        if(total%i == 0){
            check = 1;
            break;
        }
    }

    if(check == 1){
        cout << 0 << '\n';
    }else{
        cout << 1 << '\n';
    }

    return 0;
}