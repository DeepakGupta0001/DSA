#include <iostream>
#include<vector>

using namespace std;

vector<int> reverseArray(vector<int> a) {
    int n=a.size();
    vector<int>ans(n);
    int m=n/2;
    for(int i=0;i<m;i++){

        ans[i]=a[n-1-i];
        ans[n-1-i]=a[i];
    }
    if(n%2==1){
        ans[m]=a[m];
    }
    return ans;

}


int main()
{
    int n;
    cout<<"enter the size of array : ";
    cin>>n;
    cout<<"enter the elemtent : ";
    vector<int> a(n);
    for(auto &b : a){
        cin>>b;
    }
    vector<int> res(n);
    res=reverseArray(a);
    for(auto &b : res)
        cout<<b;

    return 0;
}
