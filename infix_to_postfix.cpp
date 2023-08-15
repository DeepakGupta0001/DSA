#include <iostream>
#include <vector>
#include <math.h>
#include <string>
#include <stack>

using namespace std;

int p(char c)
{
    if (c == '-' || c == '+')
    {
        return 1;
    }
    else if (c == '/' || c == '*')
    {
        return 2;
    }
    else if (c == '^')
    {
        return 3;
    }
    else
    {
        return -1;
    }
}
string pre(string s)
{
    stack<char> st;
    string re;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            re += s[i];
        }
        else if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                re += st.top();
                st.pop();
            }
            if (!st.empty())
            {
                st.pop();
            }
        }
        else
        {
            while (!st.empty() && p(st.top()) > p(s[i]))
            {
                re += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while (!st.empty())
    {
        re += st.top();
        st.pop();
    }

    return re;
}
int main()
{
    string s = "(a-b/c)*(a/k-l)";
    cout << pre(s);

    return 0;
}
