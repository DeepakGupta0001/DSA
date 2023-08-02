#include<iostream>
#include<vector>
using namespace std;
int main(){cout<<"enter number of element : ";
int n;
cin>>n;
int arr[n];
cout<<"enter the element : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<"sum is : "<<sum;}