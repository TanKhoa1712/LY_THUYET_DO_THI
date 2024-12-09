#include<stdio.h>
#include<iostream>
#define vc 10000;
using namespace std;
int a[10][10],n,d[10],l[10],truoc[10];
void docfile()
{
	FILE *f;
	f=fopen("D:\\MATRAN.txt","rt");
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

void khoitao(int s)
{
	for (int i=1;i<=n;i++)
	{
		l[i]=vc;
		d[i]=1;
	}
	l[s]=0;
}
void xmang1chieu(int l[],int n)
{
		for (int i=1;i<=n;i++)
	{
		printf("\t%d  ",l[i]);
	}
}
int vitrimin( int b[10],int x)
{
	int min = vc;
	int vitri;
	for (int i=1;i<=n;i++)
	{
		if (b[i]<min&& d[i]==1)
		{
			min=b[i];
			vitri=i;
		}
	}
	d[vitri]=0;
	return vitri;
}

int capnhatke(int vt)
{

	for(int i=1;i<=n;i++)
	{
		if(a[vt][i]!=0&&d[i]==1)
		{
			if(l[i]>l[vt]+a[vt][i])
			{
				l[i]=l[vt]+a[vt][i];
				truoc[i]=vt;
			}
		}
	}
}
void timduongdi(int s,int y)
{
	int tam[n+1];
	int i=2;
	printf("Do dai tu %d den %d la: %d \n", s,y,l[y]);
	tam[1]=y;
	while(truoc[y]!=0)
	{
		tam[i]=truoc[y];
		y=truoc[y];
		i++;
	}
		for (int j=i-1;j>0;j--)
	{
		printf("\t%d  ",tam[j]);
	}
}
int main ()
{
	docfile();
	xuatmang();
	khoitao(1);
	int s,y;
	printf("\n Nhap vao diem xuat phat: \n");	
	scanf("%d",&s);
	int vt=vitrimin(l,s);
	for(int i=1;i<=n;i++)
	{
	xmang1chieu(l,n);
	printf("\n");
	capnhatke(vt);
	vt=vitrimin(l,i);
	}
	printf("\nNhap vao diem ket thuc: ");	
	scanf("%d",&y);
	timduongdi(s,y);
}
