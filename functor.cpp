#include<iostream>
#include<vector>
#include<math.h>
#include<string>
#include<functional>
#include<algorithm>
using namespace std;

int main(){
    int a[5]={1,2,3,4,5};
    cout<<"element are :";
    for(int i=0;i<5;i++){
        cout<<a[i]<<endl;
    }
    sort(a,a+5);
    cout<<"element after sort are :";
    for(int i=0;i<5;i++){
        cout<<a[i]<<endl;
    }
    sort(a,a+5,greater<int>());
    cout<<"element after using functor are :";
    for(int i=0;i<5;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}