#include<stdio.h>
#include<stdlib.h>
#define MAX 30

void nhapmang(int arr[][MAX],int &dong,int &cot,FILE *nhap){
    fscanf(nhap,"%d%d",&dong,&cot);
    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            fscanf(nhap,"%d",&arr[i][j]);
        }
    }
}
void xuatmang(int arr[][MAX],int dong,int cot,FILE *xuat){
    fprintf(xuat,"%s%5d*%d\n\n","Xuat Mang Hai Chieu : ",dong,cot);
    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            fprintf(xuat,"%d\t",arr[i][j]);
        } 
        fputs("\n",xuat);//ghi duoc nguyen cau
    } 
}

int main(){
    FILE *nhap;
    FILE *xuat;
    if ((nhap = fopen("nhapmang2c.txt","r")) == NULL)
    {
        printf("loi ! ");
        exit(1);
    }
    if ((xuat = fopen("xuatmang2c.txt","w")) == NULL)
    {
        printf("loi ! ");
        exit(1);
    }
    int arr[MAX][MAX];
    int dong,cot;
    nhapmang(arr,dong,cot,nhap);
    xuatmang(arr,dong,cot,xuat);
    fclose(nhap);
    fclose(xuat);
    
}
