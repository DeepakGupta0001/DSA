#include <iostream>

using namespace std;
void fizzbuzz(int n){
for(int i=1;i<=n;i++){
    if(!(i%3) && !(i%5)){
        cout<<"FizzBuzz \n";
    }
    else if(!(i%3)){
        cout<<"Fizz \n";
    }

    else if(!(i%5)){
        cout<<"Buzz \n";
    }
    else {
        cout<<i<<"\n";
    }
}
}
int main()
{
    int m;
    cout<<"Enter the number-";
    cin>>m;
    fizzbuzz(m);
    return 0;
}
