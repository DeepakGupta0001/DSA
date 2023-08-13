#include<iostream>
#include<vector>
#include<math.h>
#include<string>

using namespace std;
int ma(vector<int> arr){
    //Complete this function, your function should return the maximum subarray sum
    int n = arr.size();
    vector<int> a(n);
    int m=0;
    if(arr[0]<0){a[0]=0;}
    else{a[0]=arr[0];
    m=max(m,a[0]);
    }
    for(int i=1;i<n;i++){
        if((a[i-1]+arr[i])<0){a[i]=0;}
        else{a[i]=a[i-1]+arr[i];
    m=max(m,a[i]);}    
    }
    return m;}

int main(){
    int n;
     cout<<"enter the size :";
     cin>>n;

    vector<int> arr;
    for(int i=0;i<n;i++){int e;
    cout<<"enter the element :";
    cin>>e;
    arr.push_back(e);
    }
    cout<<ma(arr);
    return 0;
}