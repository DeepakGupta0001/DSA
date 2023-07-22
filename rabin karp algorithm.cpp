#include <iostream>
#include<vector>

using namespace std;


int mod=1e9+2;
int p=31;

vector <long long> pow(int o){
    int g=o;
    vector <long long> power(g);
power[0]=1;
for(int i=1;i<o;i++){
    power[i]=(power[i-1]*p)%mod;
}
return power;
}
vector <long long> hashing(vector <long long> a,int g,string z){
    long long sum=0;
    vector <long long> q(g);
    for(int i=0;i<g;i++){
    sum=(sum+(z[i]-'a'+1)*a[i])%mod;
    q[i]=sum;
}
    return q;
}
int main()
{
    int n,m;
    string s,t;
    cout<<"enter the string : ";
    cin>>s;
    n=s.size();
    cout<<"enter the string which is to be found : ";
    cin>>t;
    m=t.size();

    vector <long long> res = pow(n);

    vector <long long> hash1=hashing(res,n,s);
    vector <long long> hash2=hashing(res,m,t);

    int pos=-1;

    for(int i=0;i+m-1<n;i++){
        long long h=((hash1[i+m-1]-hash1[i-1])+mod)%mod;
        if(h==((hash2[m-1]*res[i])%mod)){
            pos=i+1;
            cout<< "found at position number : "<<pos<<endl;
        }
    }
    if (pos==-1)
    cout<<"not found";

    return 0;
}
