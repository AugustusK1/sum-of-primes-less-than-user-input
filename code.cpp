#include <iostream>
using namespace std;

int main()
{
    int n;   
    cin>>n;
    int sum = 0; //initializing the variable with 0 so if n <= 2 the sum will be 0
    bool isPrime;
    
    if(n>2)
    {
        sum=2;
        for(int i=3; i<n; i+=2)//for loop to generate odd numbers since two is the only even prime number
        {
            isPrime = true;     //isPrime is set to true every time the for loop runs
            for(int j=3; j<=i/2; j+=2) //nested for loop to check all odd numbers less than or equal to 1/2 of each i to find the factors of i
            {
                if(i%j==0)//if this expression is true, i is not prime
                {
                    isPrime = false;
                    break;
                }
            }
            
            if(isPrime == true)//if after the above for loop runs and isPrime is still true, then i is prime
            {
                sum += i;
            }
        }
    }
    
    cout<<sum<<endl;
    return 0;
}