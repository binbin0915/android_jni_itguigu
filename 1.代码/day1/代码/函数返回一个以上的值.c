#include<stdio.h>
#include<stdlib.h>

/**
 ���ض��ֵ 

*/
void colse(int* a,int* b){
    *a = 0;
    *b = 0; 
      
}
main(){
   
   //һ���ر�GPS��wifi
   //1������ǿ���0�����ǹر� 
   int a = 1;
   int b = 1;
  
   colse(&a,&b);
  
   
   printf("a===%d\n",a); 
   printf("b===%d\n",b); 
   
 
  
   
       
  system("pause");     
}     
