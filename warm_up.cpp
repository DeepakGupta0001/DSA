#include<iostream>
#include<vector>
#include<math.h>
#include<string>

using namespace std;
vector<int> sh(string big,string small){
    
    vector<int> result;
    int index = big.find(small);
    while(index!=-1){
    	result.push_back(index);
    	index = big.find(small,index+1);
    }
    
    return result;
}
int main(){string s;
cout<<"enter the string :";
cin>>s;
string sb;
cout<<"enter the substring :";
cin>>sb;
cout<<s.find(sb);
    vector <int> a=sh(s,sb);
    for(auto &l : a){
        cout<<l<<endl;
    }
}