#include <iostream>
#include <cstdio>
#include<cmath>

using namespace std;

int max_of_four(int a,int b,int c,int d){
    int re=max(max(a,b),max(c,d));
    return re;
}
int main() {
    int a, b, c, d;
    cout<<"enter the four number : ";
    cin>>a>>b>>c>>d;
    int ans = max_of_four(a, b, c, d);
    cout<<"ans is : "<<ans;
    
    return 0;
}