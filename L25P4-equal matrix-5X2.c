/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet NO : 25
Program :WAP to check equal matrix
Date: January 31 , 2017
*/
#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,count=0;
    int m1[5][2]={{1,2,3,4,5},{2,3,4,5,6}};
    int m2[5][2]={{1,2,3,4,5},{2,3,4,5,6}};
    for(i=0;i<5;i++)
    {
        for(j=0;j<2;j++)
        {
            if(m1[i][j]==m2[i][j])
                count++;
        }
    }
    if(count==10)
        printf("The two matrix are equal");
    else
        printf("The two matrix are not equal");
    getch();
    return 0;
}
