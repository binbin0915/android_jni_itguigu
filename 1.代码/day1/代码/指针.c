#include<stdio.h>
#include<stdlib.h>

/**
 指针就是内存地址
 内地地址就是指针 

*/
main(){
   
   //定义一个int类型的变量i,并且赋值为10； 
   int i = 10;
   //定义一个int类型的一级指针变量p 
   int* p; 
   //把i对应的地址赋值给p变量    
   p = &i; 
   
   //指针取值*p :把p变量对应的地址的值取出来 
   printf("*p===%d\n",*p); 
   *p = 100;//赋值 
   printf("*p===%d\n",*p); 
       
  system("pause");     
}     
