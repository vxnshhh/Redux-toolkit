#include<iostream>
using namespace std;
int getBit(int n,int position);
int getBit(int n,int position)
{
        return ((n&(1<<position))!=0);
}
void unique(int n,int array[]);
void unique(int n,int array[])
{
    int xorsum=0;
    for(int i=0;i<n;i++)
    {
        xorsum=xorsum^array[i];
    }
    int tempxor=xorsum;
    int getbit=0;
    int position=0;
    while(getbit!=1) //The condition to decide, until when the loop will work.
    {
        getbit=xorsum&1;
        position++;
        xorsum>>1; //to  find further the right most bit of 1.
    }
    int newxor=0;
    for(int i=0;i<n;i++)
    {
        if(getBit(array[i],position-1))
        {
            newxor=newxor^array[i];
        }
    }
    cout<<newxor<<endl;
    cout<<(tempxor^newxor)<<endl;
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
    unique(n,array);
    return 0;
}