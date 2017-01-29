/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet NO : 23
Program :WAP display size of elements of an array
Date: January 29 , 2017
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,array[]={1,5,10,5,4,15},size;

    size = sizeof(array)/sizeof(int);
    printf("size of array is %d",size);
    getch();
    return 0;
}
