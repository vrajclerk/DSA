#include<iostream>
using namespace std;

int countsetBits(int n){
    int count=0;

    while(n>1){
        if(n%2==1)
            count++;
        n=n/2;
    }
    if(n==1) 
        count++;
    return count;

}