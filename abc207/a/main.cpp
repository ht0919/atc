#include <bits/stdc++.h>
using namespace std;
#define SIZE_OF_ARRAY(array) (sizeof(array)/sizeof(array[0]))
int main() {
  int A[3]; cin>>A[0]>>A[1]>>A[2];
  sort(A, A + SIZE_OF_ARRAY(A));
  cout<<A[1]+A[2]<<endl;
  return 0;
}
