// For a given number and position; we need to update the position by either 0 or 1, based on the circumstances.
// Update Bit= Clear Bit + Set Bit
#include<iostream>
using namespace std;
int updatebit(int n,int position,int value)
{
    int mask=~(1<<position);
    n=n&mask;
    return (n|(value<<position));
}
int main()
{
    int n;
    cin>>n;
    int position;
    cin>>position;
    int value;
    cin>>value;
    cout<<updatebit(n,position,value)<<endl;
    return 0;
}