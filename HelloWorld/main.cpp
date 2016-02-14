/*
  main.cpp THis prints HelloWorld

 Created by Manju Balasubramaniam on 1/15/15.
 Copyright (c) 2015 Manju Balasubramaniam. All rights reserved.
*/ 

#include <iostream>
using namespace std;

int main()
{
    // insert code here...
    float a, b;
    char x;
                cout << "Add or multiply or divide numbers\n\n"; //this will take a number as input 
    
   
    
   cout<<"What do you want to do: Enter 'M'for multiply && 'A' for add && 'D' for divide";
cin>>x;
    
    cout<<"Enter the 2 numbers";
    cin>>a>>b;
    
    switch (x) {
        case 'A':
            cout<< "\nThe Add value of a & b:" << a+b;
            //break;
            
        case 'M':
            cout<< "\nThe Multiply value is"<<a*b;
           // break;
            
        case 'D':
            cout<< "\nThe Divide value is"<<a/b;
            break;
            
        default:
            cout<<"\n Stupido enter A, M or D";
            break;
    }
    
 
}
