//It will toggle the number for a given position.
#include<iostream>
using namespace std;
int togglebit(int n,int position);
int togglebit(int n,int position)
{
    return(n xor (1<<position));
}
int main()
{
    int n;
    cin>>n;
    int position;
    cin>>position;
    cout<<togglebit(n,position)<<endl;
    return 0;
}