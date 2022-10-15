// To print the subsets for a given set.
// Get Bit is used here.
#include<iostream>
using namespace std;
void subset(int array[],int n);
void subset(int array[],int n)
{
    for(int i=0;i<(1<<n);i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i & (1<<j))
            {
                cout<<array[j]<<" ";
            }
        }
        cout<<endl;
    }
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
    subset(array,n);
    return 0;
}