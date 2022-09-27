#include<stdio.h>
#include<stdlib.h>

/**
 静态内存分配 
*/

void func(int** address){
     //定义int类型的i变量，并且赋值100 
     int i = 100;
     // 把i对应的地址赋值给 iPoint变量 
     *address = &i; 
}
main(){
      
      //定义int类型的一级指针变量 iPoint
     int* iPoint; 
     
     func(&iPoint); 
     printf("*iPoint===%d\n",*iPoint);
     printf("*iPoint===%d\n",*iPoint);
      printf("*iPoint===%d\n",*iPoint);
     system("pause");   
}       
