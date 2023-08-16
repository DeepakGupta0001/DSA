#include <iostream>
#include <vector>
#include <math.h>
#include <string>

using namespace std;

#define n 100

class queue
{
public:
    int *arr;
    int i, j;
    queue()
    {
        i = -1;
        j = -1;
        arr = new int[n];
    }
    void enqueue(int v)
    {
        if (i == -1)
        {
            i++;
            j++;
            arr[j] = v;
            return;
        }
        j++;
        arr[j] = v;
    }
    void dequeue()
    {
        if (i>j)
        {
            cout << "empty" << endl;
            return;
        }
        i++;
    }
    void peek() { cout << arr[i] << endl; }
};

int main()
{queue a;
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