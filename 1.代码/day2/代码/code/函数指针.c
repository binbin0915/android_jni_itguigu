#include<stdio.h>
#include<stdlib.h>

/**
 ����ָ�� 
*/

//����һ������ 
int add(int x,int y)
{
    return x + y;
} 

main(){
     //���庯��ָ��
     int (*android)(int x,int y); 
     //����ָ�븳ֵ
     android = add;
     //ʹ�ú���ָ�� 
     int result = add(99,1);
     printf("result==%d\n",result);

     system("pause");   
}       
