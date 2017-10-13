#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n; 
	string s[n];
	string str;
	bool found;
	int cnt = 0;
	int a[n];
	for(int i=0; i<n; i++){
		cnt = 0;
		cin>>str;
		if(str == "add"){
			string S;
			cin>>S;
			s[i] = S;
		}
		if(str == "find"){
			string st;
			cin>>st;
			found = str.find(st);
			if(found)
				cnt++; 
		}
		a[i] = cnt;
	}
	for(int i=0; i<n; i++)
		cout<<a[i]<<endl;
	return 0;
}