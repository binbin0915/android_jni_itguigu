#include<stdio.h>
#include<stdlib.h>

/**
 ��̬�ڴ���� 
*/

void func(int** address){
     //����int���͵�i���������Ҹ�ֵ100 
     int i = 100;
     // ��i��Ӧ�ĵ�ַ��ֵ�� iPoint���� 
     *address = &i; 
}
main(){
      
      //����int���͵�һ��ָ����� iPoint
     int* iPoint; 
     
     func(&iPoint); 
     printf("*iPoint===%d\n",*iPoint);
     printf("*iPoint===%d\n",*iPoint);
      printf("*iPoint===%d\n",*iPoint);
     system("pause");   
}       
