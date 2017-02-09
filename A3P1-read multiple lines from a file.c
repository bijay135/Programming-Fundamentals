/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Assignment NO : 3
Program :WAP to read multiple lines from a text file
Date : Feburary 8, 2017
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *f1;
    int value=1;
    char data[255];
    f1=fopen("F:\\sum.txt","r");
    printf("The data on the file is:");
    printf("\n\n");
    while(value==1)
    {
        printf("%s ",data);
		value = fscanf(f1,"%s",data);
    }
    fclose(f1);
    getch();
    return 0;
}
