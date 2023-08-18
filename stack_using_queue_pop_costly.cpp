#include<iostream>
#include<vector>
#include<math.h>
#include<string>
#include<queue>
using namespace std;
class s{int n;queue<int> q1;queue<int> q2;
public:
s(){n=0;}
void push(int e){
    q1.push(e);n++;
    
}
void pop(){while(q1.size()!=1){q2.push(q1.front());
q1.pop();}
q1.pop();n--;
    queue<int> t=q1;q1=q2;q2=t;}

void top(){

    while(q1.size()!=1){q2.push(q1.front());
q1.pop();}
cout<<q1.front();q2.push(q1.front());
    queue<int> t=q1;q1=q2;q2=t;}

};
int main(){
  s b;  
  cout << "enter number of query :" << endl;
    int q;
    cin >> q;
    while (q--)
    {
        cout << "enter type of query :" << endl;
        int t;
        cin >> t;
        if (t == 1)
        {
            cout << "enter element :";
            int e;
            cin >> e;
            b.push(e);
        }
        else if (t == 2)
        {
            b.pop();
        }
        else
        {
            b.top();
        }
    }
    return 0;
}