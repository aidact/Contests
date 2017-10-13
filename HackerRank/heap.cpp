#include <iostream>
#include <set>
using namespace std;

set<int> w;
int main(){
	int n;
	cin>>n;
	for(int i = 0, x; i < n; ++i){
		cin >> x;
		if(x == 1){
			cin >> x;
			w.insert(x);			
		}
		if(x == 2){
			cin >> x;
			w.erase(x);
		}
		if(x == 3){
			
			    set<int>:: iterator it = w.begin();	
				cout << *it << endl;
				
		}
	}	
	return 0;
}