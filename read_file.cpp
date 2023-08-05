#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

int main(){
    
ifstream in("username.txt");
    string s1,s2,s3;
    in>> s2>>s1;
    cout<<s2<<endl<<s1<<endl<<s3;
    in.close();



}