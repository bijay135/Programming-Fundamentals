/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet NO : 25
Program :WAP to find determinant of 2x2 matrix
Date: January 31 , 2017
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,d;
    int m[2][2]={{1,2},{2,3}};
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            d=(m[0][0]*m[1][1])-(m[0][1]*m[1][0]);
        }
    }
    printf("The determinant of matrix is %d",d);
    getch();
    return 0;
}
