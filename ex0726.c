#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int m=0, sum=0;
  
  while(1) {
      printf("�п�J���s���B�G");
      scanf("%d", &m);
      sum=sum+m;
      if(sum>=44600) {
          printf("�w�令���G���I");
          break;
      }
  }
  system("PAUSE");	
  return 0;
}
