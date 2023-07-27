#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

     void twoSum(vector<int>& nums, int target) {
        
        int n=nums.size();
        vector<int> dp(n);
        for(int i=0;i<n;i++){
            dp[i]=nums[i];
        }
        
        sort(dp.begin(),dp.end());
        int a=0;
        int b=n-1;
        while(a<b){
            if(dp[a]+dp[b]==target){
                break;
            }
            else if(dp[a]+dp[b]<target){
                a++;
            }
            else{
                b--;
            }
        }
        
        int i,e=-1,f=-1;
for( i=0;i<n;i++){
    if(nums[i]==dp[a] || nums[i]==dp[b]){
        e=i;
        break;
    }

}
i=i+1;
for( ;i<n;i++){
    if(nums[i]==dp[a] || nums[i]==dp[b]){
        f=i;
    }}
        cout<<"indices are : "<<e<<","<<f;
    }
    int main(){
        cout<<"enter number of element : ";
        int n;
        cin>>n;
        cout<<"enter the element : ";
        vector<int> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        int t;
        cout<<"ENTER THE TARGET SUM VALUE : ";
        cin>>t;
        twoSum(nums,t);

        return 0;
    }
