#include<iostream>
#include<vector>
#include<math.h>
#include<string>

using namespace std;
#include<bits/stdc++.h>
using namespace std;
 
bool compare(int a, int b) {
    int first = stoi(to_string(a)+to_string(b));
    int second = stoi(to_string(b)+to_string(a));
    return first>second; 
}
 
string concatenate(vector<int> numbers){
    sort(numbers.begin(), numbers.end(), compare);
    
 
    string response = "";
    for(int num: numbers) response +=to_string(num);
 
    return response;
}
int main(){int n;
cout<<"enter the number of element :";
cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cout<<"enter the element :";
        int e;
        cin>>e;
        a[i]=e;
        
    }
    cout<<concatenate(a);
    return 0;
}