#include<stdio.h>
#include<stdlib.h>

/**
 ����Ľ���
 1.�����ȡֵ
 2.�����ȡ��ַ
 3.������һ���������ڵؿռ�
 4.�������Ԫ�ص��׵�ַ������ĵ�ַ��ͬ 
 4.��������
 
  
*/

main(){
  
  char cArray[] = {'H','E','L','L','O'}; 
  int iArray[] = {1,2,3,4,5}  ;
  //ȡ�����ֵ
  printf("cArray[0]==%c\n",cArray[0]);  
  printf("cArray[1]==%c\n",cArray[1]); 
  
  
  printf("iArray[0]==%d\n",iArray[0]);  
  printf("iArray[1]==%d\n",iArray[1]); 
  
  //ȡ�ڴ��ֵַ 
   printf("cArray��ַ==%#x\n",&cArray); 
   printf("cArray[0]��ַ==%#x\n",&cArray[0]);  
   printf("cArray[1]��ַ==%#x\n",&cArray[1]); 
   printf("cArray[2]��ַ==%#x\n",&cArray[2]); 
   
   printf("cArray��ַ==%#x\n",cArray); 
   printf("cArray+0��ַ==%#x\n",cArray+0);  
   printf("cArray+1��ַ==%#x\n", cArray+1); 
   printf("cArray+2��ַ==%#x\n", cArray+2); 
   
     printf("iArray + 0==%#x\n",iArray+0);
     printf("iArray + 1==%#x\n",iArray+1);
     printf("iArray + 2==%#x\n",iArray+2);  
     printf("iArray + 3==%#x\n",iArray+3);  
   
   //�ڴ���һ���������ڴ�ռ� 
   printf("iArray��ַ==%#x\n",&iArray);  
   printf("iArray[0]��ַ==%#x\n",&iArray[0]);  
   printf("iArray[1]��ַ==%#x\n",&iArray[1]); 
   printf("iArray[2]��ַ==%#x\n",&iArray[2]); 
   printf("iArray[3]��ַ==%#x\n",&iArray[3]); 
   
   //��ָ��ȡֵ
     printf("iArray==%d\n",*iArray);  
     printf("iArray[0]==%d\n",*iArray+0);
     printf("iArray[1]==%d\n",*iArray+1);
     printf("iArray[2]==%d\n",*iArray+2);  
     printf("iArray[3]==%d\n",*iArray+3);  
     
      printf("iArray[0]==%d\n",*(iArray+0));
     printf("iArray[1]==%d\n",*(iArray+1));
     printf("iArray[2]==%d\n",*(iArray+2));  
     printf("iArray[3]==%d\n",*(iArray+3));  
   
   
   
  system("pause");      
} 
