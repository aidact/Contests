#include <iostream>
#include <stack>
using namespace std;


int main()
{
	int n1, n2, n3;
	stack<int> s1;
	stack<int>s2;
	stack<int>s3;
	cin>>n1>>n2>>n3;
	int a[n1], b[n2], c[n3];
	int sum1 = 0, sum2 = 0, sum3 = 0;
	s1.push(0);
	s2.push(0);
	s3.push(0);

	for(int i=0; i<n1; i++){
		cin>>a[i];
	}
	for(int i=0; i<n2; i++){
		cin>>b[i];
	}
	for(int i=0; i<n3; i++){
		cin>>c[i];
	}

	for(int i=n1-1; i>=0; i--){
		sum1 += a[i];
		s1.push(sum1);
	}
	for(int i=n2-1; i>=0; i--){
		sum2 += b[i];
		s2.push(sum2);
	}
	for(int i=n3-1; i>=0; i--){
		sum3 += c[i];
		s3.push(sum3);
	}
	
	while(true){
		if(s1.top()==s2.top() && s1.top()==s3.top()){
			cout<<s1.top();
			return 0;
		}
		else if(s1.top()>s2.top() && s1.top()>s3.top()){
			s1.pop();
		}
		else if(s2.top()>s1.top() && s2.top()>s3.top()){
			s2.pop();
		}
		else{
			s3.pop();
		}
	}
	return 0;
}