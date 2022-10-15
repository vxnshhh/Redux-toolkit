#include<iostream>
using namespace std;
int poweroftwo(int n);
int poweroftwo(int n)
{
    return (n && !(n&(n-1)));
}
int main()
{
    int n;
    cin>>n;
    cout<<poweroftwo(n)<<endl;
    return 0;
}