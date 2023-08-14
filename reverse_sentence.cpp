#include<iostream>
#include<vector>
#include<math.h>
#include<string>
#include<stack>

using namespace std;

void reverse(string s){
    int i=0;
    stack < string > st;
    string w="";
    while(i!=s.size()+1){
if(s[i]==' ' || i==s.size()){
    st.push(w);
    w="";
    i++;
}
else{w+=s[i];i++;}


    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}

int main(){
    string s="enter the name if exist?";
    reverse(s);
    
    return 0;
}