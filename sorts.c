#include<stdio.h>
#include</home/bossmool/sorts.h>
int main()
{
int x,y,temp;
printf("enter the elements of x and y\n");
scanf("%d,%d",&x,&y);
printf("before swapping\nx=%d\ny=%d\n",x,y);
temp=x;
x=y;
y=temp;
printf("after swapping\nx=%d\ny=%d\n",x,y);
return 0;
}
