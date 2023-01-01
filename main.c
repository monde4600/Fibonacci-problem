int fib(unsigned int n)
{
    int ve = 0;
    if(!n) ;
    else if(n<=2)   ve = 1;
    else
    {
        ve=2;
        int arr[2] = {1,1};
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
    printf("%d",fib(10));

    return 0;
}
