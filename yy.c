#include<stdio.h>
#include<math.h>

int main(void)
{
int a,b[50],k,d=0;
scanf("%d",&a);
for(k=0;k<a;k++)
{
scanf("%d",&b[k]);
}
for(k=0;k<a;k++)
{
d=abs(d-b[k]);
}
printf("%d",d);
return 0;
}
