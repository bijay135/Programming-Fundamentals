/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet NO : 21
Program :WAP to find reverse of any number using function
Date : January 22 , 2017
*/
#include<stdio.h>
#include<conio.h>
void reverse(int n);
int main()
{
    int n;
    printf("Enter your number to reverse:\n");
    scanf("%d",&n);
    reverse(n);
    getch();
    return 0;
}
void reverse(int n)
{
    int z,r=0,temp;
    temp=n;
    while(n>0)
    {
        z=n%10;
        r=r*10+z;
        n=n/10;

    }
    printf("The reverse of the number is %d",r);
    if(temp==r)
        printf("\nThe number is a palindrone");

    else
        printf("\nThe number is not a palindrone");
}
