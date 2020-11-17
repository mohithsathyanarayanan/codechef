#include <iomanip> 
#include <iostream>
#include <vector> 
#include <stdio.h>
#include <stdlib.h>
using namespace std ;
#include <math.h> 

int det_4(int n)
{
    string num_str = to_string(n) ;
    int len = num_str.length();
    string s ;
    int i ;
    int counter =0 ;
    for(int i = 0; i< len ;i++)
    {
        string f = string(1,num_str[i]) ;
        int f_i = stoi(f) ;
        if(f_i == 4)
        {
            counter=counter+1 ;
        }
    }
    return counter ;
}



int main()
{
    int n ;
    scanf("%d",&n) ;
    int num ;
    int res ;
    vector <int> v ;
    for(int i=0; i< n; i++)
    {
        scanf("%d",&num) ;
        res = det_4(num) ;
        v.push_back(res) ;
    }

    for(int x : v)
    {
        cout<<x<<endl ;
    }
}