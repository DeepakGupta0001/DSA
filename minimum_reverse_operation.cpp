#include<iostream>
#include<vector>
#include<math.h>
#include<string>
#include<set>
#include<queue>
using namespace std;

vector<int> minReverseOperations(int n, int p, vector<int>& banned, int k) {
     
        vector<bool> isBanned(n, false);
         for (auto &i : banned)
            isBanned[i] = true;

        
        vector<int> ret(n, -1);
         
        ret[p] = 0;

        if (k == 1)  
            return ret;


        
        set<int> odd, even;
        for (int i = 0 ; i < n ; ++i) {
            if (!isBanned[i]) {
                if (i % 2) {
                    odd.insert(i);
                }
                else {
                    even.insert(i);
                }
            }
        }
        
        queue<pair<int,int> > statuses;
        statuses.push(make_pair(p, 0));
        if (p % 2)
            odd.erase(odd.find(p));
        else
            even.erase(even.find(p));

        while (!statuses.empty()) {
            auto tmp = statuses.front();
            statuses.pop();
            
            int i = tmp.first, ops = tmp.second;
    
            int smallest = 2 * max(0, i - k + 1) + k - 1 - i, biggest = 2 * min(n - k, i) + k - 1 - i;

     
            if (smallest % 2) { 

                for (auto it = odd.lower_bound(smallest) ; it != odd.end() && *it <= biggest ;) {
                    statuses.push(make_pair(*it, ops + 1));
                    ret[*it] = ops + 1;
                    odd.erase(it++);
                }

            }
            else { 

                for (auto it = even.lower_bound(smallest) ; it != even.end() && *it <= biggest ;) {
                    statuses.push(make_pair(*it, ops + 1));
                    ret[*it] = ops + 1;
                    even.erase(it++);
                }
            }
            
        }
        
        return ret;
    }

int main(){
    cout<<"enter number of element :";
int n,p,s,k;
cin>>n;
    cout<<"enter position of 1 :";
    cin>>p;
cout<<"enter size of subarray :";
    cin>>k;
    cout<<"enter number of element of banned number :";
    cin>>s;
    vector<int>banned;
    cout<<"enter the element :";
    for(int i=0;i<s;i++){
        int e;
        cin>>e;
        banned.push_back(e);
    }
    vector<int> a1=minReverseOperations(n,p,banned,k);
    for(auto &b : a1){
        cout<<b<<endl;
    }
    return 0;
}