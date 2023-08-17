#include <iostream>
#include <vector>
#include <math.h>
#include <string>
#include <stack>
using namespace std;

class q
{
    stack<int> s1;
    stack<int> s2;

public:
    void enqueue(int v) { s1.push(v); }
    void dequeue()
    {
        if (!s2.empty())
        {
            s2.pop();
            return;
        }
        while (!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        s2.pop();
    }
    void peek()
    {
        if (s2.empty() != 1)
        {
            cout << s2.top();
            return;
        }
        while (s1.empty() != 1)
        {
            s2.push(s1.top());
            s1.pop();
        }
        cout << s2.top();
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