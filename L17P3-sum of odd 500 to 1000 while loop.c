/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet NO : 17
Program :WAP to find sum of odd numbers from 500 to 1000
Date : January 12 , 2017
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n=500,sum=0;
    while(n<=1000)
    {
        if(n%2==1)
        {
            sum=sum+n;
        }
        n++;
    }
    printf("The sum of odd numbers from 500 to 1000 is : %d",sum);
    getch();
    return 0;

}
