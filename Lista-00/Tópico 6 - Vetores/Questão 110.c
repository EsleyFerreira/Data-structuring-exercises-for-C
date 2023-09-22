#include <stdio.h>

int main(){
  int A[11] = {1,2,3,4,5,6,7,8,9,10,11},temp;
  for(int i=0; i<11; i++){
    if(A[5]<A[i]){
      temp = A[5];
      A[5]=A[i];
      A[i]=temp;
    }
    if(A[i]>A[i+1]&&i < 9){
      temp = A[i];
      A[i]=A[i+1];
      A[i+1]=temp;
    }
    for(int i=6; i<11; i++){
      if(A[i]<A[i+1]&&i < 10){
        temp = A[i];
        A[i]=A[i+1];
        A[i+1]=temp;
      }
    }
  }

  
  for(int i=0; i<11; i++){
    printf("%d ", A[i]);
  }
  return 0;
 
}
