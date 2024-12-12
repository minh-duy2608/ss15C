#include<stdio.h>
#include<string.h>
int main(){
	char str[100]="abcd12!*$3#4";
	int letterCount=0,numberCount=0,specialCount=0;
	int size=strlen(str);
	for(int i=0;i<size;i++){
	
		if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z'){
			letterCount++;
		}else if(str[i]>='0' && str[i]<='9'){
			numberCount++;
		}else{
			specialCount++;
		}
     }
     printf("so ki tu la chu trong chuoi la:%d \n",letterCount);
     printf("so ki tu la so trong chuoi la:%d \n",numberCount);
     printf("so ki tu dac biet trong chuoi la:%d \n",specialCount);

	return 0;
}

