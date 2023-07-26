 #include<iostream>
using namespace std;
int main(){cout<<"enter the number : ";
int n;
cin>>n;
long a=1, b=1;
    
    long s=0;
    for(int i=2;a+b<=n;i++){
        long d=a;
        a=a+b;
        b=d;
            if(a%2==0){
                s+=a;
            }
            
        }
        cout<<s<<endl;
    }