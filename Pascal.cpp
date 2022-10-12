
/* C program to print Pascal triangle up to n rows  */

#include <stdio.h>

long long fact(int n);   // Function definition 

int main()
{
    int n, k, rows, i;    //Declare variables
    long long term;

    printf("Enter number of rows : ");  
    scanf("%d", &rows);    //Initialize the rows
    printf("\n");
    for(n=0; n<rows; n++)
    {
        for(i=n; i<=rows; i++)  //Print 3 spaces 
            printf("%3c", ' ');

        for(k=0; k<=n; k++)    //Term for the rows
        {
            term = fact(n) / (fact(k) * fact(n-k));   //Function Call

            printf("%6lld", term);     //Print the terms
        }

        printf("\n");
    }

    return 0;
}

/*  Function to calculate factorial  */
long long fact(int n)      //Function Definition
{
    long long factorial = 1ll;
    while(n>=1)
    {
        factorial *= n;
        n--;
    }

    return factorial;
}
