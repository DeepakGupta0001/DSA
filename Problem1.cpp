#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a,b;
    cout<<"enter the range : ";
    cin>>a>>b;
    string arr[9]={"one","two","three","four","five","six","seven","eight","nine"};
    for(int i=a;i<=b;i++){
        if(i>9){
            if(i%2==0){
                cout<<"even"<<endl;
                }
            else{
                cout<<"odd"<<endl;
                }
        }
        else{
            cout<<arr[i-1]<<endl;
            }
    }
    // Complete the code.
    return 0;
}