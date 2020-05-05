#include<stdio.h>
int main()
{
    int i,j,a,sum=0;
    int arr[10][10];
    printf("enter the size of a");
    scanf("%d",&a);
    printf("enter the elements");
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            scanf("%d",&arr[i][j]);
            }
        }
        
    
    for(i=0;i<a;i++)
    {
        sum=sum+arr[i][i];
    
    }
    
    printf("sum of diagonals is %d",sum);
    return sum;
    }
    


