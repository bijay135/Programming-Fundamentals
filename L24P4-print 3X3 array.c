/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet NO : 24
Program :WAP to display 3X3 array
Date: January 30 , 2017
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    int m[3][3]={{1,2,5},{2,3,6},{4,6,8}};
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t%d",m[i][j]);
        }
        printf("\n");
    }
    getch();
    return 0;
}

