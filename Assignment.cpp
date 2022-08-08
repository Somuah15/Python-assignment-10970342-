//A program to calculate the average of prime numbers from 1 to 30
#include <iostream>
using namespace std;
bool isPrime(int n){
   for(int i = 2; i < n; i++){
      if(n%i == 0){
         return false;
      }
   }
   return true;
}
int findPrimeSum(int n){
   int sumVal = 0;
   for(float i = 2; i <= n; i++){
      if(isPrime(i))
         sumVal += i;
   }
   return sumVal;
}
int findPrimeCount(int n){
    int j=0;
    for(float i = 2; i <= n; i++){
        if(isPrime(i))
            j++;
    }
    return j;
}

int main(){
   int n = 30;
   float x= findPrimeSum(n)/findPrimeCount(n);
   cout<<"The average of prime numbers from 1 to "<<n<<" is "<<x;
   return 0;
}
