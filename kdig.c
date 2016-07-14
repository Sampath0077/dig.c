#include<stdio.h>
#include<conio.h>
int m=0,a[100];
void single(long long int,int);
int main()
{
long long int n;
int k;
clrscr();
scanf("%lld",&n);
scanf("%d",&k);
single(n,k);
getch();
return 0;
}
void single(long long int n,int k)
{
int l,i,j,t;
a[m]=n%10;
m++;
n=n/10;
if(n>0)
{
single(n,k);
}
else
{
for(i=0;i<(m-1);i++)
{
for(j=0;j<(m-i-1);j++)
{
if(a[j]>a[j+1])
{
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
}
}
l=m-k;
for(i=0;i<l;i++)
printf("%d",a[i]);
}
}
