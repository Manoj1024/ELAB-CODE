  #include <stdio.h>
int main()
{
  double a;
  double b,c;
  scanf("%lf%lf",&a,&b);
  if(a!=0 && (int)a%5==0 && a<b)
  {
    c=b-(0.5+a);
    printf("%.1lf",c);
  }
  else
    printf("%.1lf",b);

 return 0;
}
