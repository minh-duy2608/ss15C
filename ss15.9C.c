#include<stdio.h>
#include<string.h>

int main() {
    char str[100] = "xin chao tat ca moi nguoi"; 
    char dlt;  
    int i, j = 0;
    printf("Chuoi ban dau: %s\n", str);
    printf("Nhap vao mot ky tu muon xoa: ");
    scanf("%c", &dlt); 
    int size = strlen(str);
    for(i = 0; i < size; i++){
        if(str[i] != dlt){  
            str[j++] = str[i];  
        }
    }
    str[j] = '\0';  
    printf("Chuoi sau khi xoa ky tu '%c': %s\n", dlt, str);

    return 0;
}
