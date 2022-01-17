#include <stdio.h>

int main()
{ int a,b,c;
  printf("Enter three numbers to find the largest:\n");
  scanf("%d%d%d",&a,&b,&c);
  if(a>b&&a>c)
  printf("%d is the largest",a);
  else if(b>c)
  printf("%d is the largest",b);
  else
  printf("%d is the largest",c);
  return 0;
}

