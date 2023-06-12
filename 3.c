#include<stdio.h>
#include<string.h>

int checkDoiXung(char *str);

int main(){
        char str[81];
        printf("Nhap vao chuoi: ");
        fgets(str, sizeof(str), stdin);

        str[strcspn(str, "\n")] = '\0';

        if (checkDoiXung(str)) 
        {
            printf("Chuoi la chuoi doi xung.\n");
        }else{
            printf("Chuoi khong pha la chuoi doi xung.\n");
        }
    return 0;
}

int checkDoiXung(char *str){
    int len = strlen(str);
    char *start = str;
    char *end = str + len - 1;

    while (start < end)
    {
        if (*start != *end)
        {
            return 0;
        }start++;
        end--;
    }
    return 1;
}