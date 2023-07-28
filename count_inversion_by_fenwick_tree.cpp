#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>bit;
int getsum(int idx){
int sum=0;
while(idx>0){
    sum+=bit[idx];
    idx-=idx &(-idx);

}
return sum;
}
void update(int n,int idx,int l){
while(idx<=n){
    bit[idx]+=l;
    idx+=idx &(-idx);}
}
int main(){
    cout<<"enter number of element : ";
    int n;
    cin>>n;
    vector<int>a(n);
    cout<<"enter the element : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> temp=a;
    sort(temp.begin(),temp.end());
    for(int i=0;i<n;i++){
        a[i]=lower_bound(temp.begin(),temp.end(),a[i])-temp.begin()+1;
    }
    int inv=0;
bit=vector<int>(n+1);
for(int i=n-1;i>=0;i--){
inv+=getsum(a[i]-1);
update(n,a[i],1);
}
cout<<"NUMBER OF INVERSION : "<<inv;
}