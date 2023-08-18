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
    while(!q2.empty()){q1.push(q2.front());
q2.pop();}
    queue<int> t=q1;q1=q2;q2=t;
}
void pop(){q2.pop();n--;}
void top(){cout<<q2.front();}
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