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
?
  System.in();
*/ 

main(){
       
       int i ;
       printf("亲，请你输入一个你认为最帅的数字：\n"); 
       scanf("%d",&i);
       printf("您输入的数字是：%d\n",i); 
       
       //输入 
       char cArray[] = {'H','E','L','L','O'}; 
       //在C语言中没有String 类型，但是可以用char数组来表示 
       int j;
       for( j=0;j<5;j++){
           
           printf("cArray[%d]==%c\n",j,cArray[j]);    
                
       }
       
       printf("cArray==%s\n",cArray); 
       
       system("pause");
}
       
       
       
       
       
       
       
       
       
       
       
        
