#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,m,j=1,k=0;
int a[100];
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
loop:
for(;j<n && k<n;j++)
{
if(a[k]==a[j])
{
printf("%d ",a[j]);
}
}
k++;
j=k+1;
if(j<n)
goto loop;
getch();
}
