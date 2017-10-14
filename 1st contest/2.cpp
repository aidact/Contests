#include <iostream>
using namespace std;
#include <string>
#include <stack>
int main()
{
  string s;
  getline(cin,s);
  string str="";
  int ans = 0;
  for(int i=0; i<s.size(); i++){
     if((int)s[i]>96 && (int)s[i]<123)
        str+=s[i];
  }
  for(int i=0; i<str.size(); i++){
      int cnt=0;
      for(int j=i+1; j<str.size(); j++){
          if(str[i]==str[j]) cnt++;
      }
      if(cnt==0) ans++;
  }
  cout<<ans;
  return 0;
}
