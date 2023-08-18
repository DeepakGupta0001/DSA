#include<iostream>
#include<vector>
#include<math.h>
#include<string>
#include<set>

using namespace std;
int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        vector<int> degree(n, 0);
        set<pair<int, int>> road_set;
        
        for (auto& road : roads) {
            degree[road[0]]++;
            degree[road[1]]++;
            road_set.insert({road[0], road[1]});
            road_set.insert({road[1], road[0]});
        }

        int max_rank = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = i+1; j < n; ++j) {
                int rank = degree[i] + degree[j];
                if (road_set.find({i, j}) != road_set.end()) {
                    rank--;
                }
                max_rank = max(max_rank, rank);
            }
        }

        return max_rank;
    }
int main(){int n;
cout<<"enter the number of element :";
cin>>n;
    vector<vector<int>> a(n,vector<int>(2));
    for(int i=0;i<n;i++){for(int j=0;j<2;j++){
        cout<<"enter the element -"<<j<<":";
        int e;
        cin>>e;
        a[i][j]=e;
        
    }
        
    }
    cout<<maximalNetworkRank(n,a);
    
    return 0;
}