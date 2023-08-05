#include<iostream>
#include<vector>
#include<math.h>
#include<string>
#include<fstream>
using namespace std;

int main(){
     ofstream out("username.txt");
    string s1="deepa \n",s="gupta \n";
    out<< s1<<s;


    out.close();
    return 0;
}