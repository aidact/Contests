#include <iostream>
using namespace std;
#include <string>
#include <cmath>

int main()
{
  int n, x;
  cin>>n>>x;
  int cnt=0;
  for(int i=1; i<=n; i++){
          if(x%i==0){
            if(x/i<=n)
            cnt++;
          }
      
  }
  cout<<cnt;
  return 0;
}