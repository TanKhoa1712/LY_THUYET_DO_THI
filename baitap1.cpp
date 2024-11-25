#include<stdio.h>
#include<iostream>
#include<stack>
using namespace std;
int main (){
	stack<int> s;
	int n;
	printf("nhap so luong phan tu: ");
	scanf("%d",&n);
	for (int i= 1; i<=n;i++)
	{
		int tam;
	printf("nhap phan tu thu %d: ",i);
	scanf("%d",&tam);
	s.push(tam);
	}
	s.pop();
	cout<< s.top()<<" ";
	s.pop();
	s.pop();
	while (!s.empty())
	{
	cout<< s.top()<<" ";	
	s.pop();

	}
}

