#include<stdio.h>
#include<conio.h>
#include<math.h> 
void main()
{
    int n, i, j, min, max, flag=0;
    clrscr();    
    printf("\n Enter two numbers(Intervals) : ");
    scanf("%d%d",&min,&max);
    printf("\n The prime numbers between %d and %d are :",min,max);   
    for(i=min+1;i<max;i++)
    {
        flag=0;
         
        for(j=2;j<=sqrt(i);j++)      //Loop to check whether 'i' (number) is divisible by any number between 2 and sqrt(i)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if (flag==0)
        {
            printf(" %d ",i);
        }
    }
    getch();
}
