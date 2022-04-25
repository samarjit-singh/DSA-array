#include<bits/stdc++.h>

using namespace std;

void func(int n){
  bool prime[n+1];
  memset(prime, true, sizeof(prime));

  for(int i = 2; i*i<=n;i++){
    if(prime[i]==true){
      for(int j = i * i; j <= n; j += i){
        prime[j] = false;
      }
    }
  }

  for(int i = 2;i <= n; i++){
    if(prime[i])
      cout << i <<" ";
  }
}

int main()
{
    int n = 10;
    cout << "Following are the prime numbers smaller "
         << " than or equal to " << n << endl;
    func(n);
    return 0;
}