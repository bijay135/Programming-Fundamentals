/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet NO : 24
Program :WAP to display 2X2 array
Date: January 30 , 2017
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    int m[2][2]={{1,2},{2,3}};
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("\t%d",m[i][j]);
        }
        printf("\n");
    }
    getch();
    return 0;
}
