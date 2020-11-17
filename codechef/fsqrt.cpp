#include <iomanip> 
#include <iostream>
#include <vector> 
#include <stdio.h>
#include <stdlib.h>
using namespace std ;
#include <math.h> 


float fsqrt(int n)
{
    float sqr = sqrt(n) ;
    int res = round(sqr) ;
    return res ; 
}


int main()
{
    int n ;
    scanf("%d",&n);
    int num,result ;
    vector <int> v ;
    for(int i = 0 ; i<n ; i++)
    {
        scanf("%d",&num) ;
        result=fsqrt(num) ;
        v.push_back(result) ;
    }

    for(int x : v)
    {
        cout<<x<<endl ;
    }

}