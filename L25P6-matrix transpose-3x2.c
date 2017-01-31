/*
Author : Bijay Shah
Subject : Programming Fundamentals
Roll no :
Lab Sheet NO : 25
Program :WAP to find transpose of 3x2 matrix
Date: January 31 , 2017
*/
int main()
{
    int i,j;
    int m[3][3]={{1,2},{2,3},{7,9}};
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            m[j][i]=m[i][j];
        }
    }
    printf("The Transpose of matrix is:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t%d\t",m[j][i]);
        }
        printf("\n");
    }
    getch();
    return 0;
}

