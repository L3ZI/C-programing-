#include <stdio.h>

int main(void) {
  int x,j,i,key = 0;
    int a[5];

    for(x = 0;x < 5; x++){
        printf("Enter the element %d : ", x);
        scanf("%d", &a[x]);
    }
    for(j=2; j < 5; j++){
        key = a[j];
        i = j -1;
        while(i>=0 && a[i]>key){
            a[i+1]= a[i];
            i = i-1;
        }
        a[i+1] = key;
    }
    for(x=0; x <5; x++){
        printf("A %d element : %d\n", x,a[x]);
    }
  return 0;
} 