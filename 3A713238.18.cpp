#include<stdio.h> 

#include<string.h> 

int main()

{

    char str[20]; 

    int x,num[256]={0}; 

   

	printf("              ��C�ӼƦr�X�{������               \n");

	printf("-------------------------------------------------\n");    

    printf("��J�@�ӳs���ơG");  

    scanf("%s",str);  

    for(x=0;x<strlen(str);x++) 

        num[(int)str[x]]++; 

    for(x=0;x<256;x++) 

        if(num[x]!=0)

            printf("�r��%c�X�{%d��\n",(char)x,num[x]);

}
