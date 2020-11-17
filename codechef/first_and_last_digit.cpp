#include <iomanip> 
#include <iostream>
#include <vector> 
#include <stdio.h>
#include <stdlib.h>
using namespace std ;
#include <math.h> 


int sum_cal(int n)
{
    string num_str = to_string(n) ;
    string f = string(1,num_str[0]) ;
    string l = string(1,num_str[num_str.length()-1] ) ;
    int f_i,l_i ;
    f_i = stoi(f) ;
    l_i = stoi(l) ;
    int result ;
    result = f_i + l_i ;
    return result ;
}


int main()
{
    int new_num ;
    int n ;
    vector <int> v ;  
    scanf("%d" , &n) ;
    for(int i = 0; i<n;i++)
    {
        scanf("%d", &new_num) ;
        int sum ;
        sum = sum_cal(new_num) ;
        v.push_back(sum) ;
    }

    for(int x : v)
    {
        cout<<x<<endl ;
    }
}
