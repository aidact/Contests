#include <iostream>
using namespace std;
#include <string>

int main()
{
  string s;
  int i=0;
  int cnt=0;
  int len, ans;
  while(cin>>s){
    if(s[i]=='+') cnt++;
    else if(s[i]=='-') cnt--;
    while(s[i]!=':'){
      i++;
      len=s.size()-i;
    }
  }
  ans = ans + cnt*len;
  cout<<ans;
  return 0;
}