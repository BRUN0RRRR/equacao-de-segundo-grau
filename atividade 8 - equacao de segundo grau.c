#include<stdio.h>
#include<tgmath.h>

void main(){
 float a,b,c,delta,x1,x2;

printf("Entre com o valor do A: ");
scanf("%f",&a);
printf("Entre com o valor do B: ");
scanf("%f",&b);
printf("Entre com o valor do C: ");
scanf("%f",&c);


delta = b*b-4*a*c;
if(delta >=0)
{
x1=(-b+sqrt(delta))/2*a;
x2=(-b-sqrt(delta))/2*a;
printf("o valor de x1 e: %.2f", x1);
printf("\no valor de x2 e: %.2f", x2);

}else{
printf("\nNao exite raiz quadrada!!");
}
}

