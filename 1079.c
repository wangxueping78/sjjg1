#include<stdio.h>
int main()
{
  int a,b,c,t;
  scanf("%d",&t);
  while(t--)
  {
  scanf("%d%d%d",&a,&b,&c);
  if((b+c)%2==0||(b==9||b==11)&&c==30)
   printf("YES\n");
  else
   printf("NO\n");
}
   return 0;
}
