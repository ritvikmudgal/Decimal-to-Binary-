#include <iostream>
using namespace std;
int main(){
   int n;//decimal number
   cout<< "Enter a Number- ";
   cin>>n;
   int bin=0;
   int pow=1;
   while (n>0){
      int rem= n%2;
      n= n/2;
      bin+= (rem*pow);
      pow*=10;
   }
   cout<<bin<<endl;
   return 0;
}
