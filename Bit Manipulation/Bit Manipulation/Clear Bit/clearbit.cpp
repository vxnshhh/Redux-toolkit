// For a given number and position, we need to set "0" as the position of that number.
#include<iostream>
using namespace std;
int clearbit(int n,int position);
int clearbit(int n,int position)
{
    int mask=~(1<<position);
    return (n&mask);
}
int main()
{
    int n;
    cin>>n;
    int position;
    cin>>position;
    cout<<clearbit(n,position)<<endl;
    return 0;
}