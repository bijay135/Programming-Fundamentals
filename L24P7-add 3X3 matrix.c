/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet NO : 24
Program :WAP to add 3X3 array
Date: January 30 , 2017
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    int m1[3][3]={{1,2,5},{2,3,5},{1,3,4}};
    int m2[3][3]={{5,5,5},{2,6,3},{1,5,7}};
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            m1[i][j]=m1[i][j]+m2[i][j];
        }
    }
    printf("\nThe addition of matrix is:\n\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t%d",m1[i][j]);
        }
        printf("\n");
    }
    getch();
    return 0;
}
