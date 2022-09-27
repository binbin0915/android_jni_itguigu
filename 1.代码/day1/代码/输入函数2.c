#include<stdio.h>
#include<stdlib.h>

/**

ÊäÈëº¯Êı 
scanf("Õ¼Î»·û"£¬ÄÚµØµØÖ·) 


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
 
  System.in();
*/ 

main(){
       
      
       //ÊäÈë 
        char cArray[5]; 
        printf("ÇëÊäÈëHello£º\n"); 
       //ÔÚCÓïÑÔÖĞÃ»ÓĞString ÀàĞÍ£¬µ«ÊÇ¿ÉÒÔÓÃcharÊı×éÀ´±íÊ¾ 
       scanf("%s",&cArray);
       int j;
       for( j=0;j<5;j++){
           
           printf("cArray[%d]==%c\n",j,cArray[j]);    
                
       }
       
       printf("cArray==%s\n",cArray); 
       
       system("pause");
}
       
       
       
       
       
       
       
       
       
       
       
        
