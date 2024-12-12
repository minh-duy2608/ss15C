#include<stdio.h>
#include<string.h>

int main(){
    char str[100] = "helloworld"; 
    int count[256] = {0};
    int size = strlen(str);
    for(int i = 0; i < size; i++){
        count[(int)str[i]]++; 
    }
    printf("Danh sach cac ky tu va so lan xuat hien trong chuoi:\n");
    for(int i = 0; i < 256; i++){
        if(count[i] > 0){ 
            printf("Ky tu '%c' xuat hien %d lan.\n", i, count[i]);
        }
    }

    return 0;
}
