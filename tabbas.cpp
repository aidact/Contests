#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main(){
	string str;
	int n = 0;
	int cnt = 0;
    cin>>str;
	for(int i=str.size()-1; i>=0; --i){
		if(str[i] - 48 == 4){
			str[i] = 1;
		}
		if(str[i] - 48 == 7){
			str[i] = 2;
		}
	
		    cnt += (int)str[i]*pow(2.0,n);
	
		n++;
	}
	cout<<cnt;
	return 0;
}