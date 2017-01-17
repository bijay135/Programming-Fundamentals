/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet NO : 19
Program :WAP to make calculator using function
Date : January 15 , 2017
*/
#include<stdio.h>
#include<conio.h>
int sum(int a,int b);
int sub(int a,int b);
int div(int a,int b);
int mul(int a,int b);
int main()
{

    int a,b,c,n;
    printf("\t##################Simple Calculator######################");
    printf("\n\t#\t\tChoose from the menu\t\t\t#");
    printf("\n\t#\t1 Addition \t\t 2 Subtraction\t\t#");
    printf("\n\t#\t3 Multiplication \t 4 Division\t\t#");
    printf("\n\t#                         5 exit                        #");
    printf("\n\t#########################################################");
    printf("\nEnter first number:\n");
    scanf("%d",&a);
    printf("Enter second number:\n");
    scanf("%d",&b);
    c=sum(a,b);
    c=sub(a,b);
    c=mul(a,b);
    c=div(a,b);
    printf("\n\nChoose any Number:");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        c=sum(a,b);
        printf("\nThe sum is %d",c);
        break;
    case 2:
        c=sub(a,b);
        printf("\nThe difference is %d",c);
        break;
    case 3:
        c=mul(a,b);
        printf("\nThe multiplication is %d",c);
        break;
    case 4:
        c=div(a,b);
        printf("\nThe division is %d",c);
        break;
        default:
            printf("\t\t\tThank you for visiting");

    }
     getch();
     return 0;
}
int sum(int a,int b)
{
    int z;
    z=a+b;
    return z;
}
int sub(int a,int b)
{
    int z;
    z=a-b;
    return z;
}
int div(int a,int b)
{
    int z;
    z=a/b;
    return z;
}
int mul(int a,int b)
{
    int z;
    z=a*b;
    return z;
}


