#include<iostream>
#include<vector>
#include<math.h>
#include<string>

using namespace std;
#define n 100

class stack{int *arr;
int t;
    public:
    stack(){
        arr=new int[n];
        t=-1;

    }
    void push(int a){
        
             t++;
    arr[t]=a;
        }
void top(){
        
             
    cout<<arr[t];
        }
        void empty(){
        
             if(t==-1){
                cout<<true;
                }
             else{
                cout<<false;
                }
        }
        void pop(){
        
             t--;
    
        }



};

int main(){
    stack st;
      
    cout<<"enter number of query :";
    int q;
    cin>>q;
    while(q--){
cout<<"enter type of query :";
    int t;
    cin>>t;
    if(t==1){
        st.top();
    }
    else if(t==2){
        cout<<"enter number :";
    int a;
    cin>>a;
        st.push(a);
    }
    else if(t==3){
        st.empty();
    }
    else{
        st.pop();
    }


    }
    return 0;
}