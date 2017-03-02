#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i,c=0,n,m,ne;
  scanf("%d", &c);  //總共輸入的次數 
  for(i=0;i<c;i++) {
      scanf("%d %d", &n, &m);   //零用錢和東西的價格 
      if(n<m) {
          ne=m-n;
          printf("N%d\n", ne);
      }
      else {
          printf("Y\n");
      }
  }
  system("PAUSE");	
  return 0;
}
