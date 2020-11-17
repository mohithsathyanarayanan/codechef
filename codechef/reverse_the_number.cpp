#include <iomanip> 
#include <iostream>
#include <vector> 
#include <stdio.h>
#include <stdlib.h>
using namespace std ;
#include <math.h> 


int reverser(int n)
{
    string num_str = to_string(n) ;
    int len = num_str.length() ;
    string rev_str="" ;
    int result ;
    for(int i = len-1 ; i>-1 ; i--)
    {
        string s = string(1,num_str[i]);
        rev_str=rev_str+s ;
    }

    result = stoi(rev_str) ;
    return result ; 

}


int main()
{
    int n ;
    scanf("%d",&n) ;
    int num,result ;
    vector <int> v ;
    for(int i = 0 ; i<n ; i++)
    {
        scanf("%d",&num) ;
        result = reverser(num) ;
        v.push_back(result) ;
    }

    for(int x : v)
    {
        cout<<x<<endl ;
    }
}