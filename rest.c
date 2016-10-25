#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int p,sum=0,cnt=0;
  printf("請輸入 餐點價格 或 999 離開：");
  scanf("%d", &p);
  
  while(p!=999) {
     cnt++;
     sum+=p;
     printf("請輸入 餐點價格 或 999 離開：");
     scanf("%d",&p);
  }
  printf("總共是 %d 道餐點， %d\n", cnt, sum);
  system("PAUSE");	
  return 0;
}
