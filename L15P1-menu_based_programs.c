/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet NO : 15
Program : Write a menu based C program with various programs
Date : December 28 , 2016
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    char c;
    int n,z;
    printf("\t###############Menu Based Programs########################");
    printf("\n\t#                Choose from the menu                    #");
    printf("\n\t#       1 odd or even           2 prime or not           #");
    printf("\n\t#       3 vowel or consonent    4 alphabet or not        #");
    printf("\n\t#       5 divisible by 5 & 11   6 Exit                   #");
    printf("\n\t##########################################################");
    printf("\n\nEnter any character:");
    scanf("%c",&c);
    printf("\nChoose number from the menu:");
    scanf("%d",&z);
    switch(z)
    {
		case 1:
			n=c;
			printf("\nThe ascii value is %d",n);
			if (n%2==0)
			{	
				printf("\nNumber is even");
			}
			else
			printf("\nNumber is odd");
		break;
		
		case 2:
		break;
		
		case 3:
			if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
			{
				printf("\nThe given character is an vowel");
			}
			else
			printf("\nThe given character is a consonent");
		break;
		
		case 4:
			n=c;
			if((n>=65&&n<=90) || (n>=97&&n<=122))
			{
				printf("\nThe given input is a alphabet");
			}
			else
				printf("\nThe given input is not an alphabet");
		break;
		 
		case 5:
			n=c;
			printf("\nThe ascii value is %d",n);
			if (n%5==0 && n%11==0)
			{
				printf("\nThe number %d is divisible by 5 and 11",n);
			}
			else
				printf("\nThe number is not divisible");
		break;
		
		default:
			printf("\n\t\t\tThank you for visiting");
	}
		return 0;
}
		


