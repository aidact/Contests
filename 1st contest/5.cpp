#include <iostream>
using namespace std;
#include <string>
#include <vector>
int main()
{
  int n;
  cin>>n;
  int a[n];
  vector<int>b[];
  for(int i=0; i<n; i++){
      cin>>a[i];
  }
  if(n<3) cout<<0;
  else{
    for(int i=0; i<n; i++){
         for(int l=1; l<=n-2; l++){
             for(int r=l+1; r<=n-1; r++){
                 b[i].push_back();
             }
         }
    }
  }
  return 0;
}
