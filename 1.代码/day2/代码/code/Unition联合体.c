#include<stdio.h>
#include<stdlib.h>
/*
������ 
 
*/ 
 
//����һ�������壬�ص㣬���е��ֶζ���ʹ��ͬһ���ڴ�ռ䣻 
union Mix {
     long i; //4���ֽ� 
     int k; //4���ֽ� 
     char ii;//1���ֽ� 
};
main() { 
     
       printf("mix:%d\n",sizeof(union Mix)); 
      
       //ʵ�� 
        union Mix m;
      
        m.k = 123;
        m.i = 100;
        printf("m.i=%d\n",m.i);         
        printf("m.k=%d\n",m.k);            
       system("pause");
} 
