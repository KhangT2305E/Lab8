#include<stdlib.h>
#include<stdio.h>

int checkNguyenTo(int number);

int main(){
    
        int size;
        printf("\nNhap do dai mong muon cua mang: ");
        scanf("%d", &size);
        int *array = (int *) malloc(size * sizeof(int));

        printf("\nNhap cac gia tri cho mang:\n");
        for (int i = 0; i < size; i++)
        {
            printf("\nNhap phan tu thu %d cua mang: ", i + 1);
            scanf("%d", &array[i]);
        }

        printf("\nMang vua nhap la: ");
        for (int i = 0; i < size; i++)
        {
            printf("%d; ", array[i]);
        }
        
        printf("\nCac phan tu la so nguyen to cua mang la:\n");
        for (int i = 0; i < size; i++)
        {
            if (checkNguyenTo(array[i]))
            {
                printf("%d; ", array[i]);
            }
            
        }
        
        printf("\n");
        free(array);

    return 0;
}

int checkNguyenTo(int number){
    if (number <= 1)
    {
        return 0;
    }
    for (int i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
        {
            return 0;
        }  
    }
    return 1;
}
