// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
  int a[]={1,9,3,10,5,7,2,4,3},c=0,i;
  int len= sizeof(a)/sizeof(a[0]);

  for(i=0;i<len;i++){
      if(a[i] <=3 && a[i]<=7)
      c++;
  }
    printf("%d",c);
   for(i=c;i>=0;i--){
     // if(a[i] >= a[i])
      printf("%d ",a[i]);
  }
    return 0;
}
