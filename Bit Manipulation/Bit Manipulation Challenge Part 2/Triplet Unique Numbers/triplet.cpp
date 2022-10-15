#include<iostream>
using namespace std;
int setBit(int n,int position);
int setBit(int n,int position)
{
    return (n | (1<<position));
}
int getbit(int n,int position);
int getbit(int n,int position)
{
    return((n&(1<<position))!=0);
}
int unique(int n,int array[]);
int unique(int n,int array[])
{
   int result=0;
    for(int i=0;i<64;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(getbit(array[j],i))
            count++;
        }
        if(count%3!=0)
        {
            result=setBit(result,i); //to set that particular index of array[i] element, the value of 1. This will give unique number.
            // The triplets will be divisible of 3 except unique number.
        }
    }
    return result;
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