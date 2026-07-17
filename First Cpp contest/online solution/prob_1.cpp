#include <bits/stdc++.h>
using namespace std;

char upper(char c){
    return 'A' + (c - 'a');

}

int main(){
    while(true){
        string word;
        cin >> word;

        if(word.size() == 0){
            break;
        }
        for(int i = 0; i < word.size(); i++){
            word[i] = upper(word[i]);
        }
        cout << word << endl;
    }

    return 0;
}