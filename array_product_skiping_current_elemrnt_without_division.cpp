#include<iostream>
#include<vector>
#include<math.h>
#include<string>

using namespace std;

vector<int> productArray(vector<int> arr){
    
    //Create an output Array
    int n = arr.size();
    vector<int> output(n,1);
    vector<int> left(n,1);
    vector<int> right(n,1);
    
     
        
    
        
        for(int i=1;i<n;i++)
        {
            left[i] = arr[i-1] * left[i-1];
        }
        for(int i=n-2;i>=0;i--)
        {
            right[i] = arr[i+1] * right[i+1];
        }
        for(int i=0;i<n;i++)
        {
            output[i] = left[i] * right[i];
        }
    
    
    
    return output;
}

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
    vector<int> a=productArray(arr);
    for(int i=0;i<n;i++){
    cout<<a[i]<<endl;
    }
    return 0;
}