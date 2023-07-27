#include <iostream>
using namespace std;

int main() {
    int e,flag,c,n,y,x,a,b;
    
    cout<<"enter number of element in the array : ";
    cin>>n;
    cout<<"enter ans of  your problem : ";
        cin>>y;
   int arr[n];
    a=0;
    flag=1;
    x=0;
    int g=1;
    cout<<"enter element of the array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        a=a|arr[i];
        
    }
    while(a!=0 && y!=0){
        
    if((a & 1)==0 && (y & 1)==0){
        e=0;
    }
    else if((a & 1)==0 && (y & 1)==1){
    e=1;        
    }
    
    else if((a & 1)==1 && (y & 1)==1){
        e=0;
    }
    else {
    flag=0;       
    break;
    }
    a=a>>1;
    y=y>>1;
    x=x+g*e;
    g*=2;
    }
     while(a!=0 && flag==1){
    
        if((a & 1)==0){
        e=0;
    }
    else{flag=0;break;}
        x=x+g*e;
        a=a>>1;
        g*=2;
    }
    while(y!=0 && flag==1){
        
        if((y & 1)==0){
        e=0;
    }
    else{
    e=1;        
    }
    
        x=x+g*e;
        y=y>>1;
        g*=2;
    }
   
    if(flag==0){
        cout<<"not found"<<endl;
    }
    else{
        cout<<"value of appendor is : "<<x<<endl;
    }
    
	// your code goes here
	return 0;
}
