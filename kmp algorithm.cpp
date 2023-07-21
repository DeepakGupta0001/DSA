#include <iostream>
#include<vector>

using namespace std;

vector <int> prefix(string y){
    int n=y.size();

    vector <int> pri(n,0);
for(int i=1;i<n;i++){
    int j=pri[i-1];
    while(y[j]!=y[i] and j>0){
        j=pri[j-1];
    }
    if(y[i]==y[j]){
        j++;

    }
    pri[i]=j;
}
return pri;
}
int main()
{

    string s;

    cout<<"enter string : ";
    cin>>s;
    int d=s.size();
    string y;
    cout<<"enter string which is to found : ";
    cin>>y;
    int p=y.size();
    vector<int>res=prefix(s);
        int pos=-1;
        int i(0),j(0);
        while(i<d){
            if(s[i]==y[j]){
            j++;i++;

            }
            else{
                if(j!=0)
                j=res[j-1];
               else
                i++;
            }
            if(j==p){
                pos=i-j+1;
                cout<<"found at position : "<<pos;
            }
        }
if(pos==-1)
cout<<"not found";
    return 0;
}
