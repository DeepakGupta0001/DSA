#include<iostream>
#include<vector>
using namespace std;


double helper(int n, int k ,int r,int c,  vector<vector<vector<double> > >&dp){
     if(r<0 || r>n-1 || c<0 || c>n-1){
            return 0;
        }
        if(k==0){
            return 1;
        }
        if(dp[r][c][k]!=-1){
                return dp[r][c][k];
        }
        double ans=0;
        int h[8]={-1,-2,-2,-1,+1,+2,+2,+1};
        int v[8]={-2,-1,+1,+2,+2,+1,-1,-2};
        for(int i=0;i<8;i++){

            ans+=helper(n,k-1,r+h[i],c+v[i],dp);

        }

        dp[r][c][k]=ans/8;
        return dp[r][c][k];


}
double knight(int n,int k,int r,int c){
    vector<vector<vector<double> > >dp(n+1,vector<vector<double> >(n+1,vector<double>(k+1,-1)));
    return helper(n,k,r,c,dp);
}
int main(){
    int n,k,r,c;
    cout<<"enter size of board : ";
    cin>>n;
    cout<<"enter number of moves : ";
    cin>>k;
vector<int> a(2);
cout<<knight(n,k,0,0);
return 0;
}
