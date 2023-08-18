#include<iostream>
#include<vector>
#include<math.h>
#include<string>

using namespace std;
string co(int minutes){
    //complete this function
    
    int n=minutes/60;
    int m=minutes%60;
    string s=to_string(n);
    s+=":";
    if(m/10==0){
        s+="0";
    s+=to_string(m);
}else{   s+=to_string(m);}  return s;
}

int main(){
 int n;
 cout<<"enter the value of minutes :";
 cin>>n;
 cout<<co(n);   
    return 0;
}