#include<stdio.h>
#include<stdlib.h>

/**

输入函数 
scanf("占位符"，内地地址) 


%d  -  int
%ld - long int
%c  - char
%f -  float
%u – 无符号数
%hd – 短整型
%lf –燿ouble
%x – 十六进制输出爄nt 或者long int 或者short int
%o -  八进制输出
%s – 字符串
�
  System.in();
*/ 

main(){
       
      
       //输入 
        char cArray[5]; 
        printf("请输入Hello：\n"); 
       //在C语言中没有String 类型，但是可以用char数组来表示 
       scanf("%s",&cArray);
       int j;
       for( j=0;j<5;j++){
           
           printf("cArray[%d]==%c\n",j,cArray[j]);    
                
       }
       
       printf("cArray==%s\n",cArray); 
       
       system("pause");
}
       
       
       
       
       
       
       
       
       
       
       
        
