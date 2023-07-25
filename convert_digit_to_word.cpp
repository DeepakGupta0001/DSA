#include<iostream>
using namespace std;
int main(){cout<<"enter the number : ";
int n;
cin>>n;
string s[9]={"one","two","three","four","five","six","seven","eight","nine"};
if(n<=9){
    cout<<s[n-1];
}
else{
    cout<<"Greater than 9";
}
    return 0;
}
