#include<stdio.h>
#include<stdlib.h>

/**
 ��̬�ڴ���� 
*/

void func(int** address){
     
    int i = 100;
     
    int* temp;
   
   //malloc(int)-�ڴ��ַ 
    temp = malloc(sizeof(int)); 
    
    //��i��Ӧ��ֵ����ֵ�� temp��ַ��Ӧ��ֵ 
    *temp = i;
    //��address ��Ӧ�ĵ�ַ��Ӧ��ֵ�޸ĳ� temp
    *address = temp;
    
    free(temp); 
    
    
    
}
main(){
      
      //����int���͵�һ��ָ����� iPoint
     int* iPoint; 
     
     func(&iPoint); 
     printf("*iPoint===%d\n",*iPoint);
     printf("*iPoint===%d\n",*iPoint);
     printf("*iPoint===%d\n",*iPoint);
       printf("*iPoint===%d\n",*iPoint);
     system("pause");   
}       
