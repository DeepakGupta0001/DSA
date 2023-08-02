       #include<iostream>
       using namespace std;
       int main(){
        int x;
        cout<<"enter the number : ";
        cin>>x;
         int l=0,n=x,k;
        while(n>0){
            l=l*10;
            k=n%10;
            l+=k;
n/=10;
        }
        if(l==x){
        cout<<"true";
       }else{cout<<"false";}}
