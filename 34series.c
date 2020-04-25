/* to print the series which contains only 2 and 3
ip:100
op:3 4 33 34 43 44 
*/

#include<stdio.h>
void series(int);
int main()
{
  int n;
  scanf("%d",&n);
  series(n);
  printf("\n");
 return 0;
  
}
void series(int n)
{
 int i,temp,rem,count=0,digit=0;
 
 for(i=1;i<=n;i++)
 {temp=i;
  count=0;
  digit=0; 
  while(temp)
   {
     rem=temp%10;
     if(rem==3 || rem==4)
        {  count++;
          // printf("%d ",rem);
        }
     digit++;
     temp=temp/10;
     //printf("%d-->%d",digit,count);
    
   }
       //printf("%d-->%d ",digit,count);
     if(digit==count)
       printf("%d ",i);
 }

}
