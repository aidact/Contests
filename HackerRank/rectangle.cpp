#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
	int n;
	cin>>n;
	long long arr[n];
	long long maxi = 0;
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	for(int i=0; i<n; i++){
		int r = 0, l = 0;
		long long sum = 0;
		for (int j = i; j >= 0; -- j) // <-
		{
            if (arr[j] < arr[i])
				break;
            l = j;
		}
		for (int j = i; j < n; ++ j) // ->
		{
			if (arr[j] < arr[i])
				break;
            r = j;
		}
		sum += arr[i] * (r - l + 1);
		if (maxi < sum)
			maxi = sum;
	}
	cout<<maxi;
	return 0;
}