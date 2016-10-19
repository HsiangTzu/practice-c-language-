#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int p,sum=0,cnt=0;
  scanf("%d", &p);
  
  while(p!=999) {
     cnt++;
     sum+=p;
     scanf("%d",&p);
  }
  printf("%d %d\n", cnt, sum);
  system("PAUSE");	
  return 0;
}
