#include<stdio.h>
#include<conio.h>
int a[10][10],n;

void docfile()
{
	FILE *f;
	f=fopen("MA TRAN","rt");
	if( f==NULL)
		prinrf(" Tap tin khong ton tai");
	else
	 {
	 	fscanf(f,"%d",&n);
	 	for(int i=1;i<=n,i++)
	 	for(int j=1;j<=n,j++)
	 	fscanf(f,"%d",&n;);
	 }
}
int ktraduongcheo(int x[100][100],int y,int z)
{
for(int i=1;i<=y;i++)
{
if(x[i][i]!=0)
{
return 0;
}
}
return 1;
}
int kiemtradoixung(int x[100][100],int y,int z)
{
for(int i=1;i<=y;i++)
{
    for(int j=1;j<=z;j++)
    {
    if(x[i][j]!=x[j][i])
    {
    return 0;
    }
    }
}
return 1;
}
int ktrgiatrinhohonbang1(int x[100][100],int y,int z)
{
for(int i=1;i<=y;i++)
{
    for(int j=1;j<=z;j++)
    {
    if(x[i][j]>1)
    {
    return 0;
    }
    }
}
