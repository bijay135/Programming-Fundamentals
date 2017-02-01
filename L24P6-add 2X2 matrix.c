/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet NO : 24
Program :WAP to add 2X2 array
Date: January 30 , 2017
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    int m1[2][2]={{1,2},{2,3}};
    int m2[2][2]={{5,5},{2,6}};
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            m1[i][j]=m1[i][j]+m2[i][j];
        }
    }
    printf("\nThe addition of matrix is:\n\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("\t%d",m1[i][j]);
        }
        printf("\n");
    }
    getch();
    return 0;
}
