#include <iostream> 
#include <stack> 
using namespace std;

bool check(string str){
    stack<char> s; 
    for (int i=0; i<str.size(); i++) {
        switch (str[i]) {
        case '(': case '{': case '[':
            s.push(str[i]);
            break;
        case ')': case '}': case ']':
            if (s.empty() || (str[i] == ')' && s.top() != '(') || (str[i] == '}' && s.top() != '{') || (str[i] == ']' && s.top() != '[')) {
                return false;
                return 0;
            }
            s.pop();
            break;
        }
    }
   if(s.empty()) return true;
   else return false;
}
 
int main() { 
    int n;
    cin>>n;
    string s;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>s;
        if(check(s)) a[i] = 1;
        else a[i] = 0;
    }
    for(int i=0; i<n; i++){
        if(a[i] == 1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}