/*
finding the smallest factor that divides the number, 
saving it as a factor and updating the number by dividing it by the factor. 
This process is done recursively till the number becomes 1 after division, which means no other factors are possible.

The calculation is done using sieve of eratosthenes which reduces the time complexity in finding the smallest prime factor.
time: O(log n)
*/
#include <iostream>
using namespace std;
int primes[100001];

void sieveOfEratosthenes(int N) {
   
   N+=2;
   primes[1] = 1;
   for (int i=2; i<N; i++)
      primes[i] = i;
   for (int i=4; i<N; i+=2)
      primes[i] = 2;
   for (int i=3; i*i<N; i++) {
      if (primes[i] == i) {
         for (int j=i*i; j<N; j+=i)
            if (primes[j]==j)
               primes[j] = i;
      }
   }
}
void findPrimeFactors(int num) {
   
   sieveOfEratosthenes(num);
   int factor;
   while (num != 1) {
      factor = primes[num];
      cout<<factor<<" ";
      num /= factor;
   }
}

int main() {
   int N = 45214;
   cout<<"Prime factorization of the number "<<N<<" using sieve is ";
   findPrimeFactors(N);
   return 0;
}
