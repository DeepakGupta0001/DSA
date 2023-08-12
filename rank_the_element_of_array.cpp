#include<iostream>
#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
using namespace std;

bool my(pair<int,int> p1,pair<int,int> p2){
    return p1.first >p2.first;
}
int main(){
 int arr[5]={1,9,8,5,6};
 vector<pair<int,int>> a;
 for(int i=0;i<5;i++){
    a.push_back(make_pair(arr[i],i));
 }   
 sort(a.begin(),a.end(),my);
 for(int i=1;i<6;i++){
arr[a[i-1].second]=i;

 }
 for(int i=0;i<5;i++){
    cout<<arr[i]<<endl;
 }
    return 0;
}