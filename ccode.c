#include <stdio.h>
int main() {
  int arr[] = {90, 80, 90, 70, 90}, i, count = 0;
  for (i = 0; i < 5; i++)
    if (arr[i] == 90)
      count++;
  printf("Count = %d\n", count);
  return 0;
}
