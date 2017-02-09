/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Assignment NO : 3
Program :WAP to read 10 numbers from manually saved data , filter even numbers and save it to another file
Date : Feburary 8, 2017
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *f1,*f2;
    int sum=0,value=1,n=0,e=0;
    f1=fopen("F:\\numbers.txt","r");
    f2=fopen("F:\\even.txt","w");
    while(value==1)
    {
        value=fscanf(f1,"%d",&n);
        if(n%2==0)
        {
            e=n;
            fprintf(f2,"%d ",e);
        }
    }
    printf("The even numbers has been saved to even.txt");
    fclose(f1);
    fclose(f2);
    getch();
    return 0;
}
