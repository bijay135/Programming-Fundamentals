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
    int n,z;
    char k;
    printf("###############Menu Based Programs########################");
    printf("\n#                Choose from the menu                    #");
    printf("\n#       1 odd or even           2 prime or not           #");
    printf("\n#       3 vowel or consonent    4 alphabet or not        #");
    printf("\n#       5 divisible by 5 & 11   6 Exit                   #");
    printf("\n##########################################################");
    printf("\n\nEnter any character:");
    scanf("%d",&n);
    printf("\nChoose number from the menu:");
    scanf("%d",&z);
    switch(z)
    {
		case 1:
		if (n%2==0)
		{
			printf("Number is even");
		}
		else
		printf("Number is odd");
		break;
		
		case 2:
		break;
		
		case 3:
		if(n=='a'||n=='A'||n=='e'||n=='E'||n=='i'||n=='I'||n=='o'||n=='O'||n=='u'||n=='U')
		{
			printf("The given character is an vowel");
		}
		else
		printf("The given character is a consonent");
		break;
		
		case 4:
		k=n;
		if((k>=65&&k<=90) || (k>=97&&k<=122))
		{
			printf("The given input is a alphabet");
		}
		else
			printf("The given input is not an alphabet");
		break;
		 
		case 5:
		if (n%5==0 && n%11==0)
		{
			printf("\nThe number %d is divisible by 5 and 11",n);
		}
		else
			printf("\nThe number is not divisible");
		break;
		
		case 6:
		exit (0);
		break;
		
		default:
		printf("Thank you for visiting");
	}
		return 0;
}
		


