// Find the ugly number is a positive integers which dones not have a prime factor other than 2,3 and 5.

// example 1:
// Input: n = 6
// Output: true
// explaination: 2 X 3 = 6

#include<bits/stdc++.h>
using namespace std;

class First
{
private:
    /* data */
public:
   bool isUgly(int n){
    if (n <= 0)
    {
        return false;
    }
    
    while (n%2==0)
    {
        n = n/2; 
    }
    
    while (n%3==0)
    {
        n = n/3; 
    }
    
    while (n%5==0)
    {
        n = n/5; 
    }
    if (n==1)
    {
        return 1;
    }

   
};


};



int main(){
    First obj1;
    bool x = obj1.isUgly(6);
    cout<<x;
}