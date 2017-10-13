#include <iostream>
#include <algorithm>
#include <bitset>
using namespace std;


int main(){
	int n;
	cin>>n;
	long long ans = 999999999999;
	for(int i = 2; i<= 12; i++){
		for(int msk = 0; msk <=(1<<i); msk++){
			int svn =0, fr = 0;
			long long x;
			for(int j = 0; j < i; j++){
				if((msk & (1<<j)) > 0){
					x = x*10 + 7;
					svn++;
				}
				else {
					x = x*10 + 4;
					fr++;
				}
			}
			if(svn == fr && x >= n){
				ans = min(ans, x);
			}
		}
	}
	cout<<ans;

	return 0;
}

/*
2^4 = 16
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15

a[0] + a[1] + a[2]

0000
0001
0010
0011
0100
0101
0110
1000
1001
1010
1011
1100
1101
1110
1111

for (int msk = 0; msk < (1 << n); ++msk) {
	int cur = 0;
	for (int i = 0; i < n; ++i) {
		if (msk >> i & 1) {
			cur += a[i];
		}
	}
	if (cur == neededSum) {
		cout << "Yes";
	}
}
*/