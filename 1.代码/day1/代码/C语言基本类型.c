#include<stdio.h>
#include<stdlib.h>

/**
C���Ի������� 
char, int, float, double, long,short, signed, unsigned, void
�������͵ĳ��ȣ�sizeof("����")����int���͵ĳ���
ռλ����%d 
printf("����");
java�����������C���Ե�һЩ����
1.Java��char���͵ĳ���Ϊ2���ֽڣ�C�����еĳ���Ϊ1���ֽ�
2.Java��long���͵ĳ���Ϊ8���ֽڣ�C�����еĳ���Ϊ4���ֽ�
  C99��׼�涨��long���͵Ĺ涨����С�����Ρ�
3.C������û��byte
4.C������ boolean���ͣ�0��ʾflase,�����ʾtrue 
 signed : �з��ţ�-128~127 = -2^7~ 2^7-1 
 unsigned���޷��� 0~255 = 0~2^8-1 
 void: �����ͣ������������� 
*/

 main()
{
  
 
   printf("int���͵ĳ���Ϊ��%d\n",sizeof(int)); 
   printf("char���͵ĳ���Ϊ��%d\n",sizeof(char)); 
   printf("float���͵ĳ���Ϊ��%d\n",sizeof(float)); 
   printf("long���͵ĳ���Ϊ��%d\n",sizeof(long));
   printf("short���͵ĳ���Ϊ��%d\n",sizeof(short));    
   
   if(-1){
        printf("true\n");       
   }else{
         printf("flase\n");     
   }         
   
  system("pause"); 
 
}
       
       
       

