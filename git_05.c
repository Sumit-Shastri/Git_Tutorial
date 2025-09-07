#include<stdio.h>


int addition(int no1,int no2)
{
    int no3 = no1 + no2;
    printf("Addition is : %d\n",no3);
}


int main()
{
    int a , b;
    printf("Enter value of a : ");
    scanf("%d",&a);
    printf("Enter value of b : ");
    scanf("%d",&b);

    addition(a,b);

    printf("Updated code from update-branch");


    return 0;
}