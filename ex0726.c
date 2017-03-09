#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int m=0, sum=0;
  
  while(1) {
      printf("請輸入欲存金額：");
      scanf("%d", &m);
      sum=sum+m;
      if(sum>=44600) {
          printf("歡迎成為果粉！");
          break;
      }
  }
  system("PAUSE");	
  return 0;
}
