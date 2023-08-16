#include<iostream>
#include<vector>
#include<math.h>
#include<string>
#include<deque>
using namespace std;
 vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> d;
        deque<int> q;
    for(int i=0;i<k;i++){
        while(!q.empty() && nums[q.back()]<nums[i]){
            q.pop_back();
        }
        q.push_back(i);
    }
    d.push_back(nums[q.front()]);
    for(int i=k;i<nums.size();i++){if(q.front()==i-k){q.pop_front();}
        while(!q.empty() && nums[q.back()]<nums[i]){
            q.pop_back();
        }
        q.push_back(i);
      d.push_back(nums[q.front()]);}
    return d;
    }
int main(){int n;vector<int> aq;
cout<<"enter the size :";
cin>>n;
for(int i=0;i<n;i++){
    cout<<"enter the element :";
    int e;
    cin>>e;
    aq.push_back(e);
}
int k;cout<<"enter the k :";
cin>>k; 
    vector<int> a2=maxSlidingWindow(aq,k);
    for(auto &b :a2){
        cout<<b<<endl;
    }
    return 0;
}