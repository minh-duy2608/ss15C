#include<stdio.h>
#include<string.h>
#include<ctype.h>  
int main(){
    char str[100] = "day la loi xin chao";  
    int size = strlen(str);
    for (int i = 0; i < size; i++){
        if (i == 0 || (str[i-1] == ' ')){
            str[i] = toupper(str[i]);
        }
    }
    printf("Chuoi sau khi viet hoa chu cai dau moi tu: %s\n", str);

    return 0;
}
