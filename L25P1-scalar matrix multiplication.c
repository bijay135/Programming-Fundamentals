/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet NO : 25
Program :WAP perform scalar matrix multiplication
Date: January 31 , 2017
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n=5;
    int m[2][2]={{2,4},{3,5}};
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            m[i][j]=m[i][j]*5;
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("\t%d\t",m[i][j]);
        }
        printf("\n");
    }
    getch();
    return 0;
}
