#include<iostream>
#include<vector>
#include<math.h>
#include<string>


using namespace std;

int los(int r, int c, vector<vector<int>>& obstacleGrid,int n){
    if(obstacleGrid[r][c]==1 || c>=n || r>=n){return 0;}
    if(r==n-1 && c==n-1){
        return 1;
    }
    return los(r,c+1,obstacleGrid,n)+los(r+1,c,obstacleGrid,n);
}
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
       int r=0,c=0,k=obstacleGrid.size();
     
       return los(r,c,obstacleGrid,k);
    }
int main(){
    int n=3;
    
    vector < vector < int > > obstacleGrid{{0,0,0},{0,1,0},{0,0,0}};
    

    cout<<uniquePathsWithObstacles(obstacleGrid);
    return 0;
}