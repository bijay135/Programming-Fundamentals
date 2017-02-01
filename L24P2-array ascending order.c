/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet NO : 24
Program :WAP to display array in ascending order
Date: January 30 , 2017
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,temp;
    int a[10]={1,7,3,5,9,4,33,10,54,65};
    for(i=0;i<10;i++)
    {
        for (j=i+1;j<10;j++)
        {
            if (a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }

    }
    printf("The array in ascending order is:n\n");
    for (i=0;i<10;i++)
    {
        printf("%d\t",a[i]);
    }
    getch();
    return 0;
}
