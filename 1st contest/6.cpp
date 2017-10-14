#include <iostream>
using namespace std;
#include <string>
#include <vector>
struct Bor{
    int l;
    int r;
};
int main()
{
    int cnt=0;
  string s;
  cin>>s;
  int n;
  cin>>n;
  Bor b[n];
  for(int i=0; i<n; i++){
      cin>>b[i].l>>b[i].r;
  }
  for(int i=0; i<n; i++){
      for(int j=b[i].l; j<b[i].r; j++){
          if(s[j]==s[j+1]) cnt++;
      }
      cout <<cnt << endl;
      cnt = 0;
  }
  
  return 0;
}
