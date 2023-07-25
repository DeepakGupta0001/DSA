#include<iostream>
#include<vector>
#include<vector>
#include<cmath>
using namespace std;
int formingMagicSquare(vector<vector<int>> s) {
 int a=1e7;
 
    int arr[8][3][3]={
    {{8, 1, 6}, {3, 5, 7}, {4, 9, 2}},
    {{6, 1, 8}, {7, 5, 3}, {2, 9, 4}},
    {{4, 9, 2}, {3, 5, 7}, {8, 1, 6}},
    {{2, 9, 4}, {7, 5, 3}, {6, 1, 8}},
    {{8, 3, 4}, {1, 5, 9}, {6, 7, 2}},
    {{4, 3, 8}, {9, 5, 1}, {2, 7, 6}},
    {{6, 7, 2}, {1, 5, 9}, {8, 3, 4}},
    {{2, 7, 6}, {9, 5, 1}, {4, 3, 8}}};
    for(int i=0;i<8;i++){
        int cost=0;
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                cost+=abs(s[j][k]-arr[i][j][k]);
            }
        }
        a=min(a,cost);
    }
return a;
}
int main(){
    vector<vector<int > > sp(3,vector<int >(3,0));
    sp= {{5, 3, 4}, {1, 5, 8}, {6, 4, 2}};
    cout<<formingMagicSquare(sp);
    
}