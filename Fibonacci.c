// program to print the fibonacci sequence using for loops
//declare two numbers first =0 and second =1-n=10

#include<stdio.h>    
int main()    
{    
 int n1=0,n2=1,n3,i,number;    
 printf("Enter the number of elements:");    
 scanf("%d",&number);    
 printf("\n%d %d",n1,n2);//printing 0 and 1    
 for(i=2;i<number;++i)//loop starts from 2 because 0 and 1 are already printed    
 {    
  n3=n1+n2;    
  printf(" %d",n3);    
  n1=n2;    
  n2=n3;    
 }  
  return 0;  
 } 





/*
//alt
#include <stdio.h>
void main()
{
    int i,f=0,s=1,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d",f);
        int next=f+s;
        f=s;
        s=next;
    }
}
*/




