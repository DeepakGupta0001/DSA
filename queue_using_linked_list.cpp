#include <iostream>
#include <vector>
#include <math.h>
#include <string>

using namespace std;

class node
{
public:
    int val;
    node *next;

    node(int v)
    {
        val =v;
        next = NULL;
    }
};

class queue
{
    node *h;
    node *t;

public:
    queue()
    {
        t = NULL;
        h = NULL;
    }
    void enqueue(int o)
    {
        node *a1 = new node(o);
        if (h == NULL)
        {

            h = a1;
            t = a1;

            return;
        }

        t->next = a1;
        t = a1;
    }
    void dequeue()
    {
        if (h == NULL)
        {
            cout << "empty" << endl;
            return;
        }
        node *u = h;
        h = h->next;
        delete u;
    }
    void peek()
    {
        if (h == NULL)
        {
            cout << "empty" << endl;
            return;
        }
        cout << h->val << endl;
    }
};

int main()
{
    queue a;
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