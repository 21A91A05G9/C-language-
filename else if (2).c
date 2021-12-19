#include<stdio.h>

void main()
{
float a;
printf("please enter the range\n");
scanf("%f",&a);
if (a==500)
printf("you will got the below item:\nchicken briyani\n");
else if(a>400&&a<=500)
printf("you will got the below item:\nmutton biryani\n");
else if(a>300&&a<=400)
printf("you will got the below item:\nprawns biryani\n");
else if(a>200&&a<=300)
printf("you will got the below item:\nfish biryani\n");
else if(a>100&&a<=200)
printf("you will got the below item:\nplain biryani\n");
else if(a>50&&a<=100)
printf("you will got the below item:\nrice");
else
printf("minimum you have to pay RS:50 sir/Madam then you will get ");
printf("extra free items are:\n");
printf("1×water bottle\n2×ice creams\n");
printf("thank you");
}
