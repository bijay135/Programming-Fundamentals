/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheer NO : 7
Program : Write a C Program to calculate marks
Date : 28 November , 2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
  float a,b,c,d,e,f,g,sum,avr,per;
  printf("Enter your marks of Computer Architecture:\n");
  scanf("%f",&a);
  printf("Enter your marks of Interactive Skills:\n");
  scanf("%f",&b);
  printf("Enter your marks of Algebra:\n");
  scanf("%f",&c);
  printf("Enter your marks of Discrete Mathematics:\n");
  scanf("%f",&d);
  printf("Enter your marks of Software Engineering:\n");
  scanf("%f",&e);
  printf("Enter your marks of Organization Management:\n");
  scanf("%f",&f);
  printf("Enter your marks of Programming Fundamentals:\n");
  scanf("%f",&g);
  sum=a+b+c+d+e+f+g;
  avr=sum/7;
  per=(sum/700)*100;
  printf("Your total marks is : %f\n",sum);
  printf("Your average marks is : %f\n",avr);
  printf("Your percentage is : %f",per);
  getch();
  return 0;
}
