#include<iostream>
#include<vector>
#include<math.h>
#include<string>

using namespace std;
 
        
string breakPalindrome(string palindrome) {

        if(palindrome.size() == 1)
            return "";
        
        vector<vector<int>> count(26);
        int firstNonA = -1;
        
        for(int i = 0; i < palindrome.size(); i++)
        {
            count[palindrome[i] - 'a'].push_back(i);
            
         
            if(firstNonA == -1 && palindrome[i] != 'a')
                firstNonA = i;
        }
        
        
        if(count[0].size() >= palindrome.size() - 1)
            palindrome[count[0].back()] = 'b';
        
        else
            palindrome[firstNonA] = 'a';
        
        return palindrome;
    }
int main(){
     string s;
    cout<<"enter the string :";
    cin>>s;
    cout<<breakPalindrome(s);
    return 0;
}