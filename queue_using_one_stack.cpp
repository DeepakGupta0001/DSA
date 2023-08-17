#include <iostream>
#include <vector>
#include <math.h>
#include <string>
#include <stack>
using namespace std;

class q
{
    stack<int> s1;
   

public:
    void enqueue(int v) { s1.push(v); }
    void dequeue()
    {
        int e=s1.top();s1.pop();
       if(s1.empty()){return;}
        dequeue();
       s1.push(e);
    }
    void peek()
    {
        int e=s1.top();s1.pop();
        if(s1.empty()){cout<<e;return;}
        peek();
       s1.push(e);
    }
};
int main()
{
    q a;
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
            a.enqueue(e);
        }
        else if (t == 2)
        {
            a.dequeue();
        }
        else
        {
            a.peek();
        }
    }
    return 0;
}