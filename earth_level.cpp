#include<iostream>
#include<vector>
#include<math.h>
#include<string>

using namespace std;

int earthLevel(int k)
{if(k==0){return 0;}
    int s=1;
    //your code goes here
    int a=1;
    
    while(a<=k){a=a*2;}
    a=a/2;
    k=k-a;
    s+=earthLevel(k);
    return s;
}

int main(){
 int k;cout<<"enter the number :";
 cin>>k;   
 cout<<earthLevel(k);
    return 0;
}