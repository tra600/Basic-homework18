#include<stdio.h> 

#include<string.h> 

int main()

{

    char str[20]; 

    int x,num[256]={0}; 

   

	printf("              衡–计瞷Ω计               \n");

	printf("-------------------------------------------------\n");    

    printf("块硈﹃俱计");  

    scanf("%s",str);  

    for(x=0;x<strlen(str);x++) 

        num[(int)str[x]]++; 

    for(x=0;x<256;x++) 

        if(num[x]!=0)

            printf("才%c瞷%dΩ\n",(char)x,num[x]);

}
