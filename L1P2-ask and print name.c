/*
 Author : Bijay Shah
 Subject : Programming Fundamentals
 Roll no :
 Lab Sheet no : 1
 Program : Write a C program to ask and print name
 Date : 14 November , 2016
 */
 #include<stdio.h>
 #include<conio.h>
 void main()
 {
   char name[10];
   printf("what is your name\n");
   scanf("%s",&name);
   printf("name of user is %s",name);
   getch();
 }
