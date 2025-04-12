#include<bits/stdc++.h>
using namespace std;

int numberOfDigits(int n){
    int count = 0;
    while (n>0)
    {
       n =n/10;
       count++;
    }

    return count;
    
}

int main(){
    int x = 7456;

    int t = 47561245;
    cout<<numberOfDigits(t);

    return 0;
}

