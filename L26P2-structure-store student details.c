/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet NO : 26
Program :WAP to store student details
Date: Feburary 1 , 2017
*/
#include<stdio.h>
#include<conio.h>
struct student{
                int id;
                char batch[5];
                float percentage;
                }s1,s2;
int main()
{
    printf("Enter student 1 id , batch and percentage:\n");
    scanf("%d %s %f",&s1.id,&s1.batch,&s1.percentage);
    printf("\n");
    printf("Enter student 2 id , batch and percentage:\n");
    scanf("id=%d batch=%s percentage=%f",&s2.id,&s2.batch,&s2.percentage);
    printf("\n\n");
    printf("Student 1:\n");
    printf("%d %s %f",s1.id,s1.batch,s1.percentage);
    printf("\n\n");
    printf("Student 2:\n");
    printf("id=%d batch=%s percentage=%f",s2.id,s2.batch,s2.percentage);
    getch();
    return 0;
}



