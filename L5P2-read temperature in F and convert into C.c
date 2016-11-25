/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet no : 5
Program : Write a C program to read temperature in fahrenhit and convert into centrigrade
Date: November 23 , 2016
*/
#include<stdio.h>
int main()
{
  float C,F;
  printf("Enter the current temperature in Farhenhit:\n");
  scanf("%f",&F);
  C=0.556*(F-32);
  printf("The temperature in Centtrigrade is : %f",C);
  return 0;
}
