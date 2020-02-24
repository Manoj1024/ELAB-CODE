#include <stdio.h>
int main() {
 int a,b,c,d,e,f;

    scanf("%d %d",&a,&b);
    scanf("%d",&c);
    scanf("%d %d %d",&d,&e,&f);
   
    float u,x,y,z;
    u=((a+b)*50)/200.0;
    x=((c)*20)/50.0;
    y=((d+e+f)*30)/60.0;
    z=u+x+y;
  printf("Result\n");
    printf("Total Percent in examination:%.2f\n",u);
    printf("Total Percent in activities:%.2f\n",y);
    printf("Total Percent in sports:%.2f\n",x);
    printf("Total Percentage:%.2f\n",z);
 
 
 return 0;
}
