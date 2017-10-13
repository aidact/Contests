#include <iostream>
#include <cmath>
using namespace std;

bool prime(int x){
	for(int i=2; i<=sqrt(x); i++){
		if(x%i ==0) return false;
	}
return true;
}
int comp(int x){
	int ind;
	for(int i=(int)sqrt(x); i>1; i--){
		if(x%i == 0)
			ind = i;
			break;
	}
	return x/ind;
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	int cnt = 0;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	for(int i=0; i<n; i++){
		while(a[i] != 0){
			if(prime(a[i])){
				a[i]--;
			}
			else 
				a[i] = comp(a[i]);

			cnt ++;
		}
		arr[i] = cnt;
		cnt = 0;
	}
	for(int i=0; i<n; i++){
		cout<<arr[i]<<endl;
	}
	return 0;
}