#include <iostream>
#include <set>
using namespace std;

int formula(int x, int y){
	int sweet;
	sweet = x + 2*y;
	return sweet;
}

int main()
{
	int n, k;
	cin>>n>>k;
	int a[n];
	set<int> s;
	int cnt =0;
	int b[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
		//s.insert(a[i]);o
	}
	int r = a[0];
	for(int i=0; i<n; i++){
		while(a[i] < k){
			a[n] = formula(a[i], a[i+1]);
			r = r+2;
			cnt++;
		}
		for(int j=n-1; j>r; j--){
			if(a[j] < a[j-1])
				swap(a[j], a[j-1]);
		}
	}
	/*set<int>::iterator it;
	for(it = s.begin(); it != s.end(); it++){
		while(*it < k){
			set<int>::iterator gt;
			gt = it;
			it++;
			int f = *gt;
			int sec = *it;
			s.erase(gt);
			s.erase(it);
				s.insert(formula(f, sec));
			cnt ++;
		}
	}*/
	cout<<cnt;
	return 0;
}