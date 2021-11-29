// first print the elements of array1
  for(int i=0;i<n;i++){
    cout<<arr1[i]<<" ";
  }
  // check for the second array 
  // if elemtns in array 2 are not same as array 1 the print them
  for(int j=0;j<m;j++){
    int flag = 0;
    for(int i=0;i<n;i++){
      if(arr1[i]==arr2[j]){
        flag=1;
        break;
      }
    }
    if(flag!=1){
      cout<<arr2[j]<<" ";
    }
  }