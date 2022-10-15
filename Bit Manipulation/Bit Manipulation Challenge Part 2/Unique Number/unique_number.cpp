// Here xor operator is used. For reference, see the truth table of XOR operator.
#include<iostream>
using namespace std;
int unique(int n,int array[]);
int unique(int n,int array[])
{
    int xorsum=0;
    for(int i=0;i<n;i++)
    {
        xorsum=xorsum^array[i];
    }
    return xorsum;
}
int main()
{
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    cout<<unique(n,array)<<endl;
    return 0;
}