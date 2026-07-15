#include <bits/stdc++.h>
using namespace std;
int main(){
    string line;
    getline(cin, line);

    stringstream ss(line);
    string word;

    while(ss >> word){
        for(char &c: word){
            c = toupper(c);
        }
        cout << word << endl;
    }


    return 0;
}