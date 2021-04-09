#include <stdio.h>



int findFirstIndex(int arr[], int end, int target){
int index = -1;
int start = 0;
int middle;
while(start <= end){
  middle = start + (end - start)/2;
  if(arr[middle] >= target){
    end = middle -1;
  }
  else{
    start = middle +1;
  }
  if(arr[middle] == target)
    index = middle;
  
} 



return index;
}
int findLastIndex(int arr[], int end, int target){
int index = -1;
int start = 0;
int middle;
while(start <= end){
  middle = start + (end - start)/2;
  if(arr[middle] <= target){
    start = middle +1;
  }
  else{
    end = middle - 1;
  }
  if(arr[middle] == target)
    index = middle;
} 
return index;
}

int SearchRange(int arr[], int end, int target){
  int range[2];
  range[0] = findFirstIndex( arr, end, target);
  range[1] = findLastIndex( arr, end, target);
  printf("First Index of %d: %d\n",target, range[0]);
  printf("Last Index of %d: %d",target, range[1]);
  
}


int main(void) {
  int arr[] = {1, 2, 2, 0, 2, 4};
  int n;
  n = sizeof(arr)/sizeof(arr[0]);
  SearchRange(arr, n-1, 2);
  return 0;
}



