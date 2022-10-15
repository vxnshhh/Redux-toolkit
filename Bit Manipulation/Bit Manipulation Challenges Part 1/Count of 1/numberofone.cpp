// To count the number of ones in the given number.
// We do this by following the property of "power of two". The number and the previous number is operated by "&" operator and then unless the number is a power of two, we keep on reducing the number and following the operator. The number of steps taken to reach the power of two, gives the count of "1" in the number input.
#include<iostream>
using namespace std;
int count(int n);
int count(int n)
{
    int count=0;
    while(n)
    {
        n=n&(n-1);
        count++;
    }
}
int main()
{
    int n;
    cin>>n;
    cout<<count(n)<<endl;
    return 0;
}