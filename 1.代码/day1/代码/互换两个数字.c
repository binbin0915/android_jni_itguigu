#include<stdio.h>
#include<stdlib.h>

/**
 ���������� 

*/
void sitch(int a,int b){//��ֵ�޷��ı�ֵ 
   int temp = a;
   a = b;
   b = temp; 
   printf("sitch ��a��ַ===%#x\n",&a); 
   printf("sitch ��b��ַ===%#x\n",&b); 
     
}

void sitch2(int* a,int* b){//����ַ���Ըı�ֵ 
   int temp = *a;
   *a = *b;
   *b = temp; 
   printf("sitch ��a��ַ===%#x\n",a); 
   printf("sitch ��b��ַ===%#x\n",b); 
     
}
main(){
   
   int a = 100;
   int b = 200;
   printf("main��a��ַ===%#x\n",&a); 
   printf("main��b��ַ===%#x\n",&b); 
   printf("a===%d\n",a); 
   printf("b===%d\n",b); 
   sitch2(&a,&b);
   printf("a===%d\n",a); 
   printf("b===%d\n",b); 
   
 
  
   
       
  system("pause");     
}     
