#include <iostream>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template <class T>
using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
int main()
{
    cout<<"enter number of query : ";
    int q;
    cin >> q;
    oset<int> s;
    while (q--)
    {
        cout<<"enter type of query :";
        int c;
        cin >> c;
        if (c == 1)
        {
            int t;
            cout<<"enter the element : ";
            cin >> t;
            s.insert(t);
        }
        else if (c == 2)
        {
            cout<<"enter the index of number :";
            int t;
            cin >> t;
            cout << *s.find_by_order(t);
        }
        else
        {
            int t;
            cout<<"enter the number :";
            cin >> t;

            cout << s.order_of_key(t);
        }
    }
}