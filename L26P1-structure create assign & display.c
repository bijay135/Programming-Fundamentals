/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet NO : 26
Program :WAP to create assign & display value of a structure
Date: Feburary 1 , 2017
*/
#include<stdio.h>
#include<conio.h>
struct student{
        int rollno;
        int age;
        float marks;
              };
int main()
{
    struct student s1={5,18,67.66};
    struct student s2={10,19,80.77};
    printf("Student 1:");
    printf("\nrollno=%d  age=%d  marks=%f",s1.rollno,s1.age,s1.marks);
    printf("\n\n");
    printf("Student 2:");
    printf("\nrollno=%d  age=%d   marks=%f",s2.rollno,s2.age,s2.marks);
    getch();
    return 0;
}
