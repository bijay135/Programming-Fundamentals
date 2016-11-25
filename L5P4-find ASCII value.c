/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheer NO : 5
Program : Write a C program to find ASCII value of any character
Date: November 23 , 2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{

  char character;
  int asciiValue;
  printf("Enter your character:\n");
  scanf("%c",&character);
  asciiValue=character;
  printf("The ASCII value of the character %c is : %d",character,asciiValue);
  getch();
  return 0;
}
