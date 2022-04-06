#include <bits/stdc++.h>

using namespace std;

void printArr(int arr[], int n)
{
  cout<<"Sorted array"<<endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

void sortArray(int arr[],int n){
  int cnt0=0,cnt1=0,cnt2=0;

  for(int i=0;i<n;i++){
    if(arr[i]==0){
      cnt0++;
    } else if (arr[i]==1){
      cnt1++;
    } else if(arr[i]==2){
      cnt2++;
    }
  }


  int i=0;
  while (cnt0 > 0) {
        arr[i++] = 0;
        cnt0--;
    }

    while (cnt1 > 0) {
        arr[i++] = 1;
        cnt1--;
    }
 
    while (cnt2 > 0) {
        arr[i++] = 2;
        cnt2--;
    }
  
  printArr(arr,n);

}

int main()
{
    int arr[] = { 1,2,0,1,2,1,1,1,0,0,0,1,1,1,1,2,2,2,2,2 };
    int n = sizeof(arr) / sizeof(int);
 
    sortArray(arr, n);
 
    return 0;
}