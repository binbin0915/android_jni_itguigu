#include<stdio.h>
#include<stdlib.h>

/**

���뺯�� 
scanf("ռλ��"���ڵص�ַ) 


%d  -  int
%ld - long int
%c  - char
%f -  float
%u �C �޷�����
%hd �C ������
%lf �C�double
%x �C ʮ����������int ����long int ����short int
%o -  �˽������
%s �C �ַ���
�
  System.in();
*/ 

main(){
       
       int i ;
       printf("�ף���������һ������Ϊ��˧�����֣�\n"); 
       scanf("%d",&i);
       printf("������������ǣ�%d\n",i); 
       
       //���� 
       char cArray[] = {'H','E','L','L','O'}; 
       //��C������û��String ���ͣ����ǿ�����char��������ʾ 
       int j;
       for( j=0;j<5;j++){
           
           printf("cArray[%d]==%c\n",j,cArray[j]);    
                
       }
       
       printf("cArray==%s\n",cArray); 
       
       system("pause");
}
       
       
       
       
       
       
       
       
       
       
       
        
