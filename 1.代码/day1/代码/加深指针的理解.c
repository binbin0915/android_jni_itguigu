#include<stdio.h>
#include<stdlib.h>

/**
 指针就是内存地址
 内地地址就是指针 

*/
main(){
   
  
  int i = 100;
  
  int* p = &i;
  
  //第一个实验：如果修改i值，p值有变化吗？
  //printf("修改i值前，p的值是：%#x\n",p); 
  // i = 200;
 // printf("修改i值后，p的值是：%#x\n",p); 
  
  
  //第二个实验： 如果修改p值，i值有变化吗？
  
  //printf("修改p值前，i的值是：%d\n",i); 
  // int j = 200;
  // p = &j;
  //printf("修改p值后，i的值是：%d\n",i); 
  
   //第三个实验：如果修改i值，*p值有变化吗？
  //printf("修改i值前，*p的值是：%d\n",*p); 
  //i = 200;
  //printf("修改i值后，*p的值是：%d\n",*p); 
  
   //第四个实验： 如果修改*p值，i值有变化吗？
  
   printf("修改*p值前，i的值是：%d\n",i); 
  
   *p =  200;
   printf("修改*p值后，i的值是：%d\n",i); 
       
  system("pause");     
}     
