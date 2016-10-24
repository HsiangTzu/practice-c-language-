#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Size 100

void bubbleSort(int *data, int Num);

int main(int argc, char *argv[])
{
  int i, data[Size], tem, pos, Num=10;
  srand((unsigned) time(NULL) + getpid());
  data[0]=100;
  for(i=1;i<Size;++i) {
    data[i]=i;
  }
  
  for(i=0;i<Size;++i) {
     pos=99*rand()/RAND_MAX;
     tem=data[i];
     data[i]=data[pos];
     data[pos]=tem;
  } 
  
  printf("排序前: ");
  for(i=0;i<Num;++i) {
    printf("%d ", data[i]);
  }
  
  bubbleSort(data, Num);
  printf("\n排序後: ");
    for (i=0;i<Num;i++) {
        printf("%d ", data[i]);
    }
  printf("\n");
  system("PAUSE");	
  return 0;
}
void bubbleSort(int *data, int Num) {
   int i, j, temp;
   for(i=0;i<Num;i++) {
      for(j=i;j<Num;j++) {
         if(data[j]<data[i]) {
            temp=data[j];
            data[j]=data[i];
            data[i]=temp;
         }
      }
   }
}
