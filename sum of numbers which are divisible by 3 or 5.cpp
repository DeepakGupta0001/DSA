#include <iostream>

using namespace std;

int main()
{  cout<<"enter the number : ";
    int n;
    cin>>n;

    long N3 = (n-1)/3;
    long N5 = (n-1)/5;
    long N15 = (n-1)/15;

    long long sum3 = 3*((N3*(N3+1))/2);
    long long sum5 = 5*((N5*(N5+1))/2);
    long long sum15 = 15*((N15*(N15+1))/2);
    cout<<sum3+sum5-sum15<<endl;
    return 0;
}
