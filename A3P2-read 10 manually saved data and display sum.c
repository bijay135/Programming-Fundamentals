/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Assignment NO : 3
Program :WAP to read 10 numbers from manually saved data and find sum
Date : Feburary 8, 2017
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *f1;
    int sum=0,value=1,n=0;
    f1=fopen("F:\\numbers.txt","r");
    while(value==1)
    {
        sum=sum+n;
        value=fscanf(f1,"%d",&n);
    }
    printf("The sum of numbers from file is : %d",sum);
    fclose(f1);
    getch();
    return 0;
}
