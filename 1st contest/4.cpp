/*#include <iostream>
using namespace std;
#include <string>

int main()
{
  int n;
  cin>>n;
  int a[n];
  int cnt=0;
  for(int i=0; i<n; i++){
    cin>>a[i];
  }
  for(int i=0; i<n; i++){
    for(int j=1; j<=a[i]; j++){
      if(a[i]%j==0)
        cnt++;
    }
    if(cnt==3)
      cout<<"YES ";
     else cout<<"NO ";
  }
  return 0;
}*/


#include <iostream>
using namespace std;
#include <string>
#include <cmath>

int main(){
  int n;
  cin>>n;
  int a[n];
  int cur;
  for(int i=0; i<n; i++){
    cin>>a[i];
    cur = sqrt(a[i]);
    
      for(int j=2; j*j<=cur; j++){
        if(a[i]%j == 0) cout<<"NO";
        else cout<<"YES";
      }
    
  }
  return 0;
}