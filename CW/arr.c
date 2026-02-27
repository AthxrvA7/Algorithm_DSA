#include <stdio.h>

int main() {
  
  int n;
  printf("Enter the len of arr[]: ");
  scanf("%d", &n);
  
  int arr[n];
  int sum = 0, avg, count = 0;
  int *ptr = &arr[n];
  
  for (int i=0; i<n; i++) {
    printf("Enter a number for element %d: ", i);
    scanf("%d", &arr[i]);
  }
  
  for (int i=0; i<n; i++) {
    sum += arr[i];
  }
  printf("The sum is %d\n", sum);
  
  avg = sum/n;
  printf("The avg is %d\n", avg);

//   for(int i=0; i<n; i++) {
//     if (arr[i] > ptr[i+1]) { 
//       int temp = arr[i];
//       arr[i] = ptr[i+1];
//       ptr[i+1] = temp;
//     }
//     printf("%d", arr[i]);
//   }
  
  // printf("The duplicates are %d", count);
  
}