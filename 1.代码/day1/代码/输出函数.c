#include<stdio.h>
#include<stdlib.h>

/**

Êä³öº¯Êı 
printf("ÄãÒªÊä³öµÄÄÚÈİ");


%d  -  int
%ld - long int
%c  - char
%f -  float
%u ¨C ÎŞ·ûºÅÊı
%hd ¨C ¶ÌÕûĞÍ
%lf ¨C double
%x ¨C Ê®Áù½øÖÆÊä³ö int »òÕßlong int »òÕßshort int
%o -  °Ë½øÖÆÊä³ö
%s ¨C ×Ö·û´®
 
 printf("ÄãÒªÊä³öµÄÄÚÈİ¶ÔÓ¦µÄÕ¼Î»·û");
 ÔÚCÓïÑÔÖĞ£¬Ä¬ÈÏ±£ÁôĞ¡ÊıµãºóÁùÎ» 
 ÒªÏë±£Áô¶ÔÓ¦µÄÎ»Êı£¬¾ÍĞèÒªÔÚ°Ù·ÖºÅºó±ß¼ÓÉÏ¡°.Êı×Ö¡± 
 
 Ê®½øÖÆ£º12345678
 ¶ş½øÖÆ£º101111000110000101001110 
                  110000101001110

 ²»Í¬µÄÀàĞÍ£¬ÒªÓÃ²»Í¬µÄÕ¼Î»È¥Êä³ö£¬·ñÔò¾«¶È¶ªÊ§¡£ 
*/ 

main(){
       
       char c = 'A';
       int i = 12345678;
       long l = 123456789;
       float f = 3.1415;
       double d = 3.1415926535;
       
       printf("c==%c\n",c); 
       printf("i==%d\n",i); 
       printf("l==%ld\n",l); 
       printf("f==%.4f\n",f); 
       printf("d==%.10lf\n",d); 
       
       printf("i==%hd\n",i); 
       //CÓïÑÔµÄÊı×éµÄÀ¨ºÅ²»ÄÜĞ´ÔÚ×ó±ß 
       char cArray[]   = {'A','B'};
       
       printf("cArrayÄÚ´æµØÖ·==%#x\n",&cArray); 
       
       char* text = "I love you!";
       
       printf("textÄÚÈİ==%s\n",text); 
       
       system("pause");
}
       
       
       
       
       
       
       
       
       
       
       
        
