#include<iostream>
#include<vector>
#include<math.h>
#include<string>

using namespace std;

    bool rep(string s) {
        int n = s.length();
        for (int i = 1; i <= n / 2; ++i) {
            if (n % i == 0) {
                string substring = s.substr(0, i);
                string repeated = "";
                for (int j = 0; j < n / i; ++j) {
                    repeated += substring;
                }
                if (repeated == s) return true;
            }
        }
        return false;
    }

int main(){
    string s;
    cout<<"enter the string :";
    
    
    
    cin>>s;
    cout<<rep(s); 
    return 0;
}