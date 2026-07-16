#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cout << "Enter the number of test cases: ";
	cin >> t;

	for(int i = 0; i < t; i++){
		int num;
		cout << "Enter a number: ";
		cin >> num;
		long long ans = 1;
		for(int j = 0; j < num; j++){
			int n;
			cin >> n;
			ans *= n;
		}
		if(ans % 10 == 2 || ans % 10 == 3 || ans % 10 == 5){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
    return 0;
}