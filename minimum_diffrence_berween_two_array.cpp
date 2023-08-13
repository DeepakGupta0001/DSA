#include<iostream>
#include<vector>
#include<math.h>
#include<string>
#include<algorithm>

using namespace std;

pair<int,int> ma(vector<int> a,vector<int> b){
    //Complete this method
    int n1 = a.size();
    int n2 = b.size();
    
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    
    pair<int,int> result;
    int ans = 2000;
    
    int i = 0;
    int j = 0;
    
    while(i < n1 && j < n2)
    {
        int minDiff = abs(a[i] - b[j]);
        
        if(minDiff < ans)
        {
            ans = minDiff;
            result = make_pair(a[i],b[j]);
        }
        if(a[i] <= b[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    
    return result;
}

int main(){ int n;
     cout<<"enter the size :";
     cin>>n;

    vector<int> arr;
    for(int i=0;i<n;i++){int e;
    cout<<"enter the element :";
    cin>>e;
    arr.push_back(e);
    }
     int n1;
     cout<<"enter the size2 :";
     cin>>n1;

    vector<int> arr1;
    for(int i=0;i<n1;i++){int e;
    cout<<"enter the element2 :";
    cin>>e;
    arr1.push_back(e);
   
    }
     pair<int,int> k=ma(arr,arr1);
    cout<<k.first<<" "<<k.second;
   
    return 0;
}