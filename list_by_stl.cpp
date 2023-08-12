#include<iostream>
#include<list>
#include<math.h>
#include<string>
#include<vector>

using namespace std;

int main(){
    list<int> l(6);

list<int> :: iterator it=l.begin();
*it=7;
it++;
*it=6;
l.push_front(2);
l.push_back(3);
l.push_front(1);

l.push_back(4);
l.pop_back();
l.pop_front();
l.remove(0);
list<int> a(4,6);
l.merge(a);
l.sort();
l.reverse();
list<int> :: iterator ir=l.begin();
cout<<"element are : ";
for(;ir!=l.end();ir++){
    cout<<*ir;
}
    return 0;
}