#include<stdio.h>
int sum(int, int);
int main()
{
    int a1, a2, res;
    printf("Enter two numbers : ");
    scanf("%d%d", &a1, &a2);
    res = sum(a1, a2);
    printf("Sum of %d and %d is : %d \n", a1, a2, res);
    return 0;
}
int sum(int a1, int a2)
{
    return a1 + a2;
}
