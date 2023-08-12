#include<iostream>
#include<vector>
#include<math.h>
#include<string>

using namespace std;

int main(){
 vector<int> a;
  a.push_back(2);
   a.push_back(1);
   a.push_back(3);
vector<int> :: reverse_iterator it=a.rbegin();
  for(;it!=a.rend();it++){cout<<*it;}
    return 0;
}
