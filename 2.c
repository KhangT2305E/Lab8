#include<stdio.h>

int main(){
    char choice;
    do
    {
        int a[5];
        int *ptr = a;

        printf("Nhap cac phan tu cho mang:\n");
        for (int i = 0; i < 5; i++)
        {
            printf("\nNhap phan tu thu %d cua mang: ", i + 1);
            scanf("%d", ptr);
            ptr++;
        }
        printf("\nMang vua nhap la:\n");
        for (int i = 0; i < 5; i++)
        {
            printf("%d; ", a[i]);
        }
        
        printf("\nBan co muon tiep tuc(Y/N): ");
        scanf(" %c", &choice);
    } while (choice == 'Y' || choice == 'y');
    return 0;
}