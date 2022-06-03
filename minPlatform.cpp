#include <bits/stdc++.h>

using namespace std;

int platform_needed(int arr[],int dep[],int n){
  int i = 1, j = 0;
  int platform = 1, result = 1;

  sort(arr, arr + n);
  sort(dep, dep + n);

  while(i<n && j<n){
    if(arr[i] <= dep[j]){
      platform++;
      i++;
    } else if (arr[i] > dep[j]) {
      platform--;
      j++;
    }

  if(platform>result){
    result = platform;
  }
  }

  

  return result;

}

int main(){
    int arr[] = { 900, 940, 950, 1100, 1500, 1800 };
    int dep[] = { 910, 1200, 1120, 1130, 1900, 2000 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << platform_needed(arr, dep, n);
    return 0;
}