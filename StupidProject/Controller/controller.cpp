//
//  controller.cpp
//  StupidProject
//
//  Created by Oleary, CONNOR on 1/25/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "controller.hpp"

using namespace std;

Controller :: Controller()
{
    
}

void Controller :: start()
{
    //Arrays
    int test[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    double testD[] = {1.0, 0.9, 0.8, 0.7, 0.6, 0.5, 0.4, 0.3, 0.2, 0.1};
    string testS[] = {"Ten", "Nine", "Eight", "Seven", "Six", "Five", "Four", "Three", "Two", "One"};
    
    //Output
    string name = "Connor";
    string * sName = &name;
    
    cout << name << endl;
    for(int count = 13; count < 32; count++)
    {
        cout << count << " ";
    }
    cout << endl << sName << endl;
    
    for (int index = 0; index < 10; index++)
    {
        cout << test[index] << " " << testD[index] << " " << testS[index] << endl;
    }
}
