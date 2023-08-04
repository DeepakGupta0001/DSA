#include<iostream>
#include<vector>
#include<math.h>
#include<string>

using namespace std;

int gcd(int a, int b){
    if(a == 0) return b;
    return gcd(b%a, a);
}

long smallest_multiple(int n){
    long out = 1;
    for (int i = 1; i<=n; i++){
        out = (out*i)/gcd(out, i);
    }
    return out;
}

int main(){
    
    
    
        int n; 
        cout<<"enter the number : ";
        cin>>n;
        cout<<smallest_multiple(n);
    
    return 0;
}   