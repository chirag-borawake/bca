/*Program to check whether given matrix is Symmetric or Not.
  and check whether given matrix is an Identity Matrix or Not.*/ 
#include<stdio.h>
#include<conio.h>
#define FALSE 0
#define TRUE 1
void main()
{
	int i,j,m,n,select,matrix[9][9],matrix_Identity[9][9],matrix_Symmetric[9][9],transpose_matrix[9][9],isSymmetric=1,isIdentity=1;
	clrscr();
	printf("\n Select your option form following.");
	printf("\n 1:To check whether given matrix is Symmetric or Not.");
	printf("\n 2:To check whether given matrix is an Identity Matrix or Not.");
	printf("\n Enter selection 1 or 2:");
	scanf("%d",&select);
	switch(select)
	{
		case 1:
			printf("\n Enter matrix.\n Enter value for m:");
			scanf("%d",&m);
			printf("\n Enter value for n:");
			scanf("%d",&n);
			for(i=0;i<m;i++)
			{
				for(j=0;j<n;j++)
				{
					printf("\n Enter value at R(%d%d)location:",i+1,j+1);
					scanf("%d",&matrix[i][j]);
				}
			}
			printf("\n Given matrix is:\n\n");
			for(i=0;i<m;i++)
			{
				for(j=0;j<n;j++)
				{
					printf("%5d",matrix[i][j]);
				}
				printf("\n\n");
			}
			for(i=0;i<m;i++)
			{
				for(j=0;j<n;j++)
				{
					transpose_matrix[j][i]=matrix[i][j];
				}
			}
			for(i=0;i<m;i++)
			{
				for(j=0;j<n;j++)
				{
					if(transpose_matrix[i][j]!=matrix[i][j])
					{
						isSymmetric=FALSE;
						break;
					}
				}
			}
			if(isSymmetric)
			{
				printf("\n Given matrix is Symmetric.");
			}
			else
			{
				printf("\n Given matrix is not Symmetric.");
			}
			break;
		case 2:
			printf("\n Enter matrix:\n Enter value for m:");
			scanf("%d",&m);
			printf("\n Enter value for n:");
			scanf("%d",&n);
			for(i=0;i<m;i++)
			{
				for(j=0;j<n;j++)
				{
					printf("\n Enter value at R(%d%d) location:",i+1,j+1);
					scanf("%d",&matrix[i][j]);
				}
			}
			printf("\n Given matrix is:\n\n");
			for(i=0;i<m;i++)
			{
				for(j=0;j<n;j++)
				{
					printf("%5d",matrix[i][j]);
				}
				printf("\n\n");
			}
			for(i=0;i<m;i++)
			{
				for(j=0;j<n;j++)
				{
					if((i==j) && (matrix[i][j]!=1))
					{
						isIdentity = FALSE;
						break;
					}
					else if((i!=j) && ( matrix[i][j]!=0))
					{
						isIdentity = FALSE;
						break;
					}
				}	
			}	
			if(isIdentity)
			{
				printf("\n Enter matrix is identity matrix.");
			}
			else
			{
				printf("\n Enter matrix is not identity matrix.");
			}
			break;
			default:
			printf("\n We exit here.");
	}
	getch();
}	
/*
Out put:-

 Select your option form following.                                             
 1:To check whether given matrix is Symmetric or Not.                           
 2:To check whether given matrix is an Identity Matrix or Not.                  
 Enter selection 1 or 2:1                                                       
                                                                                
 Enter matrix.                                                                  
 Enter value for m:2                                                            
                                                                                
 Enter value for n:2                                                            

 Enter value at R(11)location:1                                                 
                                                                                
 Enter value at R(12)location:2                                                 
                                                                                
 Enter value at R(21)location:2

 Enter value at R(22)location:1

 Given matrix is:

    1    2

    2    1


 Given matrix is Symmetric.

 Second out put:-

 Select your option form following.                                             
 1:To check whether given matrix is Symmetric or Not.                           
 2:To check whether given matrix is an Identity Matrix or Not.                  
 Enter selection 1 or 2:2                                                       
                                                                                
 Enter matrix:                                                                  
 Enter value for m:3                                                            
                                                                                
 Enter value for n:3                                                            
                                                                                
 Enter value at R(11) location:1
                                                                                
 Enter value at R(12) location:0                                                
                                                                                
 Enter value at R(13) location:0                                                
                                                                                
 Enter value at R(21) location:0                                                
                                                                                
 Enter value at R(22) location:1                                                
                                                                                
 Enter value at R(23) location:0                                                
                                                                                
 Enter value at R(31) location:0                                                
                                                                                
 Enter value at R(32) location:0                                                
                                                                                
 Enter value at R(33) location:1                                                
                                                                                
 Given matrix is:                                                               
                                                                                
    1    0    0                                                                 
                                                                                
    0    1    0                                                                 
                                                                                
    0    0    1                                                                 
                                                                                
                                                                                
 Enter matrix is identity matrix.                                               
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                


*/