#include<iostream>
#include<vector>
#include<math.h>
#include<string>
#include<stack>

using namespace std;

int pre(string s){
    stack<int> st;
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]>='0' && s[i]<='9'){
            st.push(s[i]-'0');
        }
        else{
            int a=st.top();st.pop();int b=st.top();st.pop();
            switch (s[i]){
                case '+' : st.push(a+b);break;
                case '*' : st.push(a*b);break;
                case '/' : st.push(a/b);break;
                case '-' : st.push(a-b);break;
                case '^' : st.push(pow(a,b));break;
            }
    }
    }
    return st.top();
}
int main(){
    string s="-+7*45+20";
    cout<<pre(s);
    
    return 0;
}
