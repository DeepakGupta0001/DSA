#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int l=0;
    int h=1000000;
    int ans=-1;
    while(l<=h){
        int mid=(l+h)/2;
        string s;
        cout<<mid<<endl;
        cout<<flush;
        cin>>s;
        if(s=="<"){
            h=mid-1;
        }
        else{
            ans=max(ans,mid);
            l=mid+1;
        }
    }
    cout<<"!"<<ans;
    cout<<flush;
}