#include<stdio.h>


int main(){

 int i,j,m,n;
 float a[10][10], sum=0.0, avg;

 printf("Enter size:\n");
 scanf("%d%d", &m, &n);
 printf("Enter elements:\n");
 for(i=0;i< m;i++){

  for(j=0;j< n;j++){

   printf("Element[%d][%d]=",i,j);

   scanf("%f", &a[i][j]);
  }
 }
 for(i=0;i< m;i++){

  for(j=0;j< n;j++){

   sum = sum + a[i][j];
  }
 }

 avg = sum/(m*n);
 printf("Sum = %f\n", sum);
 printf("Average = %f", avg);

}
