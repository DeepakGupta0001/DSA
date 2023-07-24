#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int root;
struct Q
{
    int l;
    int r;
    int idx;
};

bool compare(Q q1, Q q2)
{
    if (q1.l / root == q2.l / root)
    {
        return q1.r > q2.r;
    }
    return q1.l / root < q2.l / root;
}

int main()
{
    int n;
    cout << "enter the number of element  : ";
    cin >> n;
    vector<int> a(n);
    root = sqrtl(n);
    cout << "enter the element : ";
    for (auto &b : a)
    {
        cin >> b;
    }
    
    int k;
    cout << "enter the number of queries  : ";
    cin >> k;
    Q q[k];
    int m, s;
    cout << "enter the queries : ";
    for (int i = 0; i < k; i++)
    {
        cin >> m >> s;
        q[i].l = m;
        q[i].r = s;
        q[i].idx = i;
    }

    
    sort(q, q + (k - 1), compare);
   
    vector<int> ans(k);
    int curr_ans = 0;
    int curr_l = 0, curr_r = -1, r, l;
    for (int i = 0; i < k; i++)
    {
        l = q[i].l;
        r = q[i].r;
        l--, r--;
        while (curr_l < l)
        {
            curr_ans -= a[curr_l];
            curr_l++;
        }
        while (curr_r < r)
        {
            curr_r++;
            curr_ans += a[curr_r];
        }
        while (curr_l > l)
        {
            curr_l--;
            curr_ans += a[curr_l];
        }
        while (curr_r > r)
        {

            curr_ans -= a[curr_r];
            curr_r--;
        }
        ans[q[i].idx] = curr_ans;
    }
    cout<<"Ans is";
    for (auto &b : ans)
    {
        cout << b<<endl;
    }
    return 0;
}
