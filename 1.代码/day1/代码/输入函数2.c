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
       
      
       //���� 
        char cArray[5]; 
        printf("������Hello��\n"); 
       //��C������û��String ���ͣ����ǿ�����char��������ʾ 
       scanf("%s",&cArray);
       int j;
       for( j=0;j<5;j++){
           
           printf("cArray[%d]==%c\n",j,cArray[j]);    
                
       }
       
       printf("cArray==%s\n",cArray); 
       
       system("pause");
}
       
       
       
       
       
       
       
       
       
       
       
        
