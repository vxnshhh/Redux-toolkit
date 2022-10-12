#include <stdio.h>
int main()
{
    int rem,s,n=566;
    while (n!=0)

{
  rem = n%10;
  s= s+rem;
  n=n/10;
}

printf("%d",s);

}
