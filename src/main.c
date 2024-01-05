#include<stdio.h>


int a;
int n=0;
void nhapMang(){
	printf("Nhap mang: ");scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("a[%d]= ",i);scanf("%d",&a[i]);
	}
}
void xuatMang(){
	for(int i=0; i<n;i++){
	printf("Xuat mang %d\t ",a[i]);
}
int main(){
	nhapMang();
	xuatMang();
	return 0;
}