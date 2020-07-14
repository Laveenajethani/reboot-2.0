#include<stdio.h>
#include<conio.h>
int main()
{
    int num,i=2,temp;
    int check;
    printf("enter a number:");
    scanf("%d",&num);
    temp=num;
    while(i<=temp)
    {
        if(temp%i==0)
        {
            printf("%d ",i);
            temp = temp / i;
            while(temp%i==0)
            {
                printf("%d ",i); 
                temp = temp / i;
                
            }
        }
        i++;
    }
}
