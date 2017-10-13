#include <stack> 
#include <iostream> 
using namespace std;
 
int main() { 
    stack<char> s; 
    string str;
    cin>>str;
    int cnt = 0;
    int hm = 0;
    
    for (int i=0; i<str.size(); i++) { 
        if(s.empty() || ((str[i] == '+' || str[i] == '-') && s.top() != str[i])){
                s.push(str[i]); 
                continue; 
        }
        if(!s.empty() && (s.top() == str[i])){
            s.pop();
        }
    } 
    if(s.empty()) cout<<"Yes";
    else cout<<"No";
    return 0;
}