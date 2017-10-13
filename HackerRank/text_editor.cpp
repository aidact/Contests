#include <iostream>
#include <stack>
using namespace std;

int main()
{
	string s;
	int n;
	cin>>n;
	int c;
	int numb, ind;
	stack<string> st;
	int index=0;
	st.push("");
	for(int i=0; i<n; i++){
		cin>>c;
		if(c == 1){
			string S;
			cin>>S;
			s += S;
			st.push(s);
		}
		if(c == 2){
			cin>>numb;
			int x = s.size();
			while (numb--)
				s.pop_back();
			st.push(s);
		}
		if(c == 3){
			cin>>ind;
			if (ind <= s.size())
			cout<<s[ind-1]<<endl;
		}
		if(c == 4){
			st.pop();
			s = st.top();
		}

	}
	return 0;
}