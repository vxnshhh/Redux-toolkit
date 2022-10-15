// For a given number and position, we need to find the position of that number, that could either be "0" or "1".
#include<iostream>
using namespace std;
int getbit(int n,int position);
int getbit(int n,int position)
{
    return (n&(1<<position)!=0);
}
int main()
{
    int n;
    cin>>n;
    int position;
    cin>>position;
    cout<<getbit(n,position)<<endl;
    return 0;
}