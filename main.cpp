//
//  main.cpp
//  fib
//
//  Created by Mekoah Myers on 1/31/14.
//  Copyright (c) 2014 __MyCompanyName__. All rights reserved.
//

using namespace std;
#include <iostream>

long int work(int ti, int n);

int main(int argc, const char * argv[])
{
   long int ti,n, finish;
    
    cout<<"input how many time u want to got through the fibonacci sequance"<<endl;
    cin>>ti;

    
    finish = work(ti, n);
    
    if(ti>=47||ti<0){
    
        cout<<"cant except that input make sure number is in range of 0 to 46"<<endl;
    }else if(ti<47){
    
    cout<<"after going through the sequance "<< ti <<" amount of times, the answer we got is "<< finish <<endl;
    
    }
        
    return 0;
}

long int work(int ti, int n)
{
   long int i,x,y;
    
    x=0;
    y=1;
    
    for(i=1;i<=ti;i++){
    
        n=x+y;
        y=n-y;
        x=n;
    
    }

    return n;
}
