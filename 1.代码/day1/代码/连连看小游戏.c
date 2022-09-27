#include<stdio.h>
#include<stdlib.h>

/**
 指针就是内存地址
 内地地址就是指针 

*/
main(){
   
   printf("玩游戏倒计时开始了:\n"); 
   
   int i ;
   
   for( i = 100;i > 0 ;i--){
      
     sleep(5000);
     printf("还剩下多少秒:%d\n",i);    
        
   }   
  printf("恭喜大哥，你真厉害！\n"); 
       
  system("pause");     
}     
