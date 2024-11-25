#include<stdio.h>
#include<iostream>
#include<stack>
using namespace std;
int a[10][10],n,d[10];
	stack<int> s;
void docfile()
{
	FILE *f;
	f=fopen("D:\MATRAN.txt","rt");
	if(f==NULL)
		printf(" Tap tin khong ton tai");
	else
	 {
	 	fscanf(f,"%d",&n);
	 	for(int i=1;i<=n;i++)
	 	{
		 	for(int j=1;j<=n;j++)
	 		fscanf(f,"%d",&a[i][j]);
	 	}
	 }
	 fclose(f);
}

void kiemtralienke(int v)
{
for(int i =n; i>=1;i--)
{
	if(a[i][v]!=0 && d[i] == 0)
	{
		s.push(i);
	}
}	
}
void xuatmang()
{
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=n;j++)
    {
    printf("%d    ",a[i][j]);
    }printf("\n");
}
}
int main (){
	for (int i=1; i<=10;i++)
	{
		d[i]=0;
	}
	docfile();
	xuatmang();
	int ktra;
	printf(" Nhap vao vi tri can kiem tra: ");
	scanf("%d",&ktra);
	s.push(ktra);
	printf("DFS: ");
for(int i=1;i<=n;i++)
	{
	int tam =s.top();
	if (d[tam]==0)
	{
    cout<< s.top()<<" ";
	d[tam]=1;	
	s.pop(); 
	   kiemtralienke(tam);  
        }
		 else
		 {
            s.pop();  
	
		}
}
}

