#include<stdio.h>
#include<stdlib.h>

/**
 �༶ָ�� 
 ָ��ָ������ڴ��ַ
 ��ַ����ָ�� 
*/

main(){
  
  //����һ��int���͵ı���i,���Ҹ�ֵΪ100�� 
  int i = 100;  
  //����һ��int���͵�һ��ָ�����address1,���Ұ�i�ĵ�ַ��ֵ���� 
  int* address1 = &i;
  //����һ��int���͵Ķ���ָ����� address2�����Ұ� address1��Ӧ�ĵ�ַ��ֵ���� 
  int** address2 = &address1;
  //��������ָ�� 
  int*** address3 =  &address2;
  //�����ļ�ָ�� 
 // int**** address4 =  &address3;
  
  //�༶ָ��ȡֵ ****address4�õ���ֵ��100
  printf("***address3==%d\n",***address3); 
  //*address4
  ***address3 = 2000;
  printf("***address3==%d\n",***address3); 
       
  system("pause");      
} 
