#include<stdio.h>
#include<string.h>

int main(){
    char chuoi[80];
    
    printf("\nMoi nhap vao chuoi cua ban: ");
    gets(chuoi);

    int length = strlen(chuoi);
    printf("\nDo dai cua chuoi: %d ky tu", length);
    
    return 0;
}