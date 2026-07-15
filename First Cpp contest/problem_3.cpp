#include <bits/stdc++.h>
using namespace std;
int main(){
	int T;
	cin >> T;
	for(int i = 0; i < T; i++){
		int N;
		cin >> N;
		string S;
		cin >> S;

        long long decimal_num = 0;

		for(int j = 0; j < N; j++){
            if(S[j] == '1'){
                decimal_num += (1LL << (N - j - 1)); // pow(2, N-j-1) avoid pow func bcz pow() returns double which is a floating number and its slower
            }
        }
        cout << decimal_num << endl;
	}
    return 0;
}
