/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Assignment NO : 2
Program :WAP to find size of array
Date : January 26 , 2017
*/
int main()
{
    int n;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    int i,count,array[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the %d element:\n",i+1);
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++)
    {
        count++;
    }
    printf("The size of array is %d",count);
}



