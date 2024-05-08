#include<bits/std++>
using namespace std;

int binarySearch(int arr[], int low, int high, int x)
{

  while(low<=high){
    int mid = low + (high-low)/2;

    if(arr[mid]==x){
      return mid;
    }

    if(arr[mid]<x){
      return low=mid+1;
    }

    else{
      return high=mid-1;
    }    
  }

  return -1;
  
}

int main()
{
  int arr[] = {3,5,8,22,9,1,55};

  int x=10;

  int n = sizeof(arr)/sizeof(arr[0]);

  int result = binarySearch(arr,0,n-1,x);

  if(result == -1){
    cout<<"Element is present";
  }
  else{
    cout<<"Element not found";
  }  
}
