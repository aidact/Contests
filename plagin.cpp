#include <iostream>
#include <stack>
using namespace std;

template <typename T>
void pstack(stack<T> &s){
    if(!s.size())
        return;

    T t = s.top();
    s.pop();

    pstack(s);

    cout << t;
    s.push(t);
}

int main(){
    string s;
    cin>>s;

    stack <char> st;

    for(int i=0; i<s.size(); i++){
        if(st.empty() || st.top() != s[i]){
            st.push(s[i]);
            continue;
        }

        if(!st.empty()){
            st.pop();
        }
    }

    pstack(st);
    return 0;
}