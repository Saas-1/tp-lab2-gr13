#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(int argc,char* argv[]){
float a,b,c,dis;
if(argc!=4){
printf("Wrong number of arguments");
return 0;
}
a = atof(argv[1]);
if(a==0){
printf("Coefficient a = 0");
return 0;
}
b = atof(argv[2]);
c = atof(argv[3]);
dis = b*b - 4*a*c;
if(dis < 0){
printf("Dis then less 0");
return 0;
}
float x1=(-b+sqrtf(dis))/(2*a);
float x2=(-b-sqrtf(dis))/(2*a);
printf("x1=%f x2=%f",x1,x2);
return 0;


}
