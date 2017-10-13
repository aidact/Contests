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
        if(str[i] == '('){
                s.push(str[i]); 
                continue; 
        }
        if(!s.empty()){
            cnt += 2;
            s.pop();
        }
    } 
    cout << cnt ; 
    return 0;
}