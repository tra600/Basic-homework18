#include<stdio.h> 

#include<string.h> 

int main()

{

    char str[20]; 

    int x,num[256]={0}; 

   

	printf("              算每個數字出現的次數               \n");

	printf("-------------------------------------------------\n");    

    printf("輸入一個連串整數：");  

    scanf("%s",str);  

    for(x=0;x<strlen(str);x++) 

        num[(int)str[x]]++; 

    for(x=0;x<256;x++) 

        if(num[x]!=0)

            printf("字符%c出現%d次\n",(char)x,num[x]);

}
