
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int N;
		cin >> N;
		string s;
		cin >> s;

        long long decimal_num = 0;
        int pow_2 = 1;

		for(int j = s.size() - 1; j >= 0; j++){
            int binary_d = s[j] - '0';
            decimal_num += binary_d * pow(2, pow_2);
            pow_2++;

        }
        cout << decimal_num << endl;
	}
}

