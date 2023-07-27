// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Write C++ code here
     cout<<"enter the number : ";
     int n;
     cin>>n;
     int j=0;
        for( int i=2;i<=sqrt(n);i++){
            
            while(n%i==0){
                j=i;
                n=n/i;
                
            }
            
        
    }
    if(n>2){
        cout<<n<<endl;
        
    }
    else{
        cout<<j<<endl;
        
    }
    return 0;
}