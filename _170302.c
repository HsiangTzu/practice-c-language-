#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i,c=0,n,m,ne;
  scanf("%d", &c);  //�`�@��J������ 
  for(i=0;i<c;i++) {
      scanf("%d %d", &n, &m);   //�s�ο��M�F�誺���� 
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
