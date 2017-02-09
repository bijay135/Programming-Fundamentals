/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet NO : 29
Program :WAP to create and file and assign data to the file.
Date : Feburary 8 , 2017
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *f1;
    int a,b,sum=0;
    printf("Enter two numbers:\n");
    scanf("%d %d",&a,&b);
    sum=a+b;
    f1=fopen("F:\\sum.txt","w");
    fprintf(f1,"The sum is %d\n",sum);
    fclose(f1);
    return 0;
 }
