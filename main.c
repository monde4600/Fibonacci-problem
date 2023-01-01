#include <stdio.h>

int fib(unsigned int n)
{
    int ve = 0;
    if(!n) ;
    else
    {
        ve=1;
        int arr[3] = {1,1};
        for(int i=2;i<n;i++)
        {
            arr[i%2] = arr[(i)%2]+arr[(i-1)%2];
            ve = arr[i%2];
        }
    }
    return ve;
}
int main()
{
    printf("%d",fib(3));

    return 0;
}
