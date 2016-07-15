#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j,k=1,a[100];
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(a[i]==a[j])
{
k++;
}
}
if(k==2)
printf("%d",a[i]);
k=1;
}
getch();
}
