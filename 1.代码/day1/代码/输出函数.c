#include<stdio.h>
#include<stdlib.h>

/**

������� 
printf("��Ҫ���������");


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
 printf("��Ҫ��������ݶ�Ӧ��ռλ��");
 ��C�����У�Ĭ�ϱ���С�������λ 
 Ҫ�뱣����Ӧ��λ��������Ҫ�ڰٷֺź�߼��ϡ�.���֡� 
 
 ʮ���ƣ�12345678
 �����ƣ�101111000110000101001110 
                  110000101001110

 ��ͬ�����ͣ�Ҫ�ò�ͬ��ռλȥ��������򾫶ȶ�ʧ�� 
*/ 

main(){
       
       char c = 'A';
       int i = 12345678;
       long l = 123456789;
       float f = 3.1415;
       double d = 3.1415926535;
       
       printf("c==%c\n",c); 
       printf("i==%d\n",i); 
       printf("l==%ld\n",l); 
       printf("f==%.4f\n",f); 
       printf("d==%.10lf\n",d); 
       
       printf("i==%hd\n",i); 
       //C���Ե���������Ų���д����� 
       char cArray[]   = {'A','B'};
       
       printf("cArray�ڴ��ַ==%#x\n",&cArray); 
       
       char* text = "I love you!";
       
       printf("text����==%s\n",text); 
       
       system("pause");
}
       
       
       
       
       
       
       
       
       
       
       
        
