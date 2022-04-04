#include <bits/stdc++.h>
using namespace std;

void rightRoatate(int arr[],int from,int to){
  int temp = arr[to];
  for(int i=to;i>from;i++)
    arr[i]=arr[to-1];
  arr[from] = temp; 
}

void rearrange(int arr[],int n){
  int wrongIndex = -1;
  for(int i=0;i<n;i++){
    if(wrongIndex != -1){
      if((arr[wrongIndex]>=0 && arr[i]<0) || (arr[wrongIndex]<0 && arr[i]>=0)){
        rightRoatate(arr,wrongIndex,i);

        if(i-wrongIndex >= 2)
          wrongIndex += 2;
        else
          wrongIndex = -1;
      }
    } else {
      if((arr[i]<0 && i%2 ==1)||(arr[i]>=0 && i%2 ==0))
        wrongIndex = -1;
    }
  }
}


void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
     
    int arr[] = { -5, -2, 5, 2,4, 7, 1, 8, 0, -8 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    cout << "Given array is \n";
    printArray(arr, n);
 
    rearrange(arr, n);
 
    cout << "Rearranged array is \n";
    printArray(arr, n);
 
    return 0;
}