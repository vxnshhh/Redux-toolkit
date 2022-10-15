// For a given number, according to the position number, we need to bring "1" at the given position.
#include<iostream>
using namespace std;
int setbit(int n,int position);
int setbit(int n,int position)
{
    return(n|(1<<position));
}
int main()
{
    int n;
    cin>>n;
    int position;
    cin>>position;
    cout<<setbit(n,position);
    return 0;
}