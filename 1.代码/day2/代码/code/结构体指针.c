#include<stdio.h>
#include<stdlib.h>

//�ṹ��ָ�� 

//����ṹ
struct student{
    int age;//4���ֽ� 
    float score;//4���ֽ� 
    char sex;   //1���ֽ� 
} ;     
main(){
       //ʹ�ýṹͼ
       struct student stu = {18,98.9,'W'};
       
       //�ṹ��ָ��
       struct student* point = &stu;
       
       struct student** point2 = &point;
       
       //ȡֵ����(*point).age  �ȼ��� point->age  
       printf("(*point).age ==%d\n",(*point).age ); 
       printf("point->age ==%d\n",point->age ); 
       printf("point->score ==%f\n",point->score ); 
       printf("point->sex ==%c\n",point->sex ); 
       //��ֵ����
       point->age = 20; 
       point->score = 100;
       point->sex = 'M';
       printf("point->age ==%d\n",point->age ); 
        printf("point->age ==%d\n",point->age ); 
       printf("point->score ==%f\n",point->score ); 
       printf("point->sex ==%c\n",point->sex );  
       
       //�����ṹ��ָ��ȡֵ (*point).age  �ȼ��� point->age   ����  (**point).age �ȼ��� (*point)->age
        printf("(**point2).age ==%d\n",(**point2).age ); 
        printf("(*point2)->age ==%d\n",(*point2)->age ); 
        //����ָ�븳ֵ
         (**point2).age = 2000;
           printf("(**point2).age ==%d\n",(**point2).age ); 
        printf("(*point2)->age ==%d\n",(*point2)->age ); 
       system("pause"); 
}
