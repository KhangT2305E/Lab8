#include<stdio.h>

void swap(int *ptr_a, int *ptr_b);

int main(){
    char choice;
    do
    {
        int a, b;
        printf("Nhap vao so a:");
        scanf("%d", &a);
        printf("Nhap vao so b:");
        scanf("%d", &b);

        printf("Truoc khi trao doi:\n");
        printf("a = %d voi dia chi la %p.\n", a, &a);
        printf("b = %d voi dia chi la %p.", b, &b);

        swap(&a, &b);

        printf("\nSau khi trao doi:\n");
        printf("a = %d voi dia chi la %p.\n", a, &a);
        printf("b = %d voi dia chi la %p.\n", b, &b);

        printf("Ban co muon tiep tuc(Y/N): ");
        scanf(" %c", &choice);
    } while (choice == 'Y' || choice == 'y');
    
    return 0;
}

void swap(int *ptr_a, int *ptr_b){
    int temp;
    temp = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = temp;
}