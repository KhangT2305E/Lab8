#include<stdio.h>

int main(){
    int A[5];
    int *ptr_A = A;
    int B[5];
    int *ptr_B = B;
    int C[5];

    printf("A. ");
    for (int i = 0; i < 5; i++)
    {
        printf("\nNhap phan tu thu %d cua mang A: ", i + 1);
        scanf("%d", ptr_A);
        ptr_A++;
    }
    
    printf("\nB. ");
    for (int i = 0; i < 5; i++)
    {
        printf("\nNhap phan tu thu %d cua mang B: ", i + 1);
        scanf("%d", ptr_B);
        ptr_B++;
    }

    printf("\nMang A vua nhap la:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d; ", A[i]);
    }
    
    printf("\nMang B vua nhap la:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d; ", B[i]);
    }

    printf("\nMang C co cac phan tu la:\n");
    for (int i = 0; i < 5; i++)
    {   
        C[i] = A[i] + B[i];
        printf("%d; ", C[i]);
    }

    return 0;
}