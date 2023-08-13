#include<iostream>
#include<vector>
#include<math.h>
#include<string>

using namespace std;
vector<int>dp;
    bool c(vector<int> &v,int i)
    {
        
        int n = v.size();
        if(i==n-1 || i>n){return false;}
        if (i == v.size())
            return true;
        if (dp[i] != -1)
            return dp[i];

    
            if (c(v,i + 2)){
                if(v[i]==v[i+1]){
                return dp[i] = true;
            }}

        
            if (c(v,i + 3)){
                if((v[i]==v[i+1]) && (v[i+1]==v[i+2])){
                return dp[i] = true;
            }}

            if (c(v,i + 3)){
                if((v[i+1]==(v[i]+1)) && (v[i+2]==(v[i]+2))){
                return dp[i] = true;
            }}

        return dp[i] = false;
    }
    bool validPartition(vector<int> &v)
    {
        int n = v.size();
        dp.resize(n + 1, -1);
        return c(v,0);
    }

int main(){int n;
     cout<<"enter the size :";
     cin>>n;

    vector<int> arr;
    for(int i=0;i<n;i++){int e;
    cout<<"enter the element :";
    cin>>e;
    arr.push_back(e);
    }
    cout<<validPartition(arr);
    
    return 0;
}