#include<iostream>
#include<math.h>
using namespace std;
int isprime(int N){
    if(N<2 || (!(N&1) && N!=2))
        return 0;
    for(int i=3; i*i<=N; i+=2){
        if(!(N%i))
            return 0;
    }
    return 1;
}
int main()
{
  int t;
  scanf("%d",&t);
  while (t--)
  {
    long long a;
    cin>>a;
    if(isprime(sqrt(a)))
    printf("YES\n");
    else
    printf("NO\n");
    
  }
  
}