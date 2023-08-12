#include<iostream>
#include<vector>
#include<math.h>
#include<string>
#include<map>

using namespace std;

int main(){
map<string,int> m;
m["deepak"]=1;
m["sanjeev"]=2;
m["adarsh"]=3;

m.insert({{"abhinav",4},{"rishabh",5}});
map<string,int> :: iterator it;
for(it=m.begin();it!=m.end();it++){
    cout<<(*it).first<<" "<<(*it).second<<endl;
}    
    return 0;
}