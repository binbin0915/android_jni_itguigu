#include<stdio.h>
#include<stdlib.h>

/**
 ¶¯Ì¬´´½¨Êı×é 
 Êä³öº¯Êı printf(); 
 ÊäÈëº¯Êı£ºscanf("Õ¼Î»·û"£¬ÄÚ´æµØÖ·); 
 realloc()ÖØĞÂ·ÖÅäÄÚ´æ 
*/


main(){
      
// ¶¯Ì¬Êı×éµÄ´´½¨ 
printf("ÇëÊäÈëÄúÒª´´½¨Êı×éµÄ³¤¶È:\n");
//1¡¢ÈÃÓÃ»§ÊäÈëÒ»¸ö³¤¶È
int length;
scanf("%d",&length);
printf("ÄúÊäÈëÊı×éµÄ³¤¶ÈÎª:%d\n",length);
//2¡¢¸ù¾İ³¤¶È£¬·ÖÅäÄÚ´æ¿Õ¼ä
int* iArray = malloc(length*4);
//3¡¢ÈÃÓÃ»§°ÑÊı×éÖĞµÄÔªËØÒÀ´ÎµÄ¸³Öµ£»
int i;
for(i=0;i<length;i++){
   printf("ÇëÊäÈëiArray[%d]µÄÖµ£º",i);   
   scanf("%d",iArray+i);                
}
//4¡¢½ÓÊÕÓÃ»§ÊäÈëÀ©Õ¹Êı×é³¤¶È
int suppLength;
printf("ÇëÊäÈëÄúÒªÀ©Õ¹Êı×éµÄ³¤¶È:\n");
scanf("%d",&suppLength); 
printf("ÄúÒªÀ©Õ¹Êı×éµÄ³¤¶È:%d\n",suppLength);
//5¡¢¸ù¾İÀ©Õ¹µÄ³¤¶ÈÖØĞÂ·ÖÅä¿Õ¼ä 
//realloc
iArray = realloc(iArray,(length+suppLength)*4);
//6¡¢°ÑÀ©Õ¹³¤¶ÈµÄÔªËØÈÃÓÃ»§¸³Öµ£»
for(i=length;i<length+suppLength;i++){
   printf("ÇëÊäÈëiArray[%d]µÄÖµ£º",i);   
   scanf("%d",iArray+i);                
}
//7¡¢Êä³öÊı×é 
for(i=0;i<length+suppLength;i++){
   printf("iArray[%d]==%d\n",i,*(iArray+i));   
                
}
     system("pause");   
}       
