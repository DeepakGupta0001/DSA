#include<iostream>
#include<vector>
#include<math.h>
#include<string>
#include<set>
using namespace std;
int findKthLargest(vector<int>& nums, int k) {
        multiset<int> m;
        for(int i=0;i<nums.size();i++){
            m.insert(nums[i]);
        }
        int i=0;
        int a;
        for(auto &b : m){
            if(i==nums.size()-k){a=b;}i++;
        }
        return a;
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
    int a;
    cout<<"enter the value of k :";
    cin>>a;
    cout<<findKthLargest(arr,a);
    return 0;
}